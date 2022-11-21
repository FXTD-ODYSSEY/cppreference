// cppreference link https://en.cppreference.com/w/cpp/memory/scoped_allocator_adaptor
#include <boost/interprocess/allocators/adaptive_pool.hpp>
#include <boost/interprocess/managed_shared_memory.hpp>
#include <scoped_allocator>
#include <vector>
namespace bi = boost::interprocess;
template <class T>
using alloc = bi::adaptive_pool<T,
    bi::managed_shared_memory::segment_manager>;
using ipc_row = std::vector<int, alloc<int>>;
using ipc_matrix = std::vector<ipc_row, std::scoped_allocator_adaptor<alloc<ipc_row>>>;
int main()
{
    bi::managed_shared_memory s(bi::create_only, "Demo", 65536);

    // create vector of vectors in shared memory
    ipc_matrix v(s.get_segment_manager());

    // for all these additions, the inner vectors obtain their allocator arguments
    // from the outer vector's scoped_allocator_adaptor
    v.resize(1);
    v[0].push_back(1);
    v.emplace_back(2);
    std::vector<int> local_row = { 1, 2, 3 };
    v.emplace_back(local_row.begin(), local_row.end());

    bi::shared_memory_object::remove("Demo");
}

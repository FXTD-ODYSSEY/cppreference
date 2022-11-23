// cplusplus link https://cplusplus.com/reference/future\packaged_task\reset
// packaged_task::get_future
#include <future> // std::packaged_task, std::future
#include <iostream> // std::cout
#include <thread> // std::thread
#include <utility> // std::move

// a simple task:
int triple(int x) { return x * 3; }

int main()
{
    std::packaged_task<int(int)> tsk(triple); // package task

    std::future<int> fut = tsk.get_future();
    tsk(33);
    std::cout << "The triple of 33 is " << fut.get() << ".\n";

    // re-use same task object:
    tsk.reset();
    fut = tsk.get_future();
    std::thread(std::move(tsk), 99).detach();
    std::cout << "Thre triple of 99 is " << fut.get() << ".\n";

    return 0;
}

// cplusplus link https://cplusplus.com/reference/future\packaged_task\get_future
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

    std::future<int> fut = tsk.get_future(); // get future

    std::thread(std::move(tsk), 33).detach(); // spawn thread and call task

    // ...

    int value = fut.get(); // wait for the task to complete and get result

    std::cout << "The triple of 33 is " << value << ".\n";

    return 0;
}

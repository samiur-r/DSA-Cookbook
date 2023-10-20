#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> myQueue;

    // Enqueuing elements onto the queue
    myQueue.push(5);
    myQueue.push(10);
    myQueue.push(15);

    // Printing the front element
    cout << "Front element: " << myQueue.front() << endl;

    // Dequeuing the front element
    myQueue.pop();

    // Printing the front element after dequeuing
    cout << "Front element after pop: " << myQueue.front() << endl;

    // Checking if the queue is empty
    if (myQueue.empty())
        cout << "The queue is empty!" << endl;
    else
        cout << "The queue is not empty!" << endl;

    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> myPQ;

    // Inserting elements into the priority queue
    myPQ.push(3);
    myPQ.push(5);
    myPQ.push(1);

    // Printing the top element
    cout << "Top element: " << myPQ.top() << endl;

    // Removing the top element
    myPQ.pop();

    // Printing the top element after popping
    cout << "Top element after pop: " << myPQ.top() << endl;

    // Checking if the priority queue is empty
    if (myPQ.empty())
        cout << "The priority queue is empty!" << endl;

    else
        cout << "The priority queue is not empty!" << endl;

    return 0;
}

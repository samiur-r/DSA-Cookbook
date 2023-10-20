#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    // Printing the top element
    cout << "Top element: " << myStack.top() << endl;

    // Popping the top element
    myStack.pop();

    // Printing the top element after popping
    cout << "Top element after pop: " << myStack.top() << endl;

    // Checking if the stack is empty
    if (myStack.empty())
        cout << "The stack is empty!" << endl;
    else
        cout << "The stack is not empty!" << endl;

    return 0;
}

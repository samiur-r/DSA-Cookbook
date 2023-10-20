#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // Creating a deque and initializing it with values
    deque<int> myDeque = {1, 2, 3, 4, 5};

    // Adding elements to the beginning and end
    myDeque.push_back(6);
    myDeque.push_front(0);

    // Printing the elements of the deque
    cout << "Deque elements: ";
    for (int i : myDeque)
        cout << i << " ";

    // Removing elements from the beginning and end
    myDeque.pop_front();
    myDeque.pop_back();

    // Printing the elements after popping
    cout << "\nDeque after popping front and back elements: ";
    for (int i : myDeque)
        cout << i << " ";

    // Accessing elements
    int firstElement = myDeque.front();
    int lastElement = myDeque.back();
    cout << "\nFirst Element: " << firstElement << " Last Element: " << lastElement << endl;

    return 0;
}

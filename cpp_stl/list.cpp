#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Creating a list of integers and initializing it with values
    list<int> myList = {5, 3, 5, 2, 9};

    // Adding an element to the end of the list
    myList.push_back(12);

    // Adding an element to the beginning of the list
    myList.push_front(0);

    // Sorting the elements of the list in non-decreasing order
    myList.sort();

    // Removing duplicate elements from the sorted list
    myList.unique();

    // Printing the elements of the list
    cout << "List elements: ";
    for (int i : myList)
        cout << i << " ";

    // Printing the total number of elements in the list
    cout << "\nSize of the list is: " << myList.size() << endl;

    // Removing the element from the front of the list
    myList.pop_front();

    // Printing the elements of the list after deletion
    cout << "List after popping front element: ";
    for (int i : myList)
        cout << i << " ";

    return 0;
}

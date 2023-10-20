#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> mySet;

    // Inserting elements into the set
    mySet.insert(5);
    mySet.insert(3);
    mySet.insert(8);
    mySet.insert(3); // This won't be inserted

    // Printing the elements of the set
    cout << "Set elements: ";
    for (int elem : mySet)
        cout << elem << " ";

    // Removing an element
    mySet.erase(3);

    // Printing the elements after erasing
    cout << "\nAfter erasing element 3: ";
    for (int elem : mySet)
        cout << elem << " ";

    // Finding an element
    if (mySet.find(5) != mySet.end())
        cout << "\nElement 5 found" << endl;
    else
        cout << "Element 5 not found" << endl;

    return 0;
}

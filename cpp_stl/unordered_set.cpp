#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> myUnorderedSet;

    // Inserting elements into the unordered set
    myUnorderedSet.insert(5);
    myUnorderedSet.insert(3);
    myUnorderedSet.insert(8);
    myUnorderedSet.insert(3); // This won't be inserted

    // Printing the elements of the unordered set
    cout << "Unordered set elements: ";
    for (int elem : myUnorderedSet)
        cout << elem << " ";

    // Removing an element
    myUnorderedSet.erase(3);

    // Printing the elements after erasing
    cout << "\nAfter erasing element 3: ";
    for (int elem : myUnorderedSet)
        cout << elem << " ";
    cout << endl;

    return 0;
}

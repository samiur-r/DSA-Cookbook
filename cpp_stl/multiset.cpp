#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> myMultiset;

    // Inserting elements into the multiset
    myMultiset.insert(5);
    myMultiset.insert(3);
    myMultiset.insert(8);
    myMultiset.insert(3); // This will be inserted

    // Printing the elements of the multiset
    cout << "Multiset elements: ";
    for (int elem : myMultiset)
        cout << elem << " ";

    // Counting the number of specific elements
    cout << "\nCount of 3: " << myMultiset.count(3) << endl;

    // Removing an element
    myMultiset.erase(3);

    // Printing the elements after erasing
    cout << "After erasing element 3: ";
    for (int elem : myMultiset)
        cout << elem << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> myMultimap;

    // Inserting elements into the multimap
    myMultimap.insert(make_pair(1, "Alice"));
    myMultimap.insert(make_pair(2, "Bob"));
    myMultimap.insert(make_pair(2, "Charlie")); // Same key as Bob

    // Printing the elements of the multimap
    cout << "Multimap elements:" << endl;
    for (auto elem : myMultimap)
        cout << elem.first << ": " << elem.second << endl;

    // Finding elements with a specific key
    cout << "\nElements with key 2:" << endl;
    auto range = myMultimap.equal_range(2);
    for (auto it = range.first; it != range.second; ++it)
        cout << it->first << ": " << it->second << endl;

    // Removing an element
    myMultimap.erase(2);

    // Printing the elements after erasing
    cout << "\nAfter erasing elements with key 2:" << endl;
    for (auto elem : myMultimap)
        cout << elem.first << ": " << elem.second << endl;

    return 0;
}

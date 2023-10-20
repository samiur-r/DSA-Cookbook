#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, string> myUnorderedMap;

    // Inserting elements into the unordered map
    myUnorderedMap.insert(make_pair(1, "Alice"));
    myUnorderedMap[2] = "Bob"; // Another way to insert elements

    // Printing the elements of the unordered map
    cout << "Unordered map elements:" << endl;
    for (auto elem : myUnorderedMap)
        cout << elem.first << ": " << elem.second << endl;

    // Removing an element
    myUnorderedMap.erase(1);

    // Printing the elements after erasing
    cout << "\nAfter erasing element with key 1:" << endl;
    for (auto elem : myUnorderedMap)
        cout << elem.first << ": " << elem.second << endl;

    return 0;
}

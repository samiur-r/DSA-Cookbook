#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> myMap;

    // Inserting elements into the map
    myMap.insert(make_pair(1, "Alice"));
    myMap.insert(make_pair(2, "Bob"));
    myMap[3] = "Charlie"; // Another way to insert elements

    // Printing the elements of the map
    cout << "Map elements:" << endl;
    for (const auto &elem : myMap)
        cout << elem.first << ": " << elem.second << endl;

    // Removing an element
    myMap.erase(2);

    // Printing the elements after erasing
    cout << "\nAfter erasing element with key 2:" << endl;
    for (const auto &elem : myMap)
        cout << elem.first << ": " << elem.second << endl;

    // Finding an element by key
    if (myMap.find(2) != myMap.end())
        cout << "\nKey 2 found" << endl;
    else
        cout << "\nKey 2 not found" << endl;

    return 0;
}

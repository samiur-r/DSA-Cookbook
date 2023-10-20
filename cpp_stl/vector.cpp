#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Creating and initializing a vector 'v'
    vector<int> v = {1, 2, 3};
    cout << "Initial vector elements: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Adding an element to the end of the vector
    v.push_back(5);
    cout << "After adding 5 at the end: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Inserting an element at a specific position
    v.insert(v.begin() + 3, 4);
    cout << "After inserting 4 at the fourth position: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Erasing the last element from the vector
    v.erase(v.end() - 1);
    cout << "After erasing the last element: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Displaying the last element and size of the vector
    cout << "Last element in vector: " << v.back() << endl;
    cout << "Size of vector: " << v.size() << endl;

    // Clearing all elements from the vector
    v.clear();
    cout << "Size after clearing all elements: " << v.size() << endl;

    // Resizing the vector to have 3 elements
    v.resize(3);
    cout << "Size after resizing to 3 elements: " << v.size() << endl;
    cout << "Elements after resizing: ";
    for (int i : v)
        cout << i << " "; // Note: The new elements are default-initialized (zero for integers)
    cout << endl;

    return 0;
}

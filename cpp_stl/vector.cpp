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

    // Adding an element to the end of the vector
    v.push_back(5);
    cout << "\nAfter adding 5 at the end: ";
    for (int i : v)
        cout << i << " ";

    // Inserting an element at a specific position
    v.insert(v.begin() + 3, 4);
    cout << "\nAfter inserting 4 at the fourth position: ";
    for (int i : v)
        cout << i << " ";

    // Erasing the last element from the vector
    v.erase(v.end() - 1);
    cout << "\nAfter erasing the last element: ";
    for (int i : v)
        cout << i << " ";

    // Displaying the first, last element and size of the vector
    cout << "\nFirst element in vector: " << v.front() << endl;
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

    cout << v.empty(); // Check if the vector is empty

    return 0;
}

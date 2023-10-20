#include <iostream> // Included iostream for standard I/O operations
#include <utility>  // Included utility for pair class template

using namespace std;

int main()
{
    // Creating a pair 'p1' with an integer and a character, and initializing it
    pair<int, char> p1 = {2, 'a'};
    // Printing the elements of the pair 'p1'
    cout << "The integer element in pair p1: " << p1.first << endl;
    cout << "The char element in pair p1: " << p1.second << endl;

    // Creating a nested pair 'p2' and initializing it
    // The first element is an integer and the second element is another pair of integers
    pair<int, pair<int, int>> p2 = {5, {1, 2}};
    // Printing the elements of the nested pair 'p2'
    cout << "The integer element in pair p2: " << p2.first << endl;
    cout << "The first integer in the nested pair of p2: " << p2.second.first << endl;
    cout << "The second integer in the nested pair of p2: " << p2.second.second << endl;

    // Creating an array 'arr' of pairs of integers and initializing it
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    // Printing the first element of the second pair in the array 'arr'
    cout << "The first element of the second pair in the array: " << arr[1].first << endl;

    return 0;
}

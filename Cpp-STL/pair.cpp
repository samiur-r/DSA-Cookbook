#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, char> p1 = {2, 'a'};
    cout << p1.first << " " << p1.second << endl; // output: 2 a

    pair<int, pair<int, int>> p2 = {5, {1, 2}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl; // output: 5 1 2

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}}; // output: 3
    cout << arr[1].first << endl;

    return 0;
}
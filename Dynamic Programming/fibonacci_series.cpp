#include <bits/stdc++.h>

using namespace std;
const int MAX = 100;
int memo[MAX];

int fibo(int n) 
{
    if(n <= 1) return n;
    if(memo[n] != -1) return memo[n];
    return memo[n] = fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo));
    cout << fibo(n);

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int rodCutting(int price[], int n) {
    if (n <= 0) {
        return 0;
    }
    
    int dp[n + 1];
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        int maxVal = -1;
        for (int j = 0; j < i; j++) {
            maxVal = max(maxVal, price[j] + dp[i - j - 1]);
        }
        dp[i] = maxVal;
    }

    return dp[n];
}

int main() {
    int price[] = {1, 5, 8, 9};
    int n = 4;

    int maxValue = rodCutting(price, n);

    printf("Maximum value: %d\n", maxValue);

    return 0;
}
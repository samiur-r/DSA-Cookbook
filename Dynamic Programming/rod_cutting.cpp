#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int rodCutting(int price[], int n) {
    if (n <= 0)
        return 0;

    int maxVal = -1;

    for (int i = 1; i <= n; i++) {
        int currentVal = price[i - 1] + rodCutting(price, n - i);
        maxVal = max(maxVal, currentVal);
    }

    return maxVal;
}

int main() {
    int price[] = {1, 5, 8, 9};
    int n = 4;

    int maxValue = rodCutting(price, n);

    printf("Maximum value: %d\n", maxValue);

    return 0;
}
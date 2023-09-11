#include <bits/stdc++.h>
using namespace std;

int ResultantString(char *s) {
    int res = 0;
    int pos = 0;
    int n = strlen(s);

    while (pos < n) {
        if (s[pos] == '_') {
            int maxDigit = -1;
            for (int digit = 9; digit >= 0; digit--) {
                s[pos] = '0' + digit;
                int num = atoi(s);
                int sqrtNum = sqrt(num);
                if (sqrtNum * sqrtNum == num) {
                    maxDigit = digit;
                    break;
                }
            }
            if (maxDigit == -1) {
                return 0; // No perfect square found.
            }
            res = res * 10 + maxDigit; // Build the result.
        } else {
            res = res * 10 + (s[pos] - '0'); // Keep the existing digit.
        }
        pos++;
    }

    return res;
}

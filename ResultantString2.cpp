#include <bits/stdc++.h>
using namespace std;

int ResultantString(char *s) {
    int res = 0;
    int pos = 0;

    while (s[pos] != '\0') {
        if (s[pos] == '_') {
            for (int digit = 9; digit >= 0; digit--) {
                s[pos] = '0' + digit;
                int num = atoi(s);
                int sqrtNum = sqrt(num);
                if (sqrtNum * sqrtNum == num) {
                    res = num;
                    break;
                }
            }
            // Reset the character to underscore if no perfect square found.
            if (s[pos] != '_') {
                s[pos] = '_';
            }
        }
        pos++;
    }

    return res;
}

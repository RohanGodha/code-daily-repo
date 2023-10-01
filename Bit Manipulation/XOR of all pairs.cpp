#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            result ^= (arr[i] ^ arr[j]);
        }
    }

    cout << "XOR of all pairs is: " << result << endl;
    
    return 0;
}

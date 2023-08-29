#include <iostream>
using namespace std;

void toBinary(int decimal) {
    int binary[40];
    int index = 0;

    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal = decimal / 2;
    }

    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << endl; // Print a new line after the binary representation
}

int main() {
    int number;

    cout << "Enter a decimal number between 1 and 5000: ";
    cin >> number;

    if (number < 1 || number > 5000) {
        cout << "Invalid number" << endl;
    } else {
        toBinary(number);
    }

    return 0;
}

#include <iostream>

// Function to count the number of set bits (1s) in an integer
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

// Function to check if a number is a power of 2
bool isPowerOfTwo(int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}

// Function to toggle the nth bit of a number
int toggleBit(int num, int n) {
    return num ^ (1 << n);
}

// Function to set the nth bit of a number
int setBit(int num, int n) {
    return num | (1 << n);
}

// Function to clear the nth bit of a number
int clearBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num = 42; // Example number

    std::cout << "Number: " << num << std::endl;
    std::cout << "Number of set bits: " << countSetBits(num) << std::endl;
    std::cout << num << " is " << (isPowerOfTwo(num) ? "" : "not ") << "a power of 2" << std::endl;

    int n = 3; // Bit position to manipulate
    std::cout << "Toggling bit at position " << n << ": " << toggleBit(num, n) << std::endl;
    std::cout << "Setting bit at position " << n << ": " << setBit(num, n) << std::endl;
    std::cout << "Clearing bit at position " << n << ": " << clearBit(num, n) << std::endl;

    return 0;
}

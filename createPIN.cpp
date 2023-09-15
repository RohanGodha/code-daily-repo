import java.util.Arrays;

class UserMainCode {
    public int createPIN(int input1, int input2, int input3) {
        // Count the frequency of digits in all three input numbers
        int[] digitCount = new int[10];
        countDigits(input1, digitCount);
        countDigits(input2, digitCount);
        countDigits(input3, digitCount);

        // Find the digit with maximum frequency and the largest digit if there's a tie
        int maxFrequencyDigit = -1;
        int maxFrequency = -1;
        int smallestDigit = Integer.MAX_VALUE;
        int largestDigit = Integer.MIN_VALUE;

        for (int i = 0; i < 10; i++) {
            if (digitCount[i] > maxFrequency || (digitCount[i] == maxFrequency && i > maxFrequencyDigit)) {
                maxFrequencyDigit = i;
                maxFrequency = digitCount[i];
            }
            if (digitCount[i] > 0) {
                smallestDigit = Math.min(smallestDigit, i);
                largestDigit = Math.max(largestDigit, i);
            }
        }

        // Create the PIN using the specified rules
        int pin = maxFrequencyDigit * 1000 + smallestDigit * 100 + largestDigit * 10 + maxFrequencyDigit;

        return pin;
    }

    private static void countDigits(int number, int[] digitCount) {
        while (number > 0) {
            int digit = number % 10;
            digitCount[digit]++;
            number /= 10;
        }
    }
}

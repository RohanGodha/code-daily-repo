class Solution {
public:
    int longestPalindrome(string s) {
        int numberOfOdd = 0;
        unordered_map<char, int> ump;
        for(char ch : s) {
            ump[ch]++;
            if (ump[ch] % 2 == 1)  numberOfOdd++;
            else numberOfOdd--;
        }
        if (numberOfOdd > 1) return s.length() - numberOfOdd + 1;
        return s.length();
    }
};

#include <string>

class StringUtils {
public:
    static bool allWordsContainsChar(const std::string& str, char ch) {
        // Initialize a variable to keep track of whether all words contain the character.
        bool allContainChar = true;
        
        // Initialize variables to keep track of the start and end of each word.
        int start = 0;
        int end = 0;
        
        // Iterate through the string character by character.
        for (int i = 0; i < str.length(); i++) {
            char currentChar = str[i];
            
            // Check if the current character is a space or the last character in the string.
            if (currentChar == ' ' || i == str.length() - 1) {
                // Calculate the end of the current word.
                end = (i == str.length() - 1) ? i : i - 1;
                
                // Check if the current word contains the given character.
                bool wordContainsChar = false;
                for (int j = start; j <= end; j++) {
                    if (str[j] == ch) {
                        wordContainsChar = true;
                        break; // No need to check further.
                    }
                }
                
                // Update the flag for all words containing the character.
                allContainChar = allContainChar && wordContainsChar;
                
                // Update the start to the next word.
                start = i + 1;
            }
        }
        
        return allContainChar;
    }
};

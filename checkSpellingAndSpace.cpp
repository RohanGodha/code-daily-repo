#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

bool isOneCharDifference(const std::string& word1, const std::string& word2) {
    int diffCount = 0;
    for (size_t i = 0; i < word1.size(); ++i) {
        if (std::tolower(word1[i]) != std::tolower(word2[i])) {
            diffCount++;
            if (diffCount > 1) {
                return false;
            }
        }
    }
    return diffCount == 1;
}

void checkSpellingAndSpace(const std::string& sentence) {
    std::unordered_set<std::string> dictionary = {
        "environment", "always", "protect", "irreplaceable", "different",
        "absolutely", "greatest", "glory", "predictable", "flavor", "should",
        "order", "just"
    };

    std::istringstream iss(sentence);
    std::string word;
    std::vector<std::string> words;
   
    while (iss >> word) {
        words.push_back(word);
    }
   
    if (words.size() < 2) {
        std::cout << "Invalid input" << std::endl;
        return;
    }

    for (const std::string& word : words) {
        if (dictionary.find(word) != dictionary.end()) {
            std::cout << word << " ";
        } else {
            bool foundCorrection = false;
            for (const std::string& dictWord : dictionary) {
                if (word.size() == dictWord.size() && isOneCharDifference(word, dictWord)) {
                    std::cout << dictWord << " ";
                    foundCorrection = true;
                    break;
                }
            }
            if (!foundCorrection) {
                std::cout << word << " ";
            }
        }
    }
    std::cout << std::endl;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    checkSpellingAndSpace(sentence);

    return 0;
}

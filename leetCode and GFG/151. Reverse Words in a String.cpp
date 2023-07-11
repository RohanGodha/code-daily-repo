class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;      
        for (char c : s) {
            if (c == ' ' && !word.empty()) {
                words.push_back(word);
                word = "";
            } else if (c != ' ') {
                word += c;
            }
        }       
        if (!word.empty()) {
            words.push_back(word);
        }
        reverse(words.begin(), words.end());        
        string ans;
        for (const string& w : words) {
            ans += w + " ";
        }        
        if (!ans.empty()) {
            ans.pop_back();
        }
        return ans;
    }
};

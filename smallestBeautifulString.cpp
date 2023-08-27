class Solution {
public:
    string smallestBeautifulString(string s, int k) {
        int n = s.size(); 

        for (int i = n-1; i >= 0; --i) {
            for (char ch = s[i]+1; ch < 'a' + k; ++ch) {
                if ((i == 0 || s[i-1] != ch) && (i <= 1 || s[i-2] != ch)) {
                    s[i] = ch; 
                    for (int j = i+1; j < n; ++j) {
                        for (char cand = 'a'; cand < 'a' + k; ++cand) {
                            if (cand != s[j-1] && (j == 1 || cand != s[j-2])) {
                                s[j] = cand; 
                                break; 
                            }
                        }
                    }
                    return s; 
                }
            }
        }
        return ""; 
    }
};

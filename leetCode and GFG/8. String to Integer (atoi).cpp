class Solution {
public:
    int myAtoi(string str) {
        int r = 0;
        stringstream ans;
        ans<<str;
        ans>>r;
        return r;
    }
};

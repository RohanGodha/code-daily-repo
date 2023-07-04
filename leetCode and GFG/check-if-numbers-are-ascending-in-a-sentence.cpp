class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> v;
        int count=0, num=0;
        for (int i=0; i<s.size(); i++) {
            if (isdigit(s[i]))  num=num*10+(s[i] - '0');
            else {
                if(num>0){
                    count++;
                    v.push_back(num);
                    num=0;
                }
            }
        }
        if (num>0){
            count++;
            v.push_back(num);
        }
        if (v.size() < 2) {
            return true;
        }
        for (int i=1; i<v.size(); i++) {
            if(v[i]<=v[i-1]) {
                return false;
            }
        }
        return true;
    }
};

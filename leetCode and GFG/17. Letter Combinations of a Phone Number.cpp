class Solution {
public:
    void helper(string digits, string output, vector<string> &ans, string mapping[], int index){
        if(digits.length()==0)return;
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int ele= digits[index]-'0';
        string val= mapping[ele];
        for(int i=0; i<val.length(); i++){
            output.push_back(val[i]);
            helper(digits, output, ans, mapping, index+1);
            output.pop_back();
        }
    }  
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;
        string output="";
        helper(digits, output, ans, mapping, index);
        return ans;
    }
};

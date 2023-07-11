class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        stack<string> st;
        string number = "";

        for (int i = 0; i < s.size(); i++) {
            string t = string(1, s[i]);

            if (isdigit(s[i])) {
                number += s[i];
                continue;
            }

            if (s[i] == '[') {
                st.push(number);
                number.clear();
            }

            if (s[i] == ']') {
                string tempString = "";

                while (st.top() != "[") {
                    tempString += st.top();
                    st.pop();
                }

                st.pop();
                int temp = stoi(st.top());
                st.pop();

                for (int j = 0; j < temp; j++) {
                    ans += tempString;
                }

                st.push(ans);
                ans.clear();
                continue;
            }

            st.push(t);
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans; 
    }
};

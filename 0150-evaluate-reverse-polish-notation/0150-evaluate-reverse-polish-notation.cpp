class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int> st;
        for(int i = 0; i<tokens.size(); i++){
            if(tokens[i] == "+"){
                long long int x = st.top();
                st.pop();
                long long int y = st.top();
                st.pop();
                long long int z = x + y;
                st.push(z);
            }
            else if(tokens[i] == "-"){
                long long int x = st.top();
                st.pop();
                long long int y = st.top();
                st.pop();
                long long int z = y - x;
                st.push(z);
            }
            else if(tokens[i] == "*"){
                long long int x = st.top();
                st.pop();
                long long int y = st.top();
                st.pop();
                long long int z = y * x;
                st.push(z);
            }
            else if(tokens[i] == "/"){
                long long int x = st.top();
                st.pop();
                long long int y = st.top();
                st.pop();
                long long int z = y / x;
                st.push(z);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s.size()==0){
            return true;
        }
        if(s.size()%2!=0){
            return false;
        }
        stack <char>st;
        for(char c: s){
            if(c=='(' or c=='{' or c=='['){
                st.push(c);
            }
            else{
                if(st.empty()==false){
                    if((c==')' and st.top()=='(')
                    or(c=='}' and st.top()=='{')
                    or (c==']' and st.top()=='[')
                    )
                    {
                        st.pop();
                    }
                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};

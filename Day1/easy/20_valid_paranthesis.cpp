#include <stack>
using namespace std;

class Solution {
    char map_bracket(char s){
        switch(s){
            case ')':
                return '(';
            case '}':
                return '{';
            case ']':
                return '[';
        }

        return 'J';
    }
public:
    bool isValid(string s) {
stack<char> st;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            } else{
                if(st.empty() || st.top() != map_bracket(s[i])){
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};
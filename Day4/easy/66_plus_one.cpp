/*

Analysis

optimized: O(n) and space complexity O(1)

My Approach: O(n) and space complexity O(n), used stack approach


*/

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        stack<int> st;
        int result;
        int carry = 0;

        for(int i = digits.size() - 1; i >= 0; i--){

            if(i == digits.size() - 1){
                result = (digits[i] + 1) % 10;
                carry = (digits[i] + 1) / 10;
            } else {
                result = (digits[i] + carry) % 10;
                carry = (digits[i] + carry) / 10;
            }

            st.push(result);
        }

        if(carry != 0){
            st.push(carry);
        }

        for(int i = 0; i < digits.size() - st.size(); i++) {
            digits.push_back(0);
        }

        for(int i = 0; i < digits.size(); i++) {
            digits[i] = st.top();
            st.pop();
        }

        return digits;
        
    }
};




// Simple solution with space complexity of O(1)


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] + 1 != 10) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
            if (i == 0) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        return digits;        
    }
};
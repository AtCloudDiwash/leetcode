/*

Analysis

optimized: O(n) and space complexity O(n), it is very simplest

My Approach: O(n), two pointer approach lil complicated


*/



#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int pointerA = 0;
        int pointerB = 0;
        int spaceCounter = 0;

        while(pointerB < s.size()){

            if(s[pointerB] == ' '){
                spaceCounter++;
            } else if(s[pointerB] != ' ' && spaceCounter != 0){
                pointerA = pointerB;
                spaceCounter = 0;
            }
            pointerB++;
        }

        return pointerB - pointerA - spaceCounter;
    }
};





class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() - 1;

        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        int start = end;
        while (start >= 0 && s[start] != ' ') {
            start--;
        }

        return end - start;        
    }
};
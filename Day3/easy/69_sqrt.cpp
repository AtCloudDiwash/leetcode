/*

Analysis

optimized: O(log n)

My Approach: O(n), I peeked the solution turns out I could have done a binary search approach



*/


class Solution {
public:
        int mySqrt(int x) {

            
            if(x == 0){
                return 0;
            }
        if(x == 1){
            return 1;
        }
        int temp = 1;

        while(temp <= x / 2){
            if(temp == x / temp){
                return temp;
            }
            if(temp > x / temp){
                return temp - 1;
            }

            temp ++;
        }

        return temp - 1;
    }
};

// Optimal code


class Solution {
public:
    int mySqrt(int x) {

        if (x <= 1) return x;

        long long left = 1, right = x;
        long long ans = 0;

        while (left <= right) {

            long long mid = left + (right - left) / 2;

            if (mid <= x / mid) {   // avoids overflow
                ans = mid;
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }

        return ans;
    }
};
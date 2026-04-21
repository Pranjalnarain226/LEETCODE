1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int currSum = 0, maxSum = INT_MIN;
5
6        for(int val : nums) {
7            currSum += val;
8            maxSum = max(currSum, maxSum);
9
10            if(currSum < 0) {
11                currSum = 0;
12            }
13        }
14        return maxSum;
15    }
16};
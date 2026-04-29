1#include <vector>
2#include <climits>
3using namespace std;
4
5class Solution {
6public:
7    int maxSubArray(vector<int>& nums) {
8        int currSum = 0, maxSum = INT_MIN;
9
10        for (int val : nums) {
11            currSum += val;
12            maxSum = max(currSum, maxSum);
13
14            if (currSum < 0) {
15                currSum = 0;
16            }
17        }
18
19        return maxSum;
20    }
21};
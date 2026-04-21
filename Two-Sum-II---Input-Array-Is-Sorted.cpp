1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int n = numbers.size();
5        int i = 0;
6        int j = n - 1;
7        while(i < j) {
8            int sum = numbers[i] + numbers[j];
9            if(sum < target) {
10                i++;
11            } else if(sum > target) {
12                j--;
13            } else {
14                return {i + 1, j + 1};
15            }
16        }
17        return {};
18    }
19};
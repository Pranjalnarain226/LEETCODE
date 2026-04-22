1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    vector<vector<int>> threeSum(vector<int>& nums) {
7        int n = nums.size();
8        vector<vector<int>> ans;
9
10        sort(nums.begin(), nums.end());
11
12        for(int i = 0; i < n; i++) {
13
14            if(i > 0 && nums[i] == nums[i - 1]) continue;
15
16            int j = i + 1, k = n - 1;
17
18            while(j < k) {
19                int sum = nums[i] + nums[j] + nums[k];
20
21                if(sum < 0) j++;
22                else if(sum > 0) k--;
23                else {
24                    ans.push_back({nums[i], nums[j], nums[k]});
25                    j++;
26                    k--;
27
28                    while(j < k && nums[j] == nums[j - 1]) j++;
29                    while(j < k && nums[k] == nums[k + 1]) k--;
30                }
31            }
32        }
33        return ans;
34    }
35};
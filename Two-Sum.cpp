1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n = nums.size();   // missing '='
5        map<int, int> mp;
6        for(int i = 0; i < n; i++) { 
7            int remaining = target - nums[i];  
8            if(mp.find(remaining) != mp.end()) {  
9                return {mp[remaining], i};
10            }
11            mp[nums[i]] = i;
12        }
13        return {}; 
14    }
15};
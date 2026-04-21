1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        for(int i = 0; i < nums.size(); i++) {
7            mp[nums[i]]++;
8        }
9
10        for(auto i : mp) {
11            if(i.second >= 2) {
12                return true;
13            }
14        }
15
16        return false;
17    }
18};
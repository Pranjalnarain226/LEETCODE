1#include <algorithm>
2using namespace std;
3
4class Solution {
5public:
6    bool containsDuplicate(vector<int>& nums) {
7        sort(nums.begin(), nums.end());
8        for (int i = 0; i < nums.size() - 1; i++) {
9            if (nums[i] == nums[i + 1]) {
10                return true;
11            }
12        }
13        return false;
14    }
15};
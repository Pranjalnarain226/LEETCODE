1	#include <vector>
2
3	#include <unordered_map>
4
5	using namespace std;
6
7	 
8
9	class Solution {
10
11	public:
12
13	    vector<int> twoSum(vector<int>& nums, int target) {
14
15	        unordered_map<int, int> h;
16
17	        for (int i = 0; i < nums.size(); ++i) {
18
19	            h[nums[i]] = i;
20
21	        }
22
23	 
24
25	        for (int i = 0; i < nums.size(); ++i) {
26
27	            int y = target - nums[i];
28
29	            if (h.find(y) != h.end() && h[y] != i) {
30
31	                return {i, h[y]};
32
33	            }
34
35	        }
36
37	 
38
39	        throw invalid_argument("No two sum solution");
40
41	    }
42
43	};
44
45	 
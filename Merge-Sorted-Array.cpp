1#include <vector>
2using namespace std;
3
4class Solution {
5public:
6    void merge(vector<int>& A, int m, vector<int>& B, int n) {
7        int i = m - 1, j = n - 1, idx = m + n - 1;
8
9        while (i >= 0 && j >= 0) {
10            if (A[i] >= B[j]) {
11                A[idx--] = A[i--];
12            } else {
13                A[idx--] = B[j--];
14            }
15        }
16
17        while (j >= 0) {
18            A[idx--] = B[j--];
19        }
20    }
21};
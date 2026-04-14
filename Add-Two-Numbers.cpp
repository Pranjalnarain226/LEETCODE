1class Solution {
2public:
3    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
4        ListNode* dummy = new ListNode(0);
5        ListNode* temp = dummy;
6        int carry = 0;
7
8        while (l1 || l2 || carry) {
9            int sum = carry;
10
11            if (l1) {
12                sum += l1->val;
13                l1 = l1->next;
14            }
15
16            if (l2) {
17                sum += l2->val;
18                l2 = l2->next;
19            }
20
21            carry = sum / 10;
22            temp->next = new ListNode(sum % 10);
23            temp = temp->next;
24        }
25
26        return dummy->next;
27    }
28};
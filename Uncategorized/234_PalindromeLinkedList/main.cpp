/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* node = head;
        while (node) {
            v.push_back(node->val);
            node = node->next;
        }
        int l = 0, r = v.size() - 1;
        while (l < r) {
            if (v[l] != v[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};

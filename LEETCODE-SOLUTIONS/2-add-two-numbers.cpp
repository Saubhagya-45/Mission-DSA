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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) {
        if (l1 == nullptr && l2 == nullptr && carry == 0) return nullptr;

        int sum = carry;
        if (l1 != nullptr) sum += l1->val;
        if (l2 != nullptr) sum += l2->val;

        ListNode* result = new ListNode(sum % 10);
        result->next = addTwoNumbers((l1 != nullptr) ? l1->next : nullptr, 
                                     (l2 != nullptr) ? l2->next : nullptr, 
                                     sum / 10);
        return result;
    }
};

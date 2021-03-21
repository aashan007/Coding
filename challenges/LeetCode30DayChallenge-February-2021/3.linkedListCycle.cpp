/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL)
        {
            return false;
        }
        ListNode *curr = head;
        ListNode *next = head;
        while (next != NULL && next->next != NULL)
        {
            curr = curr->next;
            next = next->next->next;
            if (curr == next)
            {
                return true;
            }
        }

        return false;
    }
};
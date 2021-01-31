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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *res = NULL;
        if (l1 == NULL && l2 == NULL)
        {
            return res;
        }
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        ListNode *Head = nullptr;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                if (Head == NULL)
                {
                    Head = l1;
                    res = l1;
                }
                else
                {
                    res->next = l1;
                    res = res->next;
                }
                l1 = l1->next;
            }
            else
            {
                if (Head == NULL)
                {
                    Head = l2;
                    res = l2;
                }
                else
                {
                    res->next = l2;
                    res = res->next;
                }
                l2 = l2->next;
            }
        }
        if (l1 != NULL)
        {
            res->next = l1;
        }
        if (l2 != NULL)
        {
            res->next = l2;
        }

        return Head;
    }
};
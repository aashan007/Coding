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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *newLink = NULL;
        ListNode *headptr = NULL;
        ListNode *currl1 = l1;
        ListNode *currl2 = l2;
        int val, rem = 0;
        while (currl1 != NULL && currl2 != NULL)
        {
            val = currl1->val + currl2->val + rem;
            rem = 0;
            if (val > 9)
            {
                rem = val / 10;
                val = val % 10;
            }
            ListNode *newNode = new ListNode(val);
            if (newLink == NULL)
            {
                newLink = newNode;
                headptr = newNode;
            }
            else
            {
                newLink->next = newNode;
                newLink = newLink->next;
            }
            currl1 = currl1->next;
            currl2 = currl2->next;
        }
        while (currl1 != NULL)
        {
            val = currl1->val + rem;
            rem = 0;
            if (val > 9)
            {
                rem = val / 10;
                val = val % 10;
            }
            ListNode *newNode = new ListNode(val);
            if (newLink == NULL)
            {
                newLink = newNode;
                headptr = newNode;
            }
            else
            {
                newLink->next = newNode;
                newLink = newLink->next;
            }
            currl1 = currl1->next;
        }
        while (currl2 != NULL)
        {
            val = currl2->val + rem;
            rem = 0;
            if (val > 9)
            {
                rem = val / 10;
                val = val % 10;
            }
            ListNode *newNode = new ListNode(val);
            if (newLink == NULL)
            {
                newLink = newNode;
                headptr = newNode;
            }
            else
            {
                newLink->next = newNode;
                newLink = newLink->next;
            }
            currl2 = currl2->next;
        }
        if (rem != 0)
        {
            ListNode *newNode = new ListNode(rem);
            newLink->next = newNode;
            newLink = newLink->next;
        }
        return headptr;
    }
};
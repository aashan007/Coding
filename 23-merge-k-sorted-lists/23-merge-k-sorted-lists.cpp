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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
lists.erase(remove_if(lists.begin(), lists.end(), [](ListNode* node){return !node;}),lists.end());
        
        if (lists.empty())
            return nullptr;
        
        priority_queue<int, vector<int>, std::greater<int>> q {};
        
        for (auto *list : lists) {
            while (list) {
                q.push(list->val);
                list = list->next;
            }
        }
        
        ListNode * node {};
      
        for (auto *list : lists) {
            
            if (node)
                node->next = list;

            while (list) {
                list->val = q.top();
                q.pop();
                if (list->next)
                    list = list->next;
                else {
                    node = list;
                    break;
                }
            }
        }
        
        return lists.front();
        
    }
};
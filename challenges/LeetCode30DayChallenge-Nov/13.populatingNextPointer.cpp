/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
    Node *connect(Node *root)
    {
        if (root == NULL)
        {
            return NULL;
        }
        queue<Node *> q;
        q.push(root);
        int i = 0;
        int val = pow(2, i);
        while (!q.empty())
        {
            Node *curr = q.front();
            q.pop();
            val--;
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right)
            {
                q.push(curr->right);
            }
            if (val == 0)
            {
                curr->next = NULL;
                i++;
                val = pow(2, i);
            }
            else
                curr->next = q.front();
        }
        return root;
    }
};
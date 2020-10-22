/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    Node* cloneGraphHelper(Node* node,Node* newNode, vector<Node*> &visited){
        if(node==NULL ){
            return NULL;
        }
        if(visited[node->val-1]){
            return visited[node->val-1];
        }
        
        Node * head = new Node(node->val);
        visited[head->val-1] = head;
        
        // for(int i=0;i<4;i++){
        //     cout<<visited[i]<<" ";
        // }
     //   cout<<endl;
      //  cout<<"trigger"<<" "<<head->val<<endl;       
        for(int i=0;i<node->neighbors.size();i++){
            Node *newValue = cloneGraphHelper(node->neighbors[i],NULL,visited);
     //       cout<<"Address "<<node->neighbors[i]<<" "<<node->neighbors[i]->val<<endl;
            head->neighbors.push_back(newValue);    
            
                
            
            
        }
        return head;
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return NULL;
        }
        vector<Node *> visited(100,NULL);
        return cloneGraphHelper(node,NULL,visited);
        
    }
};
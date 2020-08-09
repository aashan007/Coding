/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
typedef std::pair<int, int> pair1;
class Solution {
public:
 
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<pair<TreeNode*,pair<int,int>>> q;
        unordered_map<int,vector<pair<int,int>>> mp;
        q.push({root,{0,0}});
        vector<vector<int>> result;
        int Min=INT_MAX;
        int Max=INT_MIN;
        int height=0;
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>> p=q.front();
            q.pop();
            Min=min(Min,p.second.second);
            Max=max(Max,p.second.second);
            
            mp[p.second.second].push_back({p.second.first,p.first->val});
            if(p.first->left!=NULL){
                q.push({p.first->left,{p.second.first+1,p.second.second-1}});
            }
            if(p.first->right!=NULL){
                q.push({p.first->right,{p.second.first+1,p.second.second+1}});
            }
            height++;
            
        }
        
        for(int i=Min;i<=Max;i++){
            if(mp[i].size()>0){
                // cout<<i<<" "<<endl;
                vector<pair<int,int>> temp = mp[i];
                // for(int j=0;j<temp.size();j++){
                //     cout<<temp[j].first<<" "<<temp[j].second<<endl;
                // }
                // cout<<endl;
                
                sort(temp.begin(),temp.end(),
			[](const pair1& p1, const pair1& p2) {
                if(p1.first<p2.first) return true;
                if(p1.first>p2.first) return false;
                return p1.second<p2.second;
			});
                // cout<<"endl\n";
                //                 for(int j=0;j<temp.size();j++){
                //     cout<<temp[j].first<<" "<<temp[j].second<<endl;
                // }
                // cout<<endl;
                // for(int j=0;j<temp.size();j++){
                //     cout<<temp[j].first<<" "<<temp[j].second<<endl;
                // }
                vector<int> res;
                for(int j=0;j<temp.size();j++){
                    res.push_back(temp[j].second);
                }
                result.push_back(res);
            }
        }
            
        
        return result;
        
    }
};
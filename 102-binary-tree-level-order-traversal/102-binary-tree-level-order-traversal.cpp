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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {  
        vector<vector<int>> ans;
        if(!root)
        return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
                    vector<int> vec;
int k=q.size();
            for(int i=0; i<k;i++){
            TreeNode* temp = q.front();
                            q.pop();

            vec.push_back(temp->val);
        
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};
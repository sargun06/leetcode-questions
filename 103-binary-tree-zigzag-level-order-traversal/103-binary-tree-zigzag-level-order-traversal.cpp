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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int flag=true;
        while(!q.empty())
        {
            vector<int> res;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *node=q.front();
                q.pop();
                if(node->left!=NULL)
                q.push(node->left);
                if(node->right!=NULL)
                q.push(node->right);    
                res.push_back(node->val);
            }
            if(flag==false)
                reverse(res.begin(),res.end());
            ans.push_back(res);
            flag=!flag;
        }
    return ans;
    }
};
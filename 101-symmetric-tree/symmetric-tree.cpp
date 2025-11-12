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
    bool ismirror(TreeNode *lft,TreeNode *rht){
        if(lft ==NULL && rht == NULL){
            return true;
        }
        if(lft ==NULL || rht == NULL){
            return false;
        }
        else{
            if(lft->val!=rht->val) return false;
        }
        return ismirror(lft->right,rht->left) && ismirror(lft->left,rht->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root ==NULL){
            return true;
        }
        return ismirror(root->left,root->right);
    }
};
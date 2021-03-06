/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
//非递归
class Solution {
    /**
     * @param root: The root of binary tree.
     * @return: Inorder in vector which contains node values.
     */
public:
    vector<int> inorderTraversal(TreeNode *root) {
        // write your code here
      vector<int> result;
      if(root==NULL) return result;
      stack<TreeNode *> p;
      TreeNode *temp=root;
      while(temp||!p.empty())
      {
        if(temp!=NULL)
         {
             p.push(temp);
             temp=temp->left;
         }
         else
         {
           temp=p.top();
           result.push_back(temp->val);
           p.pop();
           temp=temp->right;
         }  
      }
      return result;
      }
};
//递归
/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
    /**
     * @param root: The root of binary tree.
     * @return: Inorder in vector which contains node values.
     */
public:
    vector<int> inorderTraversal(TreeNode *root) { 
        // write your code here 
        vector<int> result; 
        if (root == NULL) 
        { 
            return result; 
        }else 
        { 
            inorderCore(root, result); 
        } 
        return result; 
    } 
    void inorderCore(TreeNode *root, vector<int> &result) 
    { 
        if (root->left != NULL) 
        { 
            inorderCore(root->left, result); 
        } 
        result.push_back(root->val); 
        if (root->right != NULL) 
        { 
            inorderCore(root->right, result); 
        } 
        return; 
    } 
};

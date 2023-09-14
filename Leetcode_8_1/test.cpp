#define _CRT_SECURE_NO_WARNINGS 1

//根据二叉树创建字符串
//class Solution
//{
//public:
//    string tree2str(TreeNode* root)
//    {
//        if (root == nullptr)
//            return "";
//
//        string str = to_string(root->val);
//
//        if (root->left || root->right)
//        {
//            str += '(';
//            str += tree2str(root->left);
//            str += ')';
//        }
//
//        if (root->right)
//        {
//            str += '(';
//            str += tree2str(root->right);
//            str += ')';
//        }
//        return str;
//    }
//};


//二叉树的最近公共祖先
//class Solution
//{
//public:
//    bool Find(TreeNode* root, TreeNode* x)
//    {
//        if (root == nullptr)
//            return false;
//
//        return root == x || Find(root->left, x) || Find(root->right, x);
//    }
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//    {
//        if (root == nullptr)
//            return nullptr;
//        if (root == p || root == q)
//        {
//            return root;
//        }
//
//        bool pInleft, qInleft, pInright, qInright;
//
//        pInleft = Find(root->left, p);
//        pInright = !pInleft;
//
//        qInleft = Find(root->left, q);
//        qInright = !qInleft;
//
//        if (pInleft && qInleft)
//        {
//            return lowestCommonAncestor(root->left, p, q);
//        }
//        else if (pInright && qInright)
//        {
//            return lowestCommonAncestor(root->right, p, q);
//        }
//        else
//        {
//            return root;
//        }
//    }
//};

//102. 二叉树的层序遍历
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> vv;
//        queue<TreeNode*> q;
//        int levelsize;
//        if (root)
//        {
//            q.push(root);
//            levelsize = 1;
//        }
//
//        while (!q.empty())
//        {
//            vector<int> v;
//            for (int i = 0; i < levelsize; ++i)
//            {
//                TreeNode* node = q.front();
//                v.push_back(node->val);
//                q.pop();
//
//                if (node->left)
//                    q.push(node->left);
//                if (node->right)
//                    q.push(node->right);
//            }
//            vv.push_back(v);
//            levelsize = q.size();
//        }
//        return vv;
//    }
//};
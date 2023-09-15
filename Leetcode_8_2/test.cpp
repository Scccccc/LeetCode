#define _CRT_SECURE_NO_WARNINGS 1

//107. 二叉树的层序遍历 II
//class Solution {
//public:
//    vector<vector<int>> levelOrderBottom(TreeNode* root) {
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
//        reverse(vv.begin(), vv.end());
//        return vv;
//    }
//
//};
 
//二叉树的最近公共祖先(以空间换时间)
//class Solution
//{
//public:
//    bool Findpath(TreeNode* root, TreeNode* x, stack<TreeNode*>& path)
//    {
//        if (root == nullptr)
//            return false;
//        path.push(root);
//        if (root == x)
//            return true;
//        if (Findpath(root->left, x, path))
//            return true;
//        if (Findpath(root->right, x, path))
//            return true;
//        path.pop();
//        return false;
//    }
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//    {
//        stack<TreeNode*> ppath;
//        stack<TreeNode*> qpath;
//        Findpath(root, p, ppath);
//        Findpath(root, q, qpath);
//        while (ppath.size() > qpath.size())
//        {
//            ppath.pop();
//        }
//        while (ppath.size() < qpath.size())
//        {
//            qpath.pop();
//        }
//        while (ppath.top() != qpath.top())
//        {
//            ppath.pop();
//            qpath.pop();
//        }
//        return qpath.top();
//    }
//};

//JZ36 二叉搜索树与双向链表
//#include <vector>
//class Solution {
//public:
//	void InOrder(TreeNode* cur, TreeNode*& prev)
//	{
//		if (cur == nullptr)
//			return;
//
//		InOrder(cur->left, prev);
//		//当前cur的left指向前一个
//		cur->left = prev;
//		if (prev)
//			prev->right = cur;//前一个指向当前的cur
//		prev = cur;
//		InOrder(cur->right, prev);
//
//	}
//	TreeNode* Convert(TreeNode* pRootOfTree) {
//		TreeNode* prev = nullptr;
//		InOrder(pRootOfTree, prev);
//		TreeNode* head = pRootOfTree;
//
//		while (head && head->left)
//		{
//			head = head->left;
//		}
//		return head;
//	}
//};

//105. 从前序与中序遍历序列构造二叉树
//class Solution {
//public:
//    TreeNode* _buildTree(vector<int>& preorder, vector<int>& inorder, int& prei, int inbegin, int inend)
//    {
//        if (inbegin > inend)
//            return nullptr;
//
//        TreeNode* root = new TreeNode(preorder[prei]);
//        int rooti = inbegin;
//        while (rooti <= inend)
//        {
//            if (preorder[prei] == inorder[rooti])
//            {
//                break;
//            }
//            else
//            {
//                ++rooti;
//            }
//        }
//        ++prei;
//
//        root->left = _buildTree(preorder, inorder, prei, inbegin, rooti - 1);
//        root->right = _buildTree(preorder, inorder, prei, rooti + 1, inend);
//
//        return root;
//    }
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        int i = 0;
//        return _buildTree(preorder, inorder, i, 0, inorder.size() - 1);
//    }
//};

//106. 从中序与后序遍历序列构造二叉树
//class Solution {
//public:
//    TreeNode* _buildTree(vector<int>& inorder, vector<int>& postorder, int& prei, int inbegin, int inend)
//    {
//        if (inbegin > inend)
//            return nullptr;
//
//        TreeNode* root = new TreeNode(postorder[prei]);
//        int rooti = inbegin;
//        while (rooti <= inend)
//        {
//            if (postorder[prei] == inorder[rooti])
//            {
//                break;
//            }
//            else
//            {
//                ++rooti;
//            }
//        }
//        --prei;
//
//        root->right = _buildTree(inorder, postorder, prei, rooti + 1, inend);
//        root->left = _buildTree(inorder, postorder, prei, inbegin, rooti - 1);
//
//
//        return root;
//    }
//    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//        int i = postorder.size() - 1;
//        return _buildTree(inorder, postorder, i, 0, inorder.size() - 1);
//
//    }
//};
// 
// 

////144. 二叉树的前序遍历
//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        vector<int> v;
//        stack<TreeNode*> st;
//        TreeNode* cur = root;
//
//        while (cur || !st.empty())
//        {
//            while (cur)
//            {
//                st.push(cur);
//                v.push_back(cur->val);
//                cur = cur->left;
//            }
//
//            TreeNode* top = st.top();
//            st.pop();
//            cur = top->right;
//        }
//        return v;
//    }
//};

////94. 二叉树的中序遍历
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> v;
//        stack<TreeNode*> st;
//        TreeNode* cur = root;
//
//        while (cur || !st.empty())
//        {
//            while (cur)
//            {
//                st.push(cur);
//                cur = cur->left;
//            }
//
//            TreeNode* top = st.top();
//            st.pop();
//            v.push_back(top->val);
//
//            cur = top->right;
//        }
//        return v;
//    }
//};

////145. 二叉树的后序遍历
//class Solution {
//public:
//    vector<int> postorderTraversal(TreeNode* root) {
//        vector<int> v;
//        stack<TreeNode*> st;
//        TreeNode* cur = root;
//        TreeNode* prev = nullptr;
//        while (cur || !st.empty())
//        {
//            while (cur)
//            {
//                st.push(cur);
//                cur = cur->left;
//            }
//
//            TreeNode* top = st.top();
//            if (top->right == nullptr || top->right == prev)
//            {
//                prev = top;
//                v.push_back(top->val);
//                st.pop();
//            }
//            else
//            {
//                cur = top->right;
//            }
//
//        }
//        return v;
//    }
//};
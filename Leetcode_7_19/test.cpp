#define _CRT_SECURE_NO_WARNINGS 1

////逆波兰表达式
//class Solution
//{
//public:
//    int evalRPN(vector<string>& tokens)
//    {
//        stack<int> st;
//        for (auto& e : tokens)
//        {
//            if (e == "+" || e == "-" || e == "*" || e == "/")
//            {
//                int right = st.top();
//                st.pop();
//                int left = st.top();
//                st.pop();
//                switch (e[0])
//                {
//                case '+':
//                    st.push(left + right);
//                    break;
//                case '-':
//                    st.push(left - right);
//                    break;
//                case '*':
//                    st.push(left * right);
//                    break;
//                case '/':
//                    st.push(left / right);
//                    break;
//                }
//            }
//            else
//            {
//                st.push(stoi(e));
//            }
//        }
//        return st.top();
//    }
//};

////102. 二叉树的层序遍历
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

////107. 二叉树的层序遍历 II
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

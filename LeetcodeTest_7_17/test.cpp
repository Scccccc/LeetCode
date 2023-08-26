#define _CRT_SECURE_NO_WARNINGS 1
#include <stack>

////最小栈
//class MinStack {
//public:
//    MinStack()
//    {}
//
//    void push(int val) {
//        _st.push(val);
//
//        if (_minst.empty() || val <= _minst.top())
//        {
//            _minst.push(val);
//        }
//    }
//
//    void pop() {
//        if (_st.top() == _minst.top())
//        {
//            _minst.pop();
//        }
//        _st.pop();
//
//    }
//
//    int top() {
//        return _st.top();
//    }
//
//    int getMin() {
//        return _minst.top();
//    }
//private:
//    stack<int> _st;
//    stack<int> _minst;
//};
//


////JZ31 栈的压入、弹出序列
//class Solution {
//public:
//    bool IsPopOrder(vector<int>& pushV, vector<int>& popV) {
//        // write code here
//        stack<int> st;
//        int pushi = 0;
//        int popi = 0;
//        while (pushi < pushV.size())
//        {
//            st.push(pushV[pushi++]);
//            if (st.top() != popV[popi])
//            {
//                continue;
//            }
//            else
//            {
//                while (!st.empty() && st.top() == popV[popi])
//                {
//                    st.pop();
//                    popi++;
//                }
//            }
//        }
//        return st.empty();
//
//    }
//};
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
////合法括号序列判断
//class Parenthesis {
//public:
//    bool chkParenthesis(string A, int n) {
//        stack<char> st;
//
//        for (int i = 0; i < A.size(); ++i)
//        {
//            if (A[i] == '(')
//            {
//                st.push(A[i]);
//            }
//            else
//            {
//                if (st.empty())
//                    return false;
//
//                if (A[i] == ')' && st.top() == '(')
//                {
//                    st.pop();
//                }
//            }
//        }
//        if (!st.empty())
//            return false;
//
//        return true;
//    }
//};

//fibonacci数列
int main()
{
    int N = 0;
    cin >> N;
    int a = 0, b = 1;
    int fib = 0;
    int ret = 0;
    int left = 0, right = 0;
    while (true)
    {
        fib = a + b;
        a = b;
        b = fib;
        if (N > fib)
        {
            left = fib;
        }
        else if (N < fib)
        {
            right = fib;
            break;
        }
        else
            goto end;
    }
    ret = min(abs(left - N), abs(right - N));
end:
    cout << ret << endl;
    return 0;
}
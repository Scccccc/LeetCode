#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
using namespace std;

////两种排序方法
bool islenths(vector<string>& v)
{
    for (int i = 0; i < v.size()-1; ++i)
    {
        if (v[i].size() > v[i + 1].size())
        {
            return false;
        }
    }
    return true;
}

bool islexicographically(vector<string>& v)
{
    for (int i = 0; i < v.size()-1; ++i)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 0;
    cin >> n;
    string s;
    vector<string> v;

    while (n--)
    {
        cin >> s;
        v.push_back(s);
    }
    bool lengths = islenths(v);
    bool lexicographically = islexicographically(v);

    if (lengths && lexicographically)
    {
        cout << "both" << endl;
    }
    else if (lengths)
    {
        cout << "lengths" << endl;
    }
    else if (lexicographically)
    {
        cout << "lexicographically" << endl;
    }
    else
    {
        cout << "none" << endl;
    }
    return 0;
}


//求最小公倍数
int gcb(int x, int y)
{
    for (int i = 2; i < x; ++i)
    {
        if (x % i == 0 && y % i == 0)
            return i;
    }
    return 1;
}

int main()
{
    int A = 0;
    int B = 0;
    cin >> A >> B;
    assert(A >= 1 && A <= 100000);
    assert(B >= 1 && B <= 100000);

    int max = A > B ? A : B;
    int min = A < B ? A : B;
    if (max % min == 0)
    {
        cout << max << endl;
    }
    else
    {
        int ret = gcb(A, B);
        int num = (max / ret) * (min / ret) * ret;
        cout << num << endl;
    }
    return 0;
}

//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//};
//class B
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//	~B()
//	{
//		cout << "~B()" << endl;
//	}
//};
//
//int main()
//{
//	A a;
//	B b;
//	return 0;
//}
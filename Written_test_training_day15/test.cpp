#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;


//////查找输入整数二进制中1的个数
//int main()
//{
//    int n = 0;
//    while (cin >> n)
//    {
//        int count = 0;
//        while (n)
//        {
//            if ((n & 1) == 1)
//                count++;
//            n = n >> 1;
//        }
//        cout << count << endl;
//    }
//    return 0;
//}
//
////手套
//class Gloves {
//public:
//    int findMinimum(int n, vector<int> left, vector<int> right)
//    {
//        int leftsum = 0;
//        int rightsum = 0;
//        int leftmin = INT_MAX;
//        int rightmin = INT_MAX;
//        int sum = 0;
//        for (int i = 0; i < n; ++i)
//        {
//            if (left[i] == 0 || right[i] == 0)
//            {
//                sum += left[i] + right[i];
//            }
//            else
//            {
//                leftsum += left[i];
//                rightsum += right[i];
//                leftmin = left[i] < leftmin ? left[i] : leftmin;
//                rightmin = right[i] < rightmin ? right[i] : rightmin;
//            }
//        }
//        return sum + min(leftsum - leftmin + 1, rightsum - rightmin + 1) + 1;
//
//    }
//};
//
//
//

//class A
//{
//public:
//	void f()
//	{
//		cout << "A()" << endl;
//	}
//
//};
//
//
//class B : public A
//{
//public:
//	virtual void f()
//	{
//		cout << "B()" << endl;
//	}
//
//};
//
//int main()
//{
//	A* a = new B;
//	a->f();
//	delete a;
//
//	return 0;
//}

struct A
{
	void foo()
	{
		printf("foo");
	}
	virtual void bar()
	{
		printf("bar");
	}
	A()
	{
		bar();
	}
};

struct B : public A
{
	void foo()
	{
		printf("b_foo");
	}
	void bar()
	{
		printf("b_bar");
	}
};

int main()
{
	A* p = new B;
	p->foo();
	p->bar();
	return 0;
}
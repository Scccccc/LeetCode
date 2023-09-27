#define _CRT_SECURE_NO_WARNINGS 1

////计算糖果
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//
//    int A = (a + c) / 2;
//    int B1 = (b + d) / 2;
//    int B2 = (c - a) / 2;
//    int C = (d - b) / 2;
//    if (B1 == B2)
//        cout << A << " " << B1 << " " << C << endl;
//    else
//        cout << "No" << endl;
//    return 0;
//}
//


//进制转换
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    string table = "0123456789ABCDEF";
    int m, n;
    cin >> m >> n;
    bool flag = false;
    if (n >= 2 && n <= 16)
    {
        if (n > 9)
            n = 16;
        if (m < 0)
        {
            m = 0 - m;
            flag = true;
        }
        while (m)
        {
            str += table[m % n];
            m /= n;
        }
        if (flag)
        {
            str += '-';
        }
        reverse(str.begin(), str.end());
        cout << str << endl;
    }

    return 0;
}
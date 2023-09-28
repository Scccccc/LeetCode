#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

////统计回文
//int main()
//{
//    string A, B;
//    cin >> A >> B;
//    int count = 0;
//    for (int i = 0; i <= A.size(); ++i)
//    {
//        A.insert(i, B);
//        auto it = A.begin();
//        auto rit = A.rbegin();
//        while (it != A.end())
//        {
//            if (*it == *rit)
//            {
//                ++it;
//                ++rit;
//            }
//            else
//            {
//                goto again;
//            }
//        }
//        count++;
//    again:
//        A.erase(i, B.size());
//    }
//    cout << count << endl;
//
//    return 0;
//
//}
//
//连续最大和
int main()
{
    int n = 0;
    int num = 0;
    vector<int> v;
    cin >> n;
    v.reserve(n);

    while (n--)
    {
        cin >> num;
        v.push_back(num);
    }
    int max = -9999;
    for (int i = 0; i < v.size()-1; ++i)
    {
        int sum = v[i] + v[i + 1];
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max << endl;

    return 0;
}


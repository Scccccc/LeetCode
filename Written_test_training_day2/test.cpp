#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


//int main()
//{
//    vector<int> v;
//    int n = 0;
//    int num = 0;
//    cin >> n;
//    int count = 0;
//    v.reserve(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> num;
//        v[i] = num;
//    }
//    int i = 0;
//    while (i < n)
//    {
//        //非递减
//        if (v[i + 1] > v[i])
//        {
//            while (i < n && v[i + 1] > v[i])
//            {
//                i++;
//            }
//            count++;
//            i++;
//
//        }
//        //非递增
//        else if (v[i + 1] < v[i])
//        {
//            while (i < n && v[i + 1] < v[i])
//            {
//                i++;
//            }
//            count++;
//            i++;
//        }
//        else
//        {
//            i++;
//        }
//
//    }
//    cout << count << endl;
//    return 0;
//}


//int main()
//{
//    string s;
//    getline(cin, s);
//    reverse(s.begin(), s.end());
//
//    auto front = s.begin();
//    while (front != s.end())
//    {
//        auto back = front;
//        while (back != s.end() && *back != ' ')
//        {
//            back++;
//        }
//        reverse(front, back);
//        if (back != s.end())
//        {
//            front = back + 1;
//        }
//        else
//        {
//            front = back;
//        }
//    }
//    cout << s << endl;
//}


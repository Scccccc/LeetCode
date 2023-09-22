#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;

////组队竞赛
//int main()
//{
//    int n = 0;
//    long long sum = 0;
//    cin >> n;
//    vector<int> v;
//    v.resize(3 * n);
//
//    for (int i = 0; i < 3 * n; ++i)
//    {
//        cin >> v[i];
//    }
//    sort(v.begin(), v.end());
//
//    for (int i = 0; i < n; ++i)
//    {
//        sum += v[v.size() - 2 * (i + 1)];
//    }
//    cout << sum << endl;
//
//    return 0;
//}

//删除公共字符
//int main()
//{
//    string s1;
//    string s2;
//    getline(cin, s1);
//    getline(cin, s2);
//    string ret;
//    for (int i = 0; i < s1.size(); i++)
//    {
//        int j = 0;
//        for (j = 0; j < s2.size(); j++)
//        {
//            if (s1[i] == s2[j])
//            {
//                break;
//            }
//        }
//        if(s2.size() == j)
//            ret += s1[i];
//
//    }
//    cout << ret << endl;
//
//
//
//    return 0;
//}
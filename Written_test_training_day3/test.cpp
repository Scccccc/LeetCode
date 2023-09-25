#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;


//数组中超过数字一半的数子
int MoreThanHalfNum_Solution(vector<int>& numbers)
{
    int count = 0;
    sort(numbers.begin(), numbers.end());

    return numbers[numbers.size() / 2];
}

int main()
{
    int arr[] = { 7,7,8,9,10,7,7,8,7 };
    vector<int> v;
    for (auto e : arr)
    {
        v.push_back(e);
    }
    
    int ret = MoreThanHalfNum_Solution(v);
    cout << ret << endl;
    return 0;
}

//#include <iostream>
//#include <string>
//#include <set>
//using namespace std;
////字符串中找出连续最长的数字
//int main()
//{
//    string str, cur, ret;
//    getline(cin, str);
//
//    for (int i = 0; i <= str.size(); ++i)
//    {
//        if (str[i] >= '0' && str[i] <= '9')
//        {
//            cur.push_back(str[i]);
//        }
//        else
//        {
//            if (ret.size() < cur.size())
//            {
//                ret = cur;
//            }
//            else
//            {
//                cur.clear();
//            }
//        }
//
//    }
//    cout << ret << endl;
//    return 0;
//}
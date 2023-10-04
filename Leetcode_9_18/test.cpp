#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//961. 在长度 2N 的数组中找出重复 N 次的元素
class Solution
{
public:
    int repeatedNTimes(vector<int>& nums)
    {
        bitset<10000> bs1;
        bitset<10000> bs2;
        int ret = 0;
        for (auto& e : nums)
        {
            if (!bs1.test(e) && !bs2.test(e))
            {
                bs2.set(e);
            }
            else if (!bs1.test(e) && bs2.test(e))
            {
                bs1.set(e);
                bs2.reset(e);
                ret = e;
            }
        }
        return ret;
    }
};

//349. 两个数组的交集
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        auto it1 = s1.begin();
        auto it2 = s2.begin();
        while (it1 != s1.end() && it2 != s2.end())
        {
            if (*it1 < *it2)
            {
                ++it1;
            }
            else if (*it1 > *it2)
            {
                ++it2;
            }
            else
            {
                v.push_back(*it2);
                ++it1;
                ++it2;
            }
        }
        return v;
    }
};

// 350. 两个数组的交集 II
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> v;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        auto it1 = nums1.begin();
        auto it2 = nums2.begin();
        while (it1 != nums1.end() && it2 != nums2.end())
        {
            if (*it1 < *it2)
            {
                ++it1;
            }
            else if (*it1 > *it2)
            {
                ++it2;
            }
            else
            {
                v.push_back(*it2);
                ++it1;
                ++it2;
            }
        }
        return v;
    }
};

//884. 两句话中的不常见单词
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> CountHash;
        vector<string> ret;
        string stream;
        stringstream ss(s1 + " " + s2);
        while (ss >> stream)
        {
            CountHash[stream]++;
        }

        for (auto& [k, v] : CountHash)
        {
            if (v == 1)
                ret.emplace_back(k);
        }
        return ret;
    }
};


//int main()
//{
//	string s1("this apple is sweet");
//	vector<string> v(s1.begin(), s1.end());
//
//
//	//for (const auto& str : v)
//	//{
//	//	cout << str << ":";
//	//}
//	return 0;
//}
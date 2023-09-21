#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

//单词识别个数
struct Greater
{
    bool operator()(const pair<string, int> kv1, const pair<string, int> kv2)
    {
        return kv1.second > kv2.second || (kv1.second == kv2.second && kv1.first < kv2.first);
    }
};

int main() {

    string str;
    map<string, int> CountMap;
    while (getline(cin, str))
    {
        string word;
        int subscript = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if ('A' <= str[i] && str[i] <= 'Z')
            {
                str[i] += 32;
            }

            if (str[i] == ' ' || str[i] == '.')
            {
                int wordsize = i - subscript;
                word = str.substr(subscript, wordsize);
                CountMap[word]++;
                subscript = i + 1;
            }
        }
    }
    // vector<pair<string, int>> kv(CountMap.begin(), CountMap.end());
    // sort(kv.begin(), kv.end(), Greater());

    for (const auto& str : CountMap)
    {
        cout << str.first << ":" << str.second << endl;
    }
}


//前K个高频单词
class Solution
{
public:
    vector<string> topKFrequent(vector<string>& words, int k)
    {
        map<string, int> CountMap;
        for (const auto& ch : words)
        {
            CountMap[ch]++;
        }

        // vector<pair<string, int>> kv(CountMap.begin(), CountMap.end());
        // sort(kv.begin(), kv.end(), Greater());

        // vector<string> v;

        // for(int i = 0; i < k; i++)
        // {
        //     v.push_back(kv[i].first);
        // }
        //使用multimap对个数排序，为什么使用multimap?因为个数也可能有相等的
        multimap<int, string, greater<>> sortmap;
        for (const auto& str : CountMap)
        {
            sortmap.insert(make_pair(str.second, str.first));
        }
        vector<string> v;
        auto it = sortmap.begin();
        while (k--)
        {
            v.push_back(it->second);
            it++;
        }
        return v;
    }
};
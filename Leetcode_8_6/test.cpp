#define _CRT_SECURE_NO_WARNINGS 1

//692. 前K个高频单词
class Solution {
public:
    struct Greater
    {
        bool operator()(const pair<string, int> kv1, const pair<string, int> kv2)
        {
            return kv1.second > kv2.second || (kv1.second == kv2.second && kv1.first < kv2.first);
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> CountMap;
        for (const auto& ch : words)
        {
            CountMap[ch]++;
        }

        vector<pair<string, int>> kv(CountMap.begin(), CountMap.end());
        sort(kv.begin(), kv.end(), Greater());

        vector<string> v;

        for (int i = 0; i < k; i++)
        {
            v.push_back(kv[i].first);
        }
        return v;
    }
};

//1. 两数之和
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    goto ret;
                }
            }
        }
    ret:
        return v;

    }
};
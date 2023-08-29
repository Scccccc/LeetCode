#define _CRT_SECURE_NO_WARNINGS 1

//LCR 076. 数组中的第 K 个最大元素\
//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        // sort(nums.begin(), nums.end(), greater<int>());
//        // return nums[k-1];
//
//        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.begin() + k);
//        for (int i = k; i < nums.size(); i++)
//        {
//            if (nums[i] > pq.top())
//            {
//                pq.pop();
//                pq.push(nums[i]);
//            }
//        }
//        return pq.top();
//
//    }
//};
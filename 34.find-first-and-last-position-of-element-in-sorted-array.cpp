/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (target > nums[mid])
            {
                start = mid + 1;
            }
            else if (target <= nums[mid])
            {
                end = mid - 1;
            }
        }
        vector<int> num;
        num.push_back(end);
        start = 0;
        end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (target >= nums[mid])
            {
                start = mid + 1;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
        }
        num.push_back(start-1);
        return num;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=852 lang=cpp
 *
 * [852] Peak Index in a Mountain Array
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int low = 0;
        int high = arr.size() - 1;
        int mid = low + (high - low) / 2;
        while (low < high)
        {
            if (arr[mid] < arr[mid + 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
            mid = low + (high - low) / 2;
        }
        return low;
    }
};
// @lc code=end

/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {

        int start = 0;
        int end = letters.size() - 1;
        int mid = start + (end - start) / 2;
        // if (target >= letters[letters.size() - 1])
        // {
        //     return letters[0];
        // }
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (target >= letters[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        // return letters[start];
        return letters[start%letters.size()];
    }
};
// @lc code=end

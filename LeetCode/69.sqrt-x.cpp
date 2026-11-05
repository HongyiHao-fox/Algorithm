/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
  public:
    int mySqrt(int x) {
        for (int i = 1; i < x / 2 + 1; i++) {
            if (i * i == x) {
                return i;
            } else if (i * i > x) {
                return i - 1;
            }
        }
        return x / 2;
    }
};
// @lc code=end

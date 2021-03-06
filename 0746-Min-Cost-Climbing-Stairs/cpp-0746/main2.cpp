/// Source : https://leetcode.com/problems/min-cost-climbing-stairs/
/// Author : liuyubobobo
/// Time   : 2017-12-16

#include <iostream>
#include <vector>

using namespace std;


/// Dynamic Programming
/// Time Complexity: O(n)
/// Space Complexity: O(n)
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        cost.push_back(0);
        vector<int> dp(cost.size(), 0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 2 ; i < cost.size() ; i ++)
            dp[i] = min(dp[i-1], dp[i-2]) + cost[i];
        return dp.back();
    }
};


int main() {

    vector<int> vec1 = {10, 15, 20};
    cout << Solution().minCostClimbingStairs(vec1) << endl;

    vector<int> vec2 = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << Solution().minCostClimbingStairs(vec2) << endl;

    return 0;
}
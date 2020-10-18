/* [Question Description]
You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

# Example 1
Input: 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

# Example 2
Input: 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/ 
#include <iostream>

/* Recursive Version */
//int climbStairs(int n) {
//	if (n == 1) return 1; // 1 = 1
//	if (n == 2) return 2; // 2 = 2, 2 = 1 + 1
//	return (climbStairs(n - 1) + climbStairs(n - 2));
//}

/* DP Version */
int climbStairs(int n) {
	if (n == 1) return 1; // 1 = 1
	if (n == 2) return 2; // 2 = 2, 2 = 1 + 1
	int* dp = new int[n+1];
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}
	return dp[n];
}

int main() {
	std::cout << climbStairs(10) << std::endl;
}

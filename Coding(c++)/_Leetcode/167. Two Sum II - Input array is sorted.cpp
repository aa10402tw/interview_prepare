/* [Question Description]
Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.
The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.

# Example 1
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.

# Example 2
Input: numbers = [2,3,4], target = 6
Output: [1,3]

# Example 3
Input: numbers = [-1,0], target = -1
Output: [1,2]
*/ 
#include <iostream>
#include <vector>


/* Given sorted numbers: [n_0, n_1, .... ]
assume n_i + n_j = ans (i<j), we can know that
1. n_i + n_{j-1} < ans
2. n_i + n_{j+1} > ans
3. n_{i-1} + n_j < ans
4. n_{i+1} + n_j > ans
if we set left=0 and right=N-1 at begining, and only increase left or decrease right,
then we eventually will get left==i or right == j.
if left==i,  then we can decrease right until right==j (from 2.)
if right==j, then we can increase left  until left==i  (from 3.)

If we follow the rule that
set left=0 and right=N-1 at begining, at each iteration
	if (n_left + n_right > ans) right -= 1;
	if (n_left + n_right < ans) left += 1;
eventually one of two condition happen
1. first left==i happen,  then right decrease until right == j (since n_i + n_{j+k} > ans for all k > 0)
2. first right==j happen, then left increase until left == i   (since n_{i-k} + n_j < ans for all k > 0)
*/ 

std::vector<int> twoSum(std::vector<int>& numbers, int target) {
	int idx1 = 0, idx2 = numbers.size() - 1;
	while (idx1 < idx2) {
		if (numbers[idx1] + numbers[idx2] == target) return { idx1 + 1, idx2 + 1 };
		else if (numbers[idx1] + numbers[idx2] > target) idx2 -= 1;
		else idx1 += 1;
	}
	return { -1, -1 };
}

int main() {

}

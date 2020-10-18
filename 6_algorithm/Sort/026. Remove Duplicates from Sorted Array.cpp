/* [Question Description]
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
Clarification:
Confused why the returned value is an integer but your answer is an array?
Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.
Internally you can think of this:

# Example 1
Input: nums = [1,1,2]
Output: 2, nums = [1,2]
Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.

# Example 2
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]
Explanation: Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively. It doesn't matter what values are set beyond the returned length.
*/ 
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

/*
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Input: nums = [1,1,2]
Output: 2, nums = [1,2]
Explanation: Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the returned length.
*/ 


// erase the 6th element
// myvector.erase(myvector.begin() + 5);

int removeDuplicates(std::vector<int>& nums) {
	int i = 1;
	while (i < nums.size()) {
		if (nums[i] == nums[i - 1])
			nums.erase(nums.begin() + i);
		else
			i += 1;
	}
	return nums.size();
}

int main() {
	int num;
	std::vector<int> nums;
	std::string line;
	getline(std::cin, line);
	std::istringstream iss(line);
	while (iss >> num) {
		nums.push_back(num);
	}
	std::cout << removeDuplicates(nums) << std::endl;
}

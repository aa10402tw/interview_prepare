/* [Question Description]
Given a string s, find the length of the longest substring without repeating characters.

# Example 1
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

# Example 2
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

# Example 3
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

# Example 4
Input: s = ""
Output: 0
*/ 
#include <iostream>
#include <string>

/*
Given a string s, find the length of the longest substring without repeating characters.

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
*/ 


/* 
1. Find position of character or string in string
std::size_t p = substr.find(char)
std::size_t p = substr.find(str)

2. Get substring of substring
substr = substr.substr(start_idx, N); 
substr = substr.substr(start_idx); // to the end of string 
*/

int lengthOfLongestSubstring(std::string s) {
	std::string substr = "";
	int maxLen = 0;
	for (int i = 0; i < s.size(); i++) {
		std::size_t p = substr.find(s.at(i));
		if (p == std::string::npos) {
			substr += s.at(i);
			maxLen = (substr.size() > maxLen) ? substr.size() : maxLen;
		}
		else {
			substr = substr.substr(p+1) + s.at(i);
		}
	}
	return maxLen;
}

int main() {
	std::string s = "pwwkew";
	std::cout << lengthOfLongestSubstring(s) << std::endl;
}

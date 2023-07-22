// CheckifArrayisGoodCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
public:
	bool isGood(vector<int>& nums) {
		unordered_set<int> hash{};
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++) {
			if (hash.find(nums[i]) != hash.end()) {
				// found
				return false;
			}
			hash.insert(nums[i]);
		}
		int length = nums.size();
		if (length < 2)
			return false;
		if (nums[length - 1] != nums[length - 2])
			return false;
		if (hash.size() != nums[length - 1])
			return false;
		return true;
	}
};

int main()
{
	Solution sol;
	vector<int> arr{ 1,3,3,2 };
	//sol.isGood(arr);
	std::cout << "Hello World!\n";
}



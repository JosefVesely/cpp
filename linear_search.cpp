#include <iostream>
#include <vector>

int linearSearch(std::vector<int> nums, int value)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == value)
			return i;
	}
	return -1;
}

int main()
{
	std::vector<int> nums = { 8, 3, 20, 56, 42, 33 };

	std::cout << linearSearch(nums, 2) << std::endl;
}

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> shuffle(vector<int>& nums, int n) {
		vector<int> ret = {};
		int i = 0;
		for (i = 0; i < n; i++) {
			ret.push_back(nums[i]);
			ret.push_back(nums[i + n]);
		}
		return ret;
	}

	/*题解区的大佬给的位运算解法,还没看懂,有时间研究*/
	vector<int> shuffle2(vector<int>& nums, int n) {
		for (int i = 0; i < 2 * n; i++) {
			int j = i < n ? 2 * i : 2 * (i - n) + 1;
			nums[j] |= (nums[i] & 1023) << 10;
		}
		for (int& e : nums) e >>= 10;
		return nums;
	}

	/*也是那个大佬的*/
	vector<int> shuffle3(vector<int>& nums, int n) {
		for (int i = 0; i < 2 * n; i++)
			if (nums[i] > 0) {
				// j 描述当前的 nums[i] 对应的索引，初始为 i
				int j = i;
				while (nums[i] > 0) {
					// 计算 j 索引的元素，也就是现在的 nums[i]，应该放置的索引
					j = j < n ? 2 * j : 2 * (j - n) + 1;
					// 把 nums[i] 放置到 j 的位置，
					// 同时，把 nums[j] 放到 i 的位置，在下一轮循环继续处理
					swap(nums[i], nums[j]);
					// 使用负号标记上，现在 j 位置存储的元素已经是正确的元素了 
					nums[j] = -nums[j];
				}
			}
		for (int& e : nums) e = -e;
		return nums;
	}
};

#if 1
int main(int argc, char* argv[]) {
	Solution s1;
	vector<int> t = { 2,5,1,3,4,7 };
	int n = t.size() >> 1;
	vector<int> ret(t.size());
	ret = s1.shuffle(t, n);
	for (vector<int>::iterator it = ret.begin(); it != ret.end(); it++)
		cout << *it << " ";
	return 0;
}
#endif
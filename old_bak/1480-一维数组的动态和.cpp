#include<vector>
#include<iostream>
using namespace std;
/*一维数组的动态和,评论区貌似有大神,有空研究研究,我垃圾我骄傲*/


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int everySum = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            everySum = everySum + *it;
            *it = everySum;
        }
        return nums;

    }
};

#if 1
int main(int argc, char* argv[]) {
    vector<int> nums = { 3,1,2,10,1 };
    vector<int> numsRet(nums.size());
    Solution s1;
    numsRet = s1.runningSum(nums);
    for (vector<int>::iterator it = numsRet.begin(); it != numsRet.end(); it++)
        cout << *it << " ";
    return 0;
}
#endif
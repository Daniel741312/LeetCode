#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 0;
        vector<int> vRet;
        for (i = 0; i < nums.size(); i++) {
            for (j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    vRet.push_back(i);
                    vRet.push_back(j);
                    return vRet;
                }
            }
        }
    }
};
#if 0
int main() {
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target = 9;
    vector<int> vRet;
    Solution slt;
    vRet=slt.twoSum(nums, target);
    cout << vRet[0] << " " << vRet[1] << endl;
    return 0;
}
#endif
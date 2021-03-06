/*
    *位运算:异或运算的三条性质
    *(1)交换律:a^b^c <=> a^c^b(化成二进制很容易看出来,再结合异或运算的半加特性理解);
    *(2)0^n <=> n;
    *(3)n^n <=> 0;
    *例如:2^3^2^4^4 <=> 2^2^4^4^3 <=>3;
*/
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            a = a ^ (*it);
        }
        return a;
    }
};

#if 0
int main() {
    vector<int> nums = { 2,1,2,1,3 };
    Solution s1;
    cout << s1.singleNumber(nums) << endl;
    return 0;
}
#endif

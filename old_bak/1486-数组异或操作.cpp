#include<iostream>
#include<vector>
using namespace std;
/*据说有双O(1)的解法,有空研究一下评论区*/

class Solution {
public:
    int xorOperation(int n, int start) {
        int i = 0;
        int ret = start;
        vector<int> nums = {};
        for (i = 0; i < n; i++) {
            /*移位运算的优先级貌似很低,跟加法放一起时用个括号保护起来*/
            nums.push_back(start + (i << 1));
        }
        for (vector<int>::iterator it = (nums.begin()+1); it != nums.end(); it++)
            ret = ret ^ (*it);
        return ret;
    }
    /*优化一下,数组没必要*/
    int xorOperation2(int n, int start) {
        int i = 0;
        int ret = start;
        for (i = 1; i < n; i++) {
            ret = ret ^ (start + (i << 1));
        }
        return ret;
    }
};

#if 0
int main(int argc, char* arvgv[]) {
    Solution* s1 = new Solution;
    int ret = 0;
    ret=s1->xorOperation2(4, 3);
    cout << ret << endl;
    return 0;
}
#endif
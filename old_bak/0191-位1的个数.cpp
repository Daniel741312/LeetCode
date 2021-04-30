#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i = 0;
        int sum = 0;

        for (i = 0; i < 32; ++i,n=n>>1) {
            sum=sum+n%2;
        }

        return sum;
    }
};

#if 0
int main(int argc, char* argv[]) {
    Solution* s1 = new Solution();

    int ret = 0;
    /*�üһ�,uint32_t����ֱ�����������,i��i��*/
    ret = s1->hammingWeight(00000000000000000000000000001011);
    cout << ret << endl;

    delete(s1);
    return 0;
}
#endif
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    /*逻辑运算的短路特性+递龟*/
    int sumNums(int n) {
        n && (n=n+sumNums(n - 1));
        return n;
    }

    /*位运算:手撕移位乘法器*/
    /*不给if语句是真jb难受,临时用"位运算+逻辑短路"凑活一下吧*/
    /*时间复杂度100%,空间复杂度不行,仨数组太占内存了,有空照着评论区优化一下*/
    int sumNums2(int n) {
        vector<unsigned int> a(14, n + 1);
        vector<unsigned int> b(14, n);
        unsigned int c[14] = { 0 };
        unsigned int sum = 0;
        (a[0] & 0x00000001) && (c[0] = (b[0]<<0));
        (a[1] & 0x00000002) && (c[1] = (b[1] << 1));
        (a[2] & 0x00000004) && (c[2] = (b[2] << 2));
        (a[3] & 0x00000008) && (c[3] = (b[3] << 3));
        (a[4] & 0x00000010) && (c[4] = (b[4] << 4));
        (a[5] & 0x00000020) && (c[5] = (b[5] << 5));
        (a[6] & 0x00000040) && (c[6] = (b[6] << 6));
        (a[7] & 0x00000080) && (c[7] = (b[7] << 7));
        (a[8] & 0x00000100) && (c[8] = (b[8] << 8));
        (a[9] & 0x00000200) && (c[9] = (b[9] << 9));
        (a[10] & 0x00000400) && (c[10] = (b[10] << 10));
        (a[11] & 0x00000800) && (c[11] = (b[11] << 11));
        (a[12] & 0x00001000) && (c[12] = (b[12] << 12));
        (a[13] & 0x00002000) && (c[13] = (b[13] << 13));

        sum = c[0] + c[1] + c[2] + c[3] + c[4] + c[5] + c[6] + c[7] + c[8] + c[9] + c[10] + c[11] + c[12] + c[13];

        return sum>>1;
    }
};

#if 0
int main(int argc, char* argv[]) {
    int n = 4;
    Solution s1;
    cout << s1.sumNums2(n) << endl;
    return 0;
}
#endif
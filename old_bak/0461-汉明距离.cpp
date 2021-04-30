#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int i = 0;
        int sum = 0;

        uint32_t n= x ^ y;
        for (i = 0; i < 32; ++i, n = n >> 1) {
            sum = sum + n % 2;
        }

        return sum;
    }
};

#if 0
int main(int argc, char* argv[]) {
    Solution* s1 = new Solution();
    int ret = s1->hammingDistance(1, 4);
    cout << ret << endl;
    delete(s1);
    return 0;
}
#endif

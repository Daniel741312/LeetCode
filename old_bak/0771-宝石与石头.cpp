#include<iostream>
#include<string>
using namespace std;

/*复杂度O(N^2)没啥好优化的感觉*/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int cnt = 0;
        for (string::iterator Jit = J.begin(); Jit != J.end(); Jit++) {
            for (string::iterator Sit = S.begin(); Sit != S.end(); Sit++) {
                if (*Jit == *Sit)
                    cnt++;
            }
        }
        return cnt;
    }
};

#if 0
int main(int argc, char* argv[]) {
    string J = "aA";
    string S = "aAAbbbb";
    int ret = 0;
    Solution s1;
    ret=s1.numJewelsInStones(J, S);
    cout << ret << endl;
    return 0;
}
#endif
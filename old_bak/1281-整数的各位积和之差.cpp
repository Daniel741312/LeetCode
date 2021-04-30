#include<iostream>
#include<stdio.h>
using namespace std;

/*好家伙,想什么呢*/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul = 1;
        int sum = 0;
        while (n) {
            mul = mul * (n % 10);
            sum = sum + (n % 10);
            n = n / 10;
        }
        return mul - sum;
    }
};

#if 0
int main(int argc, char* argv[]) {
    Solution* s1 = new Solution();
    int ret=s1->subtractProductAndSum(234);
    cout << ret << endl;
    delete(s1);
    return 0;
}
#endif
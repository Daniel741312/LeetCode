#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*我他妈直接手撕全加器*/
class Solution {
public:
    string addBinary(string a, string b){
        /*add heading zero to match them*/
        a.size() < b.size() ? (a.insert(0, (b.size() - a.size()), '0')) : (b.insert(0, (a.size() - b.size()), '0'));
        string sum = "";
        int i = 0;
        struct Input in;
        struct Output out;

        for (i = a.size()-1; i >= 0; i--) {
            in.Ai = a[i]!='0';
            in.Bi = b[i]!='0';

            fullAdder(&in,&out);
            sum.push_back((char)((int)out.Si+48));
            in.Ci_1 = out.Ci;
        }
        if(in.Ci_1)
            sum.push_back((char)((int)in.Ci_1+48));
        reverse(sum.begin(), sum.end());
        return sum;
    }
    struct Input {
        bool Ai;
        bool Bi;
        bool Ci_1=false;
    };
    struct Output {
        bool Si;
        bool Ci;
    };
    void fullAdder(Input* in,Output* out) {
        out->Si = in->Ai ^ in->Bi ^ in->Ci_1;
        out->Ci = in->Ai & in->Bi | in->Ci_1 & (in->Ai | in->Bi);
    }
};

#if 1
int main(int argc, char* argv[]) {
    Solution s1;
    string a = "00110100";
    string b = "01100011";
    cout << s1.addBinary(a,b) << endl;
    return 0;
}
#endif
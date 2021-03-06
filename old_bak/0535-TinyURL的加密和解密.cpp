#include<iostream>
#include<string>
using namespace std;

/*用移位加密和异或加密都是比较简单的加密策略,有空找找更高级的加密策略*/
class Solution {
public:

    char key = 0xE4;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        int i = 0;
        int size = longUrl.size();
        string shortUrl = "";

        for (i = 8; i < size; ++i)
            longUrl[i] = longUrl[i]^key;
            //longUrl[i] = longUrl[i]+2;

        shortUrl = longUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int i = 0;
        int size = shortUrl.size();
        string longUrl= "";

        for (i = 8; i < size; ++i)
            shortUrl[i] = shortUrl[i]^key;
            //shortUrl[i] = shortUrl[i]-2;

        longUrl = shortUrl;
        return longUrl;
    }
};

#if 0
int main(int argc, char* argv[]) {

    Solution* s1 = new Solution();

    string originUrl = "https://leetcode.com/problems/design-tinyurl";
    string encodeUrl = "";
    string decodeUrl= "";

    encodeUrl = s1->encode(originUrl);
    decodeUrl = s1->decode(encodeUrl);

    cout << encodeUrl << endl;
    cout << decodeUrl << endl;

    delete(s1);
    return 0;
}
#endif

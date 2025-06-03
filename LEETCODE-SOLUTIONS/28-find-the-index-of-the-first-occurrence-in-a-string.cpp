#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.empty()) {
            return 0;
        }
        int haystackLength = haystack.length();
        int needleLength = needle.length();

        for (int i = 0; i <= haystackLength - needleLength; ++i) {
            if (haystack.substr(i, needleLength) == needle) {
                return i;
            }
        }
        return -1;
    }
};

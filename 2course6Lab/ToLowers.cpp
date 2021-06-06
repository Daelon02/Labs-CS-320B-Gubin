#include "ToLowers.h"

string ToLower(string str) {
    std::locale loc;
    string res = "";
    for (std::string::size_type i = 0; i < str.length(); ++i)
        res += std::tolower(str[i], loc);
    return res;
}
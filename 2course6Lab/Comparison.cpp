#include"Comparison.h"

bool comparison(string str1, string str2) {
    for (int i = 0; i < str1.length(); i++)
        if (str1[i] != str2[i])
            return false;
    return true;
}
// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    bool checkPalin(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }

        return true;
    }

    bool validPalindrome(string s)
    {
        int n = s.size();
        int i = 0;
        int j = n - 1;

        if (checkPalin(s, i, j))
        {
            return true;
        }

        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                if (checkPalin(s, i + 1, j) or checkPalin(s, i, j - 1))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }

        return true;
    }
};

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'theLoveLetterMystery' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int theLoveLetterMystery(string s)
{
    int result = 0;
    int i = 0;
    int j = s.length()-1;
    
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            result += std::abs(s[i]-s[j]);
        }
        
        i++;
        j--;
    }
    
    return result;
}


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

int theLoveLetterMystery(const std::string& s)
{
    int result = 0;
    int n = s.length();
    
    for (int i = 0; i < n / 2; ++i)
    {
        result += std::abs(s[i] - s[n - 1 - i]);
    }
    
    return result;
}


int theLoveLetterMystery2(string s)
{
    int result = 0;
    int n = s.length();

    for (int i = 0, j = n - 1; i <= j; ++i, --j)
    {
        if (s[i] != s[j])
        {
            result += std::abs(s[i] - s[j]);
        }
    }

    return result;
}


int theLoveLetterMystery3(string s)
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


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);
    s.erase(
        s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) { return !isspace(ch); })
    );
    return s;
}

string rtrim(const string &str)
{
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !isspace(ch); }).base(), s.end()
    );
    return s;
}

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


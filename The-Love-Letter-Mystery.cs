using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'theLoveLetterMystery' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts STRING s as parameter.
     */

    public static int theLoveLetterMystery(string s)
    {
        int result = 0;
        int n = s.Length;

        for (int i = 0; i < n / 2; ++i)
        {
            result += Math.Abs(s[i] - s[n - 1 - i]);
        }

        return result;
    }

    public static int TheLoveLetterMystery2(string s)
    {
        int result = 0;
        int n = s.Length;

        for (int i = 0, j = n - 1; i <= j; ++i, --j)
        {
            if (s[i] != s[j])
            {
                result += Math.Abs(s[i] - s[j]);
            }
        }

        return result;
    }

    public static int TheLoveLetterMystery3(string s)
    {
        int result = 0;
        int i = 0;
        int j = s.Length - 1;

        while (i <= j)
        {
            if (s[i] != s[j])
            {
                result += Math.Abs(s[i] - s[j]);
            }

            i++;
            j--;
        }

        return result;
    }    
}


class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int q = Convert.ToInt32(Console.ReadLine().Trim());

        for (int qItr = 0; qItr < q; qItr++)
        {
            string s = Console.ReadLine();

            int result = Result.theLoveLetterMystery(s);

            textWriter.WriteLine(result);
        }

        textWriter.Flush();
        textWriter.Close();
    }
}

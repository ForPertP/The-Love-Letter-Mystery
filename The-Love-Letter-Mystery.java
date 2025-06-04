import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'theLoveLetterMystery' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts STRING s as parameter.
     */

    public static int theLoveLetterMystery(String s) {
        int result = 0;
        int n = s.length();

        for (int i = 0; i < n / 2; ++i) {
            result += Math.abs(s.charAt(i) - s.charAt(n - 1 - i));
        }

        return result;
    }

    public static int theLoveLetterMystery2(String s) {
        int result = 0;
        int n = s.length();

        for (int i = 0, j = n - 1; i <= j; ++i, --j) {
            if (s.charAt(i) != s.charAt(j)) {
                result += Math.abs(s.charAt(i) - s.charAt(j));
            }
        }

        return result;
    }

    public static int theLoveLetterMystery3(String s) {
        int result = 0;
        int i = 0;
        int j = s.length() - 1;

        while (i <= j) {
            if (s.charAt(i) != s.charAt(j)) {
                result += Math.abs(s.charAt(i) - s.charAt(j));
            }

            i++;
            j--;
        }

        return result;
    }    
}


public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, q).forEach(qItr -> {
            try {
                String s = bufferedReader.readLine();

                int result = Result.theLoveLetterMystery(s);

                bufferedWriter.write(String.valueOf(result));
                bufferedWriter.newLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
        bufferedWriter.close();
    }
}

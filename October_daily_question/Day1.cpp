 //! 557. Reverse Words in a String III

class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int n = s.length();
        for (int i = 0; i <= n - 1; i++) {
            if (s[i] == ' ' || i == n - 1) {
                int end = i - 1;
                if (i == n - 1) end = i;
                while (start < end) {
                    char temp = s[start];
                    s[start] = s[end];
                    s[end] = temp;
                    start++;
                    end--;
                }
                start = i + 1;
            }
        }

        return s;
    }
};
class Solution {

    private:
        bool valid(char ch) {
            if((ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
                return true;
            }
            else {
                return 0;
            }
        }

        char toLowerCase(char ch) {
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                return ch;
            }
            else {
                char temp = ch - 'A' + 'a';
                return temp;
            }
        }

        bool checkPalindrome(string a) {
            int start = 0;
            int end = a.length() - 1;

            while(start <= end) {
                if(a[start] != a[end]) {
                    return false;
                }
                else {
                    start++;
                    end--;
                }
            }
            return true; 
        }


public:
    bool isPalindrome(string s) {
        string temp = "";

        for(int i = 0; i<s.length();i++) {
            if(valid(s[i])) {
                temp.push_back(s[i]);
            }
        }

        for(int i = 0; i<temp.length();i++) {
            temp[i] = toLowerCase(temp[i]);
        }

        return checkPalindrome(temp);
    }
};

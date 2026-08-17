class Solution {
public:
    bool isPalindrome(string s) {
        for (char &c : s) {
            c = tolower(c);
        }

        erase_if(s, [](unsigned char x) {
            return !( (x > 47 && x < 58) || (x > 96 && x < 123) );
        });

        cout << s << endl;

        char* left = &s[0];
        char* right = &s[s.length() - 1];
        if (s.length() <= 1) {return true;}
        for (int i = 0; i < s.length(); ++i) {
            if (*left != *right) {return false;}
            if (right - left <= 1) {return true;}
            ++left;
            --right;
        }
        return false;
    }        
};
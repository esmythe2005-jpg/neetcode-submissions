class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (string i : strs) {
            result += to_string(i.length()) + '#';
            for (char x : i) {
                result += x; 
            }
        }
        return result;
    }

    vector<string> decode(string s) {
        string lStr;
        size_t index = 0;
        int length = 0;
        vector<string> final = {};
        while (index < s.size()) {
            lStr = "";
            for (size_t i = index; s[i] != '#'; ++i) {
                lStr += s[i];
            }
            index += lStr.size() + 1;
            length = stoi(lStr);
            lStr = "";
            for (size_t i = index; i < index + length; ++i) {
                lStr += s[i];
            }
            final.push_back(lStr);
            index += length;
        }
        return final;
    }
};

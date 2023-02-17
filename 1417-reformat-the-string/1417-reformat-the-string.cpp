class Solution {
public:
    string reformat(string s) {
        string digits, letters;
        for (auto c : s) {
            if (isdigit(c)) {
                digits.push_back(c);
            } else {
                letters.push_back(c);
            }
        }
        if (abs((int)digits.size() - (int)letters.size()) > 1) {
            return "";
        }
        string ans;
        if (digits.size() > letters.size()) {
            for (int i = 0; i < digits.size(); i++) {
                ans.push_back(digits[i]);
                if (i < letters.size()) {
                    ans.push_back(letters[i]);
                }
            }
        } else {
            for (int i = 0; i < letters.size(); i++) {
                ans.push_back(letters[i]);
                if (i < digits.size()) {
                    ans.push_back(digits[i]);
                }
            }
        }
        return ans;
    }
};
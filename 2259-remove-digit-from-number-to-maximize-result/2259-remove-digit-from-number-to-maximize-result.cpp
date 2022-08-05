class Solution {
public:
    string removeDigit(string number, char digit) {
         string res = "";
        for (int i = 0 ; i < number.size() ; i++) {
            if (number[i] == digit) {
                string tmp = number;
                tmp = tmp.erase(i,1);
                res = max(res, tmp);
            }
        }
        return res;
    }
};
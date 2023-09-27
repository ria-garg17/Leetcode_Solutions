class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long decodedLength = 0;

        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                int x = s[i] - '0';
                decodedLength *= x;
            } else {
                decodedLength++;
            }
        }

        for (int i = s.length() - 1; i >= 0; i--) {
            if (isdigit(s[i])) {
                int x = s[i] - '0';
                decodedLength /= x;
                k %= decodedLength;
            } else {
                if (k == 0 || k == decodedLength) {
                    return string(1, s[i]);
                }
                decodedLength--;
            }
        }

        return "";
    }
};

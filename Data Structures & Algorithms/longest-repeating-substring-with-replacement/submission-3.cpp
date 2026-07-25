class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, res = 0, maxf = 0, n = s.length();
        vector<int> v(26, 0);

        for (int r = 0; r < n; r++) {
            v[s[r] - 'A']++;
            maxf = max(maxf, v[s[r] - 'A']);

            while ((r - l + 1) - maxf > k) {
                v[s[l] - 'A']--;
                l++;

                // Recompute max frequency in current window
                maxf = 0;
                for (int i = 0; i < 26; i++) {
                    maxf = max(maxf, v[i]);
                }
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};
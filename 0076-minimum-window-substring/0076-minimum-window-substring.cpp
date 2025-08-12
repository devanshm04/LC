class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        unordered_map<char,int> mp;
        for (char c : t) {
            mp[c]++;
        }

        int count = mp.size();
        int i = 0, j = 0;
        int n = s.size();
        int minlen = INT_MAX;
        int start = 0;

        while (j < n) {
            char endchar = s[j];
            if (mp.find(endchar) != mp.end()) {
                mp[endchar]--;
                if (mp[endchar] == 0) {
                    count--;
                }
            }

            while (count == 0) { // valid window
                if (j - i + 1 < minlen) {
                    minlen = j - i + 1;
                    start = i;
                }

                char startchar = s[i];
                if (mp.find(startchar) != mp.end()) {
                    mp[startchar]++;
                    if (mp[startchar] > 0) {
                        count++;
                    }
                }
                i++; // move left pointer
            }
            j++; // move right pointer
        }

       if (minlen == INT_MAX) {
    return "";
} else {
    return s.substr(start, minlen);
}

    }
};

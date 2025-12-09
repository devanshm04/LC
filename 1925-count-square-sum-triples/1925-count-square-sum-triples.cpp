class Solution {
public:
    int countTriples(int n) {
         int ans = 0;
        for (int a = 1; a <= n; ++a) {
            for (int b = 1; b <= n; ++b) {
                long long s = 1LL * a * a + 1LL * b * b;
                int c = (int) std::llround(std::floor(std::sqrt((long double)s)));
                // ensure c*c == s (exact square) and c within bounds
                if (c <= n && 1LL * c * c == s) ++ans;
            }
        }
        return ans;
    
    }
};
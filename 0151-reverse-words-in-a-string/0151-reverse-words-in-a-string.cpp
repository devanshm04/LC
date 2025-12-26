class Solution {
public:
    string reverseWords(string s) {
    int n = s.size();
    string ans = "";

    reverse(s.begin(),s.end());

    int i=0;
    while(i<n){
        while(i<n && s[i]==' ')i++;

        string word = "";
        while(i<n&& s[i]!=' '){
           word+=s[i];
           i++;
        }
        reverse(word.begin(),word.end());
        if(!word.empty()){
        if(!ans.empty()) ans+=" ";
        ans+=word;
      }
    }
      
      return ans;
    }
};


// class Solution {
// public:
//     string reverseWords(string s) {
//         int n = s.length();
//         string ans = "";

//         // Reverse the entire string
//         reverse(s.begin(), s.end());

//         int i = 0;
//         while (i < n) {
//             // Skip spaces
//             while (i < n && s[i] == ' ') i++;

//             // Extract word
//             string word = "";
//             while (i < n && s[i] != ' ') {
//                 word += s[i];
//                 i++;
//             }

//             // Reverse individual word
//             reverse(word.begin(), word.end());

//             // Append to result
//             if (!word.empty()) {
//                 if (!ans.empty()) ans += " ";
//                 ans += word;
//             }
//         }

//         return ans;
//     }
// };

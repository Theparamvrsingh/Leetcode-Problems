class Solution {
private:
    bool isPalindrome(string s){
        string reverse = s;
        std::reverse(reverse.begin(), reverse.end());
        return s == reverse;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
         if( isPalindrome(words[i]) == true ){
            return words[i];
         }
        } 
        return "";
    }
};

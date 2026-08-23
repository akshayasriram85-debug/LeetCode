class Solution {
public:
    bool isPalindromic(string s) {
        string bin="";
        for(char ch:s){
            int ascii=ch;
            string temp="";
            while(ascii>0){
                temp+=(ascii%2)+'0';
                ascii/=2;
            }
            while(temp.size()<8)
                temp+='0';
            reverse(temp.begin(),temp.end());
            bin+=temp;
        }
        string rev=bin;
        reverse(rev.begin(),rev.end());
        return bin==rev;
    }
};
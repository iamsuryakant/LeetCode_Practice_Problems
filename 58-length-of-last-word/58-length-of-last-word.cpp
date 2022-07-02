class Solution {
public:
    int lengthOfLastWord(string s) {
        
//         int n = s.length()-1;
//         // cout<<n<<endl;
//         // return 5;
        
//         int len = 0;
//        // int j = 0;
        
//         while( n >= 0 && s[n] == ' '){
//             n--;
//         }
        
//         while(n >= 0 && s[n] != ' '){
//             len++;
//             n--;
//         }
        
//         return len;
        
        stringstream ss(s);
        string temp;
        while(ss>>temp){}
        return temp.size();
    }
};
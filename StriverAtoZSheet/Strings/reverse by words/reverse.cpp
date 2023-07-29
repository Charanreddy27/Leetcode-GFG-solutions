class Solution {
public:
    string reverseWords(string s) {
        string res;
       int end = s.length()-1;

       for(int i=s.length()-1; i>=0; i--){
           if(s[i]==' '){
               if(end!=i)
               res.append(s.substr(i+1, end-(i+1)+1)+' ');
               
               end=i-1;
           }
        }

        if(s[0]!=' '){
            res.append(s.substr(0, end+1)+' ');
        }

        res.pop_back();
        return res;
    }
};
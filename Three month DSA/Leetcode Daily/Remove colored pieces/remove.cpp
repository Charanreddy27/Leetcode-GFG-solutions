class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0;
        int b=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i]==colors[i-1] and colors[i]==colors[i+1]){
                if(colors[i]=='A') a++;
                else b++;
            }
        }
        if(a>b) return true;
        return false;
    }
};
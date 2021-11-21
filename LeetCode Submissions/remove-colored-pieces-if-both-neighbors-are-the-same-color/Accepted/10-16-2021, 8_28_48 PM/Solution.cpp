// https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color

class Solution {
public:
    bool winnerOfGame(string colors) {
        int Acount = 0;
        int Bcount = 0;
        for(int i=1;i<colors.length()-1;i++){
            if(colors[i] == 'A' && colors[i-1] == colors[i] && colors[i] == colors[i+1])
                Acount++;
            else if(colors[i] == 'B' && colors[i-1] == colors[i] && colors[i] == colors[i+1])
                Bcount++;
        }
        cout<<Acount<<" "<<Bcount<<"\n";
        if(Acount == Bcount)
            return false;
        if(Bcount > Acount)
            return false;
        return true;
    }
};
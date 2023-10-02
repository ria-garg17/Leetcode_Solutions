class Solution {
public:
    bool winnerOfGame(string colors) {
        int aS = 0, bS = 0;

        for(int i = 1; i<colors.length()-1; i++){
            char currCol = colors[i];
            char prevCol = colors[i-1];
            char nextCol = colors[i+1];

            if(currCol == 'A' && prevCol == 'A' && nextCol == 'A')
                aS++;
            else if(currCol == 'B' && prevCol == 'B' && nextCol == 'B')
                bS++;
        }
        return aS > bS;
    }
};
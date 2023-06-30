class Solution {
public:
    int arrangeCoins(int n) {
        int level=1;
        int c=0;
        while(n>=level){
            n-=level;
           if(n>0){
                c++;
            level+=1;
        }
        }
        return c;
    }
};
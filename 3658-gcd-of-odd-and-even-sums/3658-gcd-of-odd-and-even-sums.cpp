class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddsum=0,evensum=0;
        for(int i=1;i<n*2;i++){
            if(i%2==0){
                evensum=evensum+i;
            }
            else{
                oddsum=oddsum+i;
            }
        }
        while(oddsum>0 && evensum>0){
            if(oddsum>evensum){oddsum=oddsum%evensum;}
            else{
                evensum=evensum%oddsum;
            }
        }
        if(oddsum==0){
            return evensum;
        }
        return oddsum;
    }
};
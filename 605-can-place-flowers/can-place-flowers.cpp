class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int j=0;
        if(n==0){
            return true;
        }else if(flowerbed.size()==0){
            return false;
        }
        if(flowerbed.size()==1 && flowerbed[0]==1 && n==1){
            return false;
        }else if(flowerbed.size()==1 && flowerbed[0]==0 && n==1){
            return true;
        }
        if(flowerbed[j]==0 && (j+1>=(int)flowerbed.size() || flowerbed[j+1]==0) && n>0){
              flowerbed[j]=1;
                n--;  
            }
        j += flowerbed.size()-1;
        if(flowerbed[j]==0 && (j-1<0 || flowerbed[j-1]==0) && n>0){
              flowerbed[j]=1;
                n--;  
            }
        for( int i=1;i< flowerbed.size()-1;i++){
            if(flowerbed[i] != 1 && flowerbed[i-1]==0 && flowerbed[i+1]==0 && n>0){
                flowerbed[i]=1;
                n--;
            }
        }

        if(n<=0){
            return true;
        }else{
            return false;
        }
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bb=prices[0],mp=0;
        for(int i=1;i<prices.size();i++){
        if(prices[i]>bb){if((prices[i]-bb)>mp)mp=(prices[i]-bb);}
        else if(prices[i]<bb)bb=prices[i];
    }return mp;
    }
};

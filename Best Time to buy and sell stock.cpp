#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mxprofit = 0, profit = 0;

        int i,j,k;

        int current = prices[0];

        for(i=1; i< prices.size(); i++){
            if(prices[i] < current){
                current = prices[i];
            }

            profit = prices[i] - current;

            mxprofit = max(mxprofit,profit);
        }
        return mxprofit;
}

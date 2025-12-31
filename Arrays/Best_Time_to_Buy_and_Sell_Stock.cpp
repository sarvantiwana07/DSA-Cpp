/*
Problem: Best Time to Buy and Sell Stock
Approach:
- Brute Force: Calculate profit for every 'i' by selling stock
- Optimal Solution: Keep record of minimum price and then calculate profit
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int min = INT_MAX;
    int maxp = 0;
    int profit = 0;
    
    for(int i = 0; i < n; i++){
        if(prices[i] < min){
            min = prices[i];
        }
        profit = prices[i] - min;
        if(profit > maxp){
            maxp = max(profit, maxp);
        }
    }
    return maxp;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};

    int solution = maxProfit(prices);

    cout<<"Maximum Profit is: "<<solution;
    return 0;
}
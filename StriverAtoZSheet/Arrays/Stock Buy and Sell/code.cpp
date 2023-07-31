class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minele = INT_MAX;
        int maxi=0;
        for(int i=0;i<prices.size();i++){
            minele = min(minele,prices[i]);
            maxi = max(maxi,prices[i]-minele);
        }
        return maxi;
    }
};
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lengthOfLIS(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n,1); 
    
    for (int i= 1;i<n;++i){
        for(int j=0;j<i;++j){
            if(arr[i]>arr[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}
int minOperationsToSort(vector<int>&arr) {
    int n=arr.size();
    
 
    int lisLength=lengthOfLIS(arr);
    
    return n-lisLength;
}

int main(){
    vector<int> arr={3,1,2,1,5,2};
    cout<<"Minimum operations required: "<<minOperationsToSort(arr)<<endl;
    
    return 0;
}

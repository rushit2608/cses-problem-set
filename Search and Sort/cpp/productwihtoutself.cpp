#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(),zerosz = 0,ind;
        long long int product = 1;
        vector<int>ans(n,0);
        ans[0] = nums[0];
        for(int i=1;i<n;i++){
            ans[i] = nums[i]*ans[i-1];
        }
        for(int i=n-2;i>=0;i--){
                nums[i] = nums[i]*nums[i+1];
            }
        ans[n-1] = ans[n-2];
        for(int i=n-2;i>0;i--){
            ans[i] = ans[i-1] * nums[i+1];
        }
        ans[0] = nums[1];
        return ans;
    }

int maxProduct(vector<int>& nums) {
        int maxProd = INT_MIN,temp=1,n=nums.size();
        int i=0,j=0;
        while(j<n){
            if(i==j){
                temp*=nums[i];
            }
            maxProd
        }
    }

int main(){
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> ans = productExceptSelf(a);
    for(auto s:ans)cout<<"ddd"<<s<<" ";
    cout<<"\n";
    return 0;
}
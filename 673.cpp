#include<bits/stdc++.h>
using namespace std;
int findNumberOfLIS(vector<int>&nums){
	vector<int>d(nums.size(),1),cnt(nums.size(),1);
        int res = -1,c=1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                   if(d[i] < d[j]+1){
                        d[i] = d[j]+1;
                        cnt[i] = cnt[j];
                   }
                   else if(d[i] == d[j]+1){
                       cnt[i]+=cnt[j];
                   }
                }
            }
            res = max(res,d[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(d[i] == res){
                ans+=cnt[i];
            }
        }
        return ans;
}
int main(){
	vector<int>num = {1,3,5,4,7};
	cout<<findNumberOfLIS(num);
	return 0;
}

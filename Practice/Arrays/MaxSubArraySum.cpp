#include<bits/stdc++.h>
using namespace std;


//note: if all the elements are negative then the max_value element is the answer;
int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int answer = INT_MIN;
    for(int i = 0 ;i<(int)nums.size() ; i++){
        sum += nums[i];
        answer = max(answer , sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return answer;
}
vector<int> maxSubArrayVec(vector<int>& nums){
    int sum = 0;
    int answer = INT_MIN;
    int start  , end = -1 , ansstart = -1;
    for(int i = 0 ;i<(int)nums.size() ; i++){
        if(sum == 0 ){
            start = i;
        }
        sum += nums[i];
        if(sum > answer){
            answer = sum;
            ansstart = start;
            end = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }

    vector<int> ans ;
    for(int i = ansstart ; i<= end ;i++){
        ans.push_back(nums[i]);
    }
    return ans;
}
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }

    int majority = maxSubArray(arr);
    vector<int> ans = maxSubArrayVec(arr);
    cout<<majority<<endl;
    for(int i = 0 ;i<(int)ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
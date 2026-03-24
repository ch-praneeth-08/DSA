#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int , int>mpp;
    int n = arr.size();
    for(int i = 0 ;i<n;i++){
        int rem = target - arr[i];
        if(mpp.find(rem) != mpp.end()){
            return {mpp[rem] , i};
        }

        mpp[arr[i]] = i;
    }
    return {};
}

bool twosum(vector<int>& arr , int target){
    int left = 0 ;
    int right = arr.size();
    sort(arr.begin() , arr.end());
    while(left<=right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return true;
        }
        else if(sum > target){
            right --;
        }
        else{
            left ++;
        }
    }
    return false;
}

int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    vector<int> result = twoSum(arr , target);
    bool result_ = twosum(arr, target);

    cout<<result[0] << " "<<result[1]<<" "<<result_;
}
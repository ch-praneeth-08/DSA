#include<bits/stdc++.h>
using namespace std;

int better_approach(vector<int>& arr , int k ){
    unordered_map<int , int> mpp;
    int sum = 0 ;
    int maxlen = 0 ;
    for(int i = 0 ;i< arr.size();i++){
        sum+= arr[i];

        if(sum == k){
            maxlen = max(maxlen , i+ 1);
        }

        int rem = sum - k;
        if(mpp.find(rem) != mpp.end()){
            maxlen = max(maxlen , i - mpp[rem]);
        }

        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    return maxlen;
}

int optimal_approach(vector<int>& arr , int k ){
    int left = 0 ;
    int right = 0 ;
    int sum = 0 ;
    int maxlen = 0 ;
    while(right< (int)arr.size()){
        sum += arr[right];
        while(left<=right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen , right - left + 1);
        }
        right ++;
    }
    return maxlen;
}

int main(){
    int n ;
    cin>>n;

    vector<int>arr(n);
    for(int i= 0 ;i<n ;i++){
        cin>>arr[i];
    }
    int k ;
    cin>>k;

    int answer = better_approach(arr , k);
    int answer_ = optimal_approach(arr , k);

    cout<<answer<<" "<<answer_;
}
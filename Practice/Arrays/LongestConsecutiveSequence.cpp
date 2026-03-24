#include<bits/stdc++.h>
using namespace std;
int LongestConsecutiveSequence(vector<int>& arr){
    int n = arr.size();
    unordered_map<int,int>mpp;
    for(int i = 0 ;i<n;i++){
        mpp[arr[i]]++;
    }
    int answer = 0;
    for(auto &it: mpp){
        if(mpp.find(it.first - 1) == mpp.end()){
            int number = it.first;
            int count = 0 ;
            while(mpp.find(number) != mpp.end()){
                count+= mpp[number];
                number++;
            }

            answer = max(answer , count);
        }
    }
    return answer;
}
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }

    int answer = LongestConsecutiveSequence(arr);

    cout<<answer;
}
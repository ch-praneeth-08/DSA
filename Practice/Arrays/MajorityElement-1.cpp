
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr) {
    int element = arr[0];
    int count = 0 ;
    int n = arr.size();
    for(int i = 0 ;i<n;i++){
        if(count == 0){
            element = arr[i];
        }
        if(arr[i] == element){
            count++;
        }
        else{
            count--;
        }
    }
    return element;
}


int main(){
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }

    int majority = majorityElement(arr);

    cout<<majority<<endl;
}
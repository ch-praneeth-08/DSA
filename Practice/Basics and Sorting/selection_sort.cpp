#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0 ;i<n - 1;i++){
        int mini = i ;
        for(int j = i + 1; j<n;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[i] , arr[mini]);
    }

    return;
}
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(arr);
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
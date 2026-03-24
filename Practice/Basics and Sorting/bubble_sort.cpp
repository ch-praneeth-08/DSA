#include<bits/stdc++.h>
using namespace std;


// best case TC : O(N) - when all the elements are in order
// worst case TC : O(N^2) 
void bubble_sort(vector<int>& arr){
    int n = arr.size();
    for(int i = n - 1;i>=1;i--){
        int swaps = 0 ;
        for(int j = 0 ;j<= i - 1 ;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swaps++;
            }
        }
        if(swaps==0){
            break;
        }
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

    bubble_sort(arr);
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
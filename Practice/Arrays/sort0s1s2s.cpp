#include<bits/stdc++.h>
using namespace std;

//Dutch National Flag algorithm 
// where 0 -> low - 1 (all are zeros)
// low ->mid - 1 (all are ones)
// mid -> high (jumbled numbers without any order)
// high + 1 -> n - 1 (all are twos) 
void sortcolors(vector<int>& arr){
    int n = arr.size();
    int low = 0 ;
    int mid = 0 ;
    int high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low] , arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
    return;
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i= 0 ;i<n;i++){
        cin>>arr[i];
    }

    sortcolors(arr);

    for(int i= 0 ;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
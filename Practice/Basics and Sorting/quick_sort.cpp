#include<bits/stdc++.h>
using namespace std;

int find_pivot(vector<int>& arr , int low , int high){
    int pivot = arr[low];
    int i = low ;
    int j = high;

    while(i<j){
        while(i<= high && arr[i] <= pivot ){
             i++;
        }
        while(j>= low && arr[j] > pivot){
            j--;
        }
        if(i<j){
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[low ] , arr[j]);

    return j;
}
void quick_sort(vector<int>& arr , int low , int high){

    if(low<high){
        int pivot = find_pivot(arr , low , high);

        quick_sort(arr , low , pivot - 1);
        quick_sort(arr , pivot + 1 , high);
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

    quick_sort(arr , 0 , n-1);
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
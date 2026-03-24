#include<bits/stdc++.h>
using namespace std;


/*

        INTUITION: the next permutation usually has the longest common prefix. 
    1. first find the pivot which breaks the condition a[i] < a[i+1]
    2. then find the index from back which has a bigger element than the element and index pivot earlier. and swap them.
    3. from the pivot + 1 -> n - 1 , reverse the array to get the next permutation. 
*/
void nextPermutation(vector<int>& arr) {
    int n = arr.size();
    int index = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        reverse(arr.begin(), arr.end());
    } else {
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] > arr[index]) {
                swap(arr[i], arr[index]);
                break;
            }
        }

        reverse(arr.begin() + index + 1, arr.end());
    }
}

int main(){
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }

    nextPermutation(arr);

    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
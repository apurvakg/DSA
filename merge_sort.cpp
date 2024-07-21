#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int low, int mid, int high){
    int left = low, right = mid+1;
    vector<int> temp;
    while(left<=mid && right <=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }

}
void ms(int arr[], int low, int high){
    if(low == high) return;
    int mid = (low + high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ms(arr, 0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
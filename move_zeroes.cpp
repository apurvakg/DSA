#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]!=0){
            v.push_back(arr[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        arr[i] = v[i];
    }
    for(int i=v.size();i<n;i++){
        arr[i] = 0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
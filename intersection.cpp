#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr1[n], arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int i=0;
    int j=0;
    vector<int> temp;
    // for(int i=0;i<n1;i++){
    //     for(int j=0;j<n2;j++){
    //         if(arr1[i]==arr2[j] && visited[j] == 0){
    //             temp.push_back(arr1[i]);
    //             break;
    //         }
    //         if(arr2[j]>arr1[i]) break;
    //     }
    // }
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            temp.push_back(arr1[i]);  
            i++; 
            j++;
        }
        if(arr1[i] < arr2[j]){
            i++;
        }
        else {
            j++;
        }
    }
    for(auto it: temp){
        cout<< it <<" ";
    }
}
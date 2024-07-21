#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int nums[n];
    int i;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // for(i=0;i<n;i++){
    //     int flag = 0;
    //     for(int j=0;j<n;j++){
    //         if(nums[j] == i){
    //             flag=1;
    //             break;
    //         }
    //     }
    //     if(flag == 0){
    //         return i;
    //     }
    // }
    // cout << i;
    vector<int> hash(n + 1, 0);
    for (int i = 0; i < n; i++) {
        hash[nums[i]]++;
    }
    for (int i = 0; i <= n; i++) {
        if (hash[i] == 0)
            return i;
    }
    return -1;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, K;
    cin>>N>>K;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    //approach 1: Brute force
    // int maxi=0;
    // for(int i=0;i<N;i++){
    //     int sum = 0;
    //     for(int j=i;j<N;j++){
    //         sum =sum+ A[j];
    //         if(sum==K){
    //         maxi = max(maxi,j-i+1);
    //         break;
    //         }
    //         if(sum>K){
    //             break;
    //         }
    //     }
    // }
    // Approach 2: Hashing . Most optimal for postives and negatives
    // map<int, int> preSum;
    // int sum=0, maxLen =0;
    // for(int i=0;i<N;i++){
    //     sum += A[i];
    //     if(sum == K){
    //         maxLen = max(maxLen, i+1);
    //     }
    //     int rem = sum -K;
    //     if(preSum.find(rem) != preSum.end()){
    //         int len = i -preSum[rem];
    //         maxLen = max(maxLen, len);
    //     }
    //     if(preSum.find(sum) == preSum.end()){
    //     preSum[sum] = i;
    //     }
    // }
    // Approach 3. 2 pointer . Most optimal for positves wit zero
    int i=0, j=0;
    int sum =A[0], len=0;
    while(j<N){
        while(i <=j && sum>K){
            sum -=A[i];
            i++;
        }
        if(sum == K){
            len = max(len, j-i+1);
        }
        j++;
        if(j<N)
            sum = sum + A[j];
    }
    cout<< len;
}
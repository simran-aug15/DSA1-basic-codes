//Given a integer array nums,find the subarray with the largest sum, and return sum
#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main(){
      int arr[7]={3,-4,5,4,-1,7,-8};
      int n=7;
        int currentsum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            currentsum=currentsum+arr[i];
            maxsum=currentsum;
            if(currentsum<0)
            {
                currentsum=0;
            }
        }
        cout<<maxsum;
    }

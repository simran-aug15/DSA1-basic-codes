//Given a non empty array of integer nums every element appear twice except one.Fint that single one
#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int>nums{4,1,2,1,2};
 int ans=0;
 for(int i:nums){
    ans=ans^i;
 }
 coutgcc 1.c
 <<ans;

}
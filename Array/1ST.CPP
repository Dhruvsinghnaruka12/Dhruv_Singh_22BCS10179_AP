#include<iostream>
#include<algorithm>
using namespace std;



//removing duplicate element

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

sort(arr,arr+n);
    int outt[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
          outt[j]=arr[i];
          j++;
        }
        else{

        }
    }
    cout<<"sorted array " <<endl;
    for(int i=0;i<j;i++){
        cout<<outt[i]<<endl;
    }

}

/*

287. Find the Duplicate Number
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and using only constant extra space.

 


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return nums[i]; 
            }
        }

        return -1;
    }
};



*/

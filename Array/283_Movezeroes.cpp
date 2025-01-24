/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



class Solution {
public:

 
    void moveZeroes(vector<int>& nums) {
    
              int j = 0; 

        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                std::swap(nums[i], nums[j]);
                j++;  
            }
        }

        if(j==0){
        std::sort(nums.begin(), nums.begin() + j);    
        }
          else{

          }
        
    }
    
};
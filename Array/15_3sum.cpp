/* Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets*/


#include<iostream>
using namespace std;
#include<vector>;

/*class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>po;
        for(int i =0;i<nums.size()-2;i++){
            for(int j=1;j<nums.size()-1;j++){
                for (int k =2;k<nums.size();k++){
                    if(i!=j&&j!=k && nums[i]+nums[j]+nums[k]==0){
                     cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                    }
                    else{

                    }
                }
            }
        }
    return po;
}
}; */
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());  
        vector<vector<int>> result;
        
        for (int i = 0; i < nums.size() - 2; i++) {
            
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            int left = i + 1, right = nums.size() - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++;  
                } 
                else {
                    right--;  
                }
            }
        }
        
        return result;
    }
};

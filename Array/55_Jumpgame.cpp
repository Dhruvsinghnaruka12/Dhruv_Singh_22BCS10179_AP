#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


/*class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=1;
        int length=nums.size();
        for(int i=1;i<length;i++){
            if(nums[i]==0 && nums[i]>length){
                return false;
            }
            else{
                i=nums[i]+i;
                if(i==nums.size()){
                    return true;
                }
                else{

                }
            }
        }
    }
};*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int length = nums.size();
        int maxReach = 0;
        
        for (int i = 0; i < length; i++) {
            if (i > maxReach) {
                return false;
            }
            
            maxReach = max(maxReach, i + nums[i]);
            
            if (maxReach >= length - 1) {
                return true;
            }
        }
        
        return false;  
    }
};

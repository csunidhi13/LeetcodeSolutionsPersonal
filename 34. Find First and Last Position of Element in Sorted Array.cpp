vector<int> searchRange(vector<int>& nums, int target) {
   
        vector<int> ans;
        int start=0;
        int end=nums.size()-1;
        int res1=-1;
        int res2=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                res1=mid;
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                    start=mid+1;
                }
            
        }
        start=0;
        end=nums.size()-1;
         while(start<=end){
            int m=start+(end-start)/2;
            
            if(nums[m]==target){
                res2=m;
                start=m+1;
            }
            if(nums[m]>target){
                end=m-1;
            }
            else{
                start=m+1;
            }
            
            
        }
        ans.push_back(res1);
        ans.push_back(res2);

        return ans;
        
        
    }
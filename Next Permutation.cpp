#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    int breakpoint = -1;
        int sz = nums.size();
        sz = n;

        for(int i = sz-1; i>0; i--){
            if(nums[i] > nums[i-1])
                {
                    breakpoint = i-1;
                    break;
                }
        }

        int minm = 1000, m=0;

        if(breakpoint != -1){
        for(int i = breakpoint+1; i<sz; i++){
            if(nums[i] > nums[breakpoint]){
                if(nums[i] < minm)
                    minm = nums[i];
                    m = i;
            }
        }

        swap(nums[breakpoint],nums[m]);

        sort(nums.begin()+breakpoint+1,nums.end());
        
        }

        else {
            sort(nums.begin(),nums.end());
        }

        return nums;

}

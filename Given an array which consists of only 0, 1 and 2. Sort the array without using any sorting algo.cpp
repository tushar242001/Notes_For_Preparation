// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm .

// Code : 

    void sort012(int nums[], int n)
    {
        int low=0,high=n-1,mid=0;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
            
    }

    



int countKDifference(int* nums, int numsSize, int k){
    int ct=0;
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(abs(nums[i]-nums[j])==k)
            ct++;
        }
    }
    return ct;
}
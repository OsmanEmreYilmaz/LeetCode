

int removeDuplicates(int* nums, int numsSize){

    int i,k=1;
    for(i=0;i<numsSize-1;i++){
        if(nums[i]<nums[i+1]){
            nums[k]=nums[i+1];
            k++;
        }
    }
    return k;
}
    
    
    
    
    
    
    
    
    
    
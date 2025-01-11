int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int index = 1; 

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[index - 1]) { 
            nums[index++] = nums[i];  
        }
    }

    return index;
}
int removeElement(int* nums, int numsSize, int val){
    
    int appendIndex = 0;
    bool find = false;
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == val && !find) {
            appendIndex = i;
            find = true;
        }
        if (nums[i] != val) {
            nums[appendIndex] = nums[i];
            appendIndex++;
            k++;
        }
    }

    return k;
}

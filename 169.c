int majorityElement(int* nums, int numsSize){
    int counter = 0;
    int majority;
    for (int i = 0; i < numsSize; i++){
        if (counter == 0){
            majority = nums[i];
        }
        if(nums[i] == majority){
            counter++;
        }
        else{
            counter--;
        }
    }
    return majority;
}

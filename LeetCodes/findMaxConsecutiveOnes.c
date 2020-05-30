

int findMaxConsecutiveOnes(int* nums, int numsSize){

    int count = 0;
    int max_count = 0;
    int curr;

    for(int i=0;i<numsSize;i++){

         curr = nums[i];

        if(curr==1){

            count++;

            if(count >= max_count){

                max_count = count;
            }

        }
        else{
            count = 0;
        }

    }
    return max_count;
}

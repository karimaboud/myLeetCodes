
int findNumbers(int* nums, int numsSize){

    int tmp,curr,num_digits=0;
    int count=0;

    for(int i=0;i<numsSize;i++){

        curr = nums[i];

        while(curr>=1){

            curr = curr/10;
            num_digits++;

        }

        if (num_digits%2 == 0){
            count++;
        }
         num_digits=0;
    }

    return count;

}

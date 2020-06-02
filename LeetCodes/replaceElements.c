int* replaceElements(int* arr, int arrSize, int* returnSize){
    int max;
    *returnSize=arrSize;

    for( int i = 0; i < arrSize ; i++){
        if( i< arrSize -1 ){
            max = arr[i+1];
        }
        for(int j=i+1; j < arrSize; j++){

            if(arr[j] > max){
                max = arr[j];
            }
        }
        arr[i] = max;
    }
    arr[arrSize-1] = -1;

    return &arr[0];
}

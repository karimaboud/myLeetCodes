
void duplicateZeros(int* arr, int arrSize){

    int i = 0;
    int j = arrSize - 2;

    while(i < arrSize){

        if( arr[i] == 0 ){

            while( j >= i+1 ){

                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = 0;
            i+=2;
            j = arrSize - 2;
        }

        else{
            i++;
        }
    }
    return arr;
}

#include<stdio.h>

void minMax(int low, int high, int *min, int *max, int array[]){
    if(low == high){
        *min = *max = array[low];
    }
    else if(low == high - 1){
        if(array[low] < array[high]){
            *min = array[low];
            *max = array[high];
        }
        else{
            *min = array[high];
            *max = array[low];
        }
    }
    else{
        int mid = (low + high) / 2;
        int min1, max1;
        
        minMax(low, mid, min, max, array);
        minMax(mid + 1, high, &min1, &max1, array);
        
        if(*min > min1){
            *min = min1;
        }
        if(*max < max1){
            *max = max1;
        }
    }
}

int main(){
    int array[5] = {1, 4, 2, 7, 0};
    int min, max;
    minMax(0, 4, &min, &max, array);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    return 0;
}

#include<stdio.h>
int main(){
    
    int array[10]={1,2,5,6,7,23,24,25,55,100};
    int low=0;
    int high=9;
    int target=55;
    while(low<=high){
        int mid=(low+high)/2;
        if(target<array[mid])
            high=mid-1;
        else if ( target > array[mid])
            low=mid+1;
        else{
            printf("%d",mid);
            break;
        }
    }
}

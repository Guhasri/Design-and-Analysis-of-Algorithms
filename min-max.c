#include<stdio.h>
int main(){
    int array[]={0,3,5,2,5,33,2,4};
    int min=1000;
    int max=0;
    for( int i=0;i<(sizeof(array)/sizeof(int));i++){
        if(max<array[i])
            max=array[i];
        if(min>array[i])
            min=array[i];
    }
    printf("%d  %d",min,max);

}
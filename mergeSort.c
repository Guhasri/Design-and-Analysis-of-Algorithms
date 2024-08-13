#include<stdio.h>

void merge(int low,int mid,int high,int array[])
{
    int h=low;
    int j=mid+1;
    int temp[5];
    int index=0;

    while(h<=mid && j<=high){
        if(array[h]<=array[j])
        {
            temp[index]=array[h];
            h++;
        }
        else{
            temp[index]=array[j];
            j++;
        }
        index++;
    }

    while(h<=mid){
        temp[index]=array[h];
        index++;
        h++;
    }
    while(j<=high){
        temp[index]=array[j];
        index++;
        j++;
    }

    for(int i=0;i<index;i++)
    {
        array[low+i]=temp[i];
    }
}

void mergeSort(int low,int high, int array[])
{
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(low,mid,array);
        mergeSort(mid+1,high,array);
        merge(low,mid,high,array);
    }
}

int main()
{
    int array[5]={1,4,2,9,5};
    int low=0;
    int high=4;
    mergeSort(low,high,array);
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
}
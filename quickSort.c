#include<stdio.h>
#include<string.h>

void swap(int* a,int* b)
{
    int c=*a;
    *a=*b;
    *b=c;
}

int partition(int array[],int low,int high)
{

int i=low+1;
int j=high;
int pivot=array[low];

while(i<=j){
    while(array[i]<=pivot && i<=high)
        i++;
    while(array[j]>=pivot && j>=low)
        j--;
    
    if(i<j)
    {
        swap(&array[i],&array[j]);
    }
    
}
swap(&array[low],&array[j]);
return j;

}

void QuickSort(int low, int high,int array[])
{

if(low<high)
{


int partition_index=partition(array,low,high);
QuickSort(low, partition_index-1,array);
QuickSort(partition_index+1,high,array);

}

}

int main(){

    int array[5]={3,8,1,5,6};
    int len=(sizeof(array)/sizeof(int));
    QuickSort(0,len,array);
    for (int i=0 ; i<len ; i++)       
    {
        printf("%d ",array[i]);
    }
}
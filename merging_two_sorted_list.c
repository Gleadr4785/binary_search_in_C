//Given two sorted lists of integers, merge them into one large sorted list.
//For example, given these two lists:
//Input
//  Array_1 = [5, 10, 15]
//  Array_2 = [3, 8, 9]
//Output
//  Sorted Array = [3, 5, 8, 9, 10, 15]

#include <stdio.h>


int solve();
void swap(int* a, int* b);
int partition(int arr[], int low, int high);
void quicksort(int arr[], int low, int high);

int main(void){
    
    solve();
    return 0;

}

int solve(){
    int count_of_lst1,count_of_lst2, lenght_of_final;
    int numbers1[10],numbers2[10];
    printf("write count of elements in your first array (Max 10):\t");
    scanf("%d",&count_of_lst1);
    printf("write count of elements in your second array (Max 10):\t");
    scanf("%d",&count_of_lst2);
    printf("Array_1--> Enter %d your elements:\t", count_of_lst1);
    for (int i = 0; i < count_of_lst1; i++)
    {
        scanf("%d",&numbers1[i]);
    }
    printf("Array_2 --> Enter %d your elements:\t", count_of_lst2);
    for (int i = 0; i < count_of_lst2; i++)
    {
        scanf("%d",&numbers2[i]);
    }
    lenght_of_final=count_of_lst1+count_of_lst2;
    int final[lenght_of_final];

    for (int i = 0; i < count_of_lst1; i++)
    {
        final[i]=numbers1[i];
        
    }
    for (int i = 0; i < lenght_of_final; i++)
    {
        final[i+count_of_lst1]=numbers2[i];
    }
    printf("\nUnsorted Array_1 + Array_2: ");
    for (int i = 0; i < lenght_of_final; i++)
    {
        printf(" %d ",final[i]);
    }
    
    quicksort(final,0, lenght_of_final-1);
    printf("\nS2orted Array_1 + Array_2: ");
    for (int i = 0; i < lenght_of_final; i++)
    {
        printf(" %d ", final[i]);
    }
    putchar('\n');
    
}

void swap(int* a, int* b){

    int t= *a;
    *a=*b;
    *b=t;

}
int partition(int arr[], int low, int high){

    int pivot=arr[high];
    int i=(low-1);
    for (int j = low; j <= high-1; j++)
    {
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
    
}

void quicksort(int arr[], int low, int high){

    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr, pi+1,high);
    }
    
}


#include<stdio.h>

void findstats(int *arr,int size,int *minimum,int *maximum,double *average){
    for(int i=0;i<size;i++){
        if(*maximum<arr[i]){
            *maximum=arr[i];
        }
        if(*minimum>arr[i]){
            *minimum=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        *average+=arr[i];
    }
    *average=*average/size;
}

void print(int *arr,int size){
    printf("Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int minimum = arr[0];
    int maximum = arr[0];
    double average = 0;
    findstats(arr,size,&minimum,&maximum,&average);
    print(arr,size);
    printf("Minimum: %d\n", minimum);
    printf("Maximum: %d\n", maximum);
    printf("Average: %.1f\n", average);
    return 0;
}
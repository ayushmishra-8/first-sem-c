#include<limits.h>
#include<stdio.h>
int main(){
    int arr[5]={3,4,5,6,9};
    int largest = INT_MIN ;
    for(int i = 0 ; i<5 ; i++){
            if(largest<arr[i])
            {
                    largest = arr[i];
            }
    }
    printf("%d", largest);
}
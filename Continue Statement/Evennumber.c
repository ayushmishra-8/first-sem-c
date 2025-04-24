//Using continue statement to prinnt even number 1-100
//CONTINUE STATEMENT IS USE TO SKIP ROUND.
#include<stdio.h>
int main(){
 for (int i = 1 ; i<=100; i++){
    if(i%2!=0){
        continue;
    }
    printf("%d \n", i);
 }
 return 0 ;
}
//DONE
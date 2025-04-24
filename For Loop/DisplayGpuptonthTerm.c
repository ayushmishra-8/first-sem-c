//DISPLAY GP 100,50,25,... print upto nth term .....
#include<stdio.h>
int main(){
    int n ;
    printf("Enter nth term : ");
    scanf("%d",&n);
    float a = 100 ;
    for(int i = 1; i<=n ; i++){
        printf("%f \n",a );
        a = a/2 ;
    }
    return 0 ;
}
//DONE
#include <stdio.h>
int add(int a, int b){
    return a+b ;
}
int sub(int a, int b){
    return a-b;
}
int multi(int a, int b){
    return a*b ;
}
float divide(float a , float b ){
    return a/b ;
}

int main()
{
    int a , b ;
    printf("Enter value of a and b : ");
    scanf("%d%d", &a,&b);
    int addd = add(a,b);
    printf("Addition is :%d \n",addd);

     int subb = sub(a,b);
    printf("Subtraction is %d : \n",subb);

     int multii = multi(a,b);
    printf("Multiplication is :%d \n",multii);

    float div = divide(a,b);
    printf("Diviion is : %f \n",div);
    // float c = a/b ;
    // printf("%f",c);
    return 0 ;
    
}
//done

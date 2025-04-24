#include <stdio.h>
int add(int a, int b)
{
    int c = a + b;
    printf("Addition is : %d", c);
    return 0;
}
int main()
{
    
    add(10, 20);

    return 0;
}
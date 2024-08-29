#include<stdio.h>
int main()
{
int a, b, c;

printf("Enter number: ");
scanf("%d %d %d", &a, &b, &c);

if(a>b){
    if(a>c)
        printf("Large Number is %d", a);
    else
        printf("Large Number is %d", c);
}
else{
    if(b>c)
        printf("Large Number is %d", b);
    else
        printf("Large Number is %d", c);
}

    return 0;
}

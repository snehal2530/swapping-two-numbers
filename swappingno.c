
 #include<stdio.h>
int main()
{
 int x, y;
 printf("Enter the value of x, y?");
 scanf("%d %d", &x, &y);
 printf("Before swapping two numbers: %d %d\n" ,x,y);
 //swapping//
 x= x+y;
 y=x-y;
 x=x-y;
 printf("After swapping two numbers:%d %d", x,y);
 return 0;
 }

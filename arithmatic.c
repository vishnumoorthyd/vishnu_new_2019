#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c,d,e,f;
    clrscr();
    printf("Enter Two Values :");
    scanf("%d%d",&a,&b);
    sum(a,b);
    mult(a,b);
    div(a,b);
    getch();
}
    sum(int x,int y)
      {
            int z;
            z=x+y;
            printf("Addtion : %d\n",z);
            return 0;
      }
    mult(int x,int y)
     {
            int z;
            z=x*y;
            printf("Multiply : %d\n",z);
            return 0;
      }
    div(int x,int y)
     {
            int z;
            z=x/y;
            printf("Div : %d\n",z);
            return 0;
      }


#include <stdio.h>
#include <stdlib.h>
int* sortfunc(int *ptr1);
int main()

{
    int t,i,j;
    int *ptr=malloc(5*sizeof(int));
    int *c;
    *ptr={3,2,5,1,7);
    c=sortfunc(ptr);
    for(i=0;i<5;i++)
    {
        printf("%d ",*(c+i));
    }
    return 0;
}
int *sortfunc(int *ptr1)
{
    int i,j,t;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(*(ptr1+i)< *(ptr1+j))
            {
                t=*(ptr1+i);
                *(ptr1+i)= *(ptr1+j);
                *(ptr1+j)=t;
            }
        }
    }
 return ptr1;
}

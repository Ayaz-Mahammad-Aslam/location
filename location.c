/*write a program to show the location of a value using pointer*/
#include<stdio.h>
int main()
{
    void *vp;
    int i=10;
    char ch = 'A';
    float f = 3.123;

    vp = &i;
    printf("int value store in vp = %d in location %ld\n", *(int *)vp, ((int *)vp));
    return 0;
}
#include<stdio.h>
int main()
{
    long long int i;
    for(;;) {
    scanf("%lld",&i);
    if(i==0)    break;
    else if((i%11)==0)  printf("i is a multiple of 11.\n");
    else  printf("i is not a multiple of 11.\n");
    }

    return 0;
}

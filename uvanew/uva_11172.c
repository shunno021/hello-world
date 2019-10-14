#include<stdio.h>
int main()
{
    int i,j,k,l;

    scanf("%d",&i);

    for(j=1;j<=i;j++)   {
        scanf("%d %d",&k,&l);
        if(k>l) printf(">\n");
        else if(k<l)    printf("<\n");
        else if(k==l) printf("=\n");
    }
    return 0;
}

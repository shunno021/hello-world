#include<stdio.h>
int main()
{
    int h,h1,h2,m,m1,m2,t;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)  {
        if(h1==0&&m1==0&&h2==0&&m2==0)  break;
        if(((h1>h2)&&(m1>m2))||((h1==h2)&&(m1>m2)))   {
            h=(23-h1)+h2;
        }
        else    h=h2-h1;
        if(m1>m2)   m=(60-m1)+m2;
        else    m=m2-m1;
        t=(60*h)+m;
        printf("%d\n",t);
    }
    return 0;
}

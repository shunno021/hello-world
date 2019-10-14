#include<stdio.h>
int main()
{
    int bn,bp[10000],mh,i,j,which,dif[10000],f,k,low;

    while(scanf("%d",&bn)!=EOF) {
        for(i=0;i<bn;i++)  {
            scanf("%d",&bp[i]);
        }
        scanf("%d",&mh);

        f=0;
        for(j=0;j<bn;j++)   {
            which=bp[j]+bp[j+1];
            if(mh==which)   {
                if(bp[j]>bp[j+1])
                    dif[f]=bp[j]-bp[j+1];
                else dif[f]=bp[j+1]-bp[j];
                f++;
            }
        }
        low=dif[0];
        for(k=0;k<f;k++)    {
            if(dif[k]<low) low=dif[k];
        }
        printf("%d",low);
    }
    return 0;
}

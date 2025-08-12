#include <stdio.h>
int main(){
    int n1;scanf("%d",&n1);
    int p1[n1],i;for(i=0;i<n1;i++)scanf("%d",&p1[i]);
    int n2;scanf("%d",&n2);
    int p2[n2];for(i=0;i<n2;i++)scanf("%d",&p2[i]);
    int m=n1>n2?n1:n2,res[m];
    for(i=0;i<m;i++)res[i]=0;
    for(i=0;i<n1;i++)res[m-n1+i]+=p1[i];
    for(i=0;i<n2;i++)res[m-n2+i]+=p2[i];
    for(i=0;i<m;i++)printf("%d ",res[i]);
}

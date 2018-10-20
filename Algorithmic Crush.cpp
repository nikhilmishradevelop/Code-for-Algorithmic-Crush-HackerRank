#include <stdio.h>
#include<limits.h>
#include <stdlib.h>

int main() {
long n,q,temp=INT_MIN,k;
int a,b,*p,i,j;
    scanf("%ld%ld",&n,&q);
    p=(int *)calloc(n,sizeof(int));
    for(i=0; i < n; i++)
    {
        p[i] = 0;
    }
 

     for(i=0;i<q;i++)
     {
         scanf("%d%d%d",&a,&b,&k);
         
    for(j=a-1;j<b;j++)
    {
        p[j]+=k;
        if(p[j]>=temp)
            temp=p[j];
        
    }
     }    
        

free(p);

    printf("%ld Hello",temp);
    
    
    return 0;
}

/*Author Ankit Satyawali
Date:- 8 September 2019
Problem Name :- Many numbers
*/
#include<stdio.h>
#define lli long long int
int main() {
	lli L,M,N,R,K,j,l,err,A[100000];
	j=0;
	err=0;
	scanf("%lld %lld",&N,&M);
	scanf("%lld %lld",&L,&R);
	scanf("%lld",&K);
	l=N%M;
    for(lli i=L;i<=R;i++)
    {
        if(N%i==l && i!=M)
        {
            A[j]=i;
            j++;
        }
        if(j>K)
        {
            err=1;
            break;
        }
    }
    
    if(err==1)
    {
        printf("-1");
    }
    else
    {
        printf("%lld \n",j);
        for(l=0;l<j;l++)
        {
            printf("%lld ",A[l]);
        }
    }
    return 0;
}


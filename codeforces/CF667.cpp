#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,ai,sum1=0,sum2=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
      scanf("%d\n",&ai );
        (ai<=h)?sum1+=1:sum2+=2;
    }
    printf("%d\n",sum1+sum2);
    return 0;
    
}

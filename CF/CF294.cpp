#include<bits/stdc++.h>
using namespace std;
int n,a[200],m,x,y;
int main(){
  scanf("%d",&n);
  for(int i=1 ; i<=n ; i++)
  scanf("%d",&a[i]);
  scanf("%d",&m);
  for(int i=0 ; i<m ;i++){
    scanf("%d %d",&x,&y);
    a[x+1]+=a[x]-y;
    a[x-1]+=y-1;
    a[x]=0;
  }
  for(int i=1 ; i<=n ; i++)
  printf("%d\n",a[i]);

}

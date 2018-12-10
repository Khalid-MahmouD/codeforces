#include<bits/stdc++.h>
using namespace std;
int mx,n,a,b,ans,A[1005];
int main(){
  scanf("%d\n",&n);
  for(int i=0 ;i<n ;i++){
      scanf("%d",&A[i]);
      ans+=A[i];
  }
int x=0,y=n-1,i=0;
while(x<=y){
    if(A[x]>A[y]){
        mx=A[x];
        x++;
    }
    else{
    mx=A[y];
    y--;
    }
    (i%2)?a+=mx:b+=mx;
    i++;
}
  printf("%d %d\n",b,a);
}

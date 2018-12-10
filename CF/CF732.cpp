#include<bits/stdc++.h>
using namespace std;
int k,r,i=1;
int main(){
  scanf("%d%d",&k,&r);
  while(i<1000000){
    if((i*k)%10 == 0 || (i*k-r)%10==0){
      cout<<i<<endl;
      break;
      }
      i++;
    }

}

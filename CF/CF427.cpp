#include <bits/stdc++.h>
using namespace std;
int n,a,ans,sum;
int main(){
  scanf("%d\n",&n);
  for(int i=0 ; i<n ;i++){
    scanf("%d\n",&a);
    if(a == -1){
      if(sum > 0)sum--;
      else ans++;
    }
    else{
      sum+=a;
    }
  }
  printf("%d\n",ans);
}

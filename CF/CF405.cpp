#include<bits/stdc++.h>
using namespace std;
int n,a[105];
int main(){
  scanf("%d\n",&n);
  for(int i=0 ; i<n ;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n;i++)cout<<a[i]<<" ";
}

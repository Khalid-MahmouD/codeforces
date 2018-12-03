#include<bits/stdc++.h>
using namespace std;
int x,y;
int main(){
  for(int i =0 ; i<5 ; i++)
  for(int j =0 ; j<5 ; j++){
    int a;
    cin>>a;
    if(a==1) {x=i,y=j;break;}
  }
  // cout<< x <<" "<< y <<endl;
  printf("%d\n",(abs(y-2)+abs(x-2)));
  return 0;
}

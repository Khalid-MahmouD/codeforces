#include <bits/stdc++.h>
using namespace std;
int a,b,temp;
int main(){
  scanf("%d %d\n",&a ,&b);
    while(a <= b){
      a*=3;b*=2;
      temp++;
    }
    printf("%d\n",temp);
  }

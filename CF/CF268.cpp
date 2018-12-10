#include<bits/stdc++.h>
using namespace std;
vector<pair< int , int > >p;
int n,c;
int main(){
  scanf("%d",&n);
  for(int i=0 ; i<n ;i++){
    int a,b;
    scanf("%d%d",&a,&b);
    p.push_back(make_pair(a,b));
  }
  for(int i=0 ; i<n ;i++)
  for(int j=0 ; j<n ;j++)
  if(p[i].first == p[j].second)c++;
  printf("%d\n",c);
}

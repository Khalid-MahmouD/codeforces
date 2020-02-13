/*
   URL : http://codeforces.com/contest/558/problem/A
*/
#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;
const int maxn=100;
int n;
vector<pair<int,int> > vp,vn;
int main()
{
    while (~scanf("%d",&n))
    {
        vp.clear();
        vn.clear();
        for (int i=0;i<n;i++)
        {
            int pos,val;
            scanf("%d%d",&pos,&val);
            if (pos<0) vn.push_back(make_pair(-pos,val));
            else vp.push_back(make_pair(pos,val));
        }
        sort(vn.begin(),vn.end());
        sort(vp.begin(),vp.end());
        int m=min(vn.size(),vp.size())+1;
        int ans=0;
        for (int i=0;i<m&&i<vn.size();i++) ans+=vn[i].second;
        for (int i=0;i<m&&i<vp.size();i++) ans+=vp[i].second;
        printf("%d\n",ans);
    }
    return 0;
}
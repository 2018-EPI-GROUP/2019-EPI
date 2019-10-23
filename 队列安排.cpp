#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int F[300000];
int S[300000];
int G[300000];
int main()
{
  int n; 
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
  	F[i]=0;S[i]=0;G[i]=0;
  }
  for(int i=2;i<=n;i++)
  {
  	int x,y;
    scanf("%d%d",&x,&y);
    if(y==0)
    {
      if(F[x]!=0)
	  {
	     F[i]=F[x];
	     S[F[x]]=i;
		 F[x]=i;
		 S[i]=x;
	  } 
	  if(F[x]==0)
	  {
	    F[x]=i;
	    S[i]=x;
	  }
    }
    if(y==1)
    {
      if(S[x]!=0)
	  {
	  	S[i]=S[x];
	  	F[S[x]]=i;
	  	S[x]=i;
	  	F[i]=x;
	  }
	  if(S[x]==0)
      {
        S[x]=i;
        F[i]=x;
	  }
	}
  }
  int m,sum=0;
  scanf("%d",&m);
  for(int i=1;i<=m;i++)
  {
    int del;
    scanf("%d",&del);
    if(G[del]==1)continue;
    G[del]=1;
    sum++;
    F[S[del]]=F[del];
    S[F[del]]=S[del];
  }
  int fi=1;
  while(1)
  {
  	if(F[fi]==0)break;
  	fi=F[fi];
  }
  for(int i=1;i<=n-sum;i++)
  {
  	printf("%d ",fi);
  	fi=S[fi];
  }
  return 0;
} 
//试试删去第一个和最后一个试试 

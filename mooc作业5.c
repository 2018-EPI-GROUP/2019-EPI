#include <stdio.h>
int main()
{
int i,j,k;
for(i=0;i<=9;i++)//??0?9??
{
for(j=0;j<=12;j++)//??0?12??
{
for(k=0;k<=36;k++)//??0?36??
{
if((i+j+k==36)&&(4*i+3*j+0.5*k==36)) {
printf("男%d人,女%d人,小孩%d人",i,j,k);
}
}
}
}
return 0;
}	

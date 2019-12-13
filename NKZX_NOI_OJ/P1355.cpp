#include<cstdio>
main()
{
char i[4][8]={"apples","pears","oranges","grapes"};
float a[5]={0,3,2.5,4.1,10.2};
int t;
scanf("%d",&t);
for(int j=0;j<4;j++)
{
printf("[%d]%s\n",j+1,i[j]);
}
if(t>0&&t<5)printf("Price=%.1f",a[t]);
else puts("Price=0");
return 0;
}

#include<cstdio>
#include<algorithm>
struct a{
    int year,month;
    char name[50],sex[10];
}s[100];
int cmp(a p1,a p2){
    if(p1.year>p2.year||(p1.year==p2.year&&p2.month<p1.month)) return 1;
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s %s %d %d",s[i].name,s[i].sex,&s[i].year,&s[i].month);
    std::sort(s,s+n,cmp);
    for(int i=0;i<n;i++)
        printf("%s %s %d %d\n",s[i].name,s[i].sex,s[i].year,s[i].month);
    return 0;
}

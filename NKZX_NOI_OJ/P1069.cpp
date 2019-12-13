#include<cstdio>
struct person{
    short grade,mark;
}stu[200];
bool compare(int i1,int i2){
    if(stu[i1].mark<stu[i2].mark)
        return true;
    else if(stu[i1].mark==stu[i2].mark && stu[i1].grade>stu[i2].grade)
        return true;
    else
        return false;
}
int main(){
    short p[7]={};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%hd%hd",&stu[i].mark,&stu[i].grade);
    for(int i=0;i<n;i++){
        bool f=1;
        for(int v=0;v<n-1;v++){
            if(compare(v,v+1)){
                person tmp = stu[v];
                stu[v] = stu[v+1];
                stu[v+1] = tmp;
                f=0;
            }
        }
        if(f) break;
    }
    for(int i=0;i<n;i++){
        int count = 0;
        for(int x=0;x<stu[i].grade;x++)
            count += p[x];
        printf("%d\n",count);
        p[stu[i].grade]++;
    }
    return 0;
}

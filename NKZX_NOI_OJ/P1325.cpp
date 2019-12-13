#include<cstdio>
 
struct Student{
    char id[21],name[41],sex[3];
    int age,mark;
    Student *previous,*next;
};
 
Student *p = NULL;
 
void initialize(){
    p = new Student;
    p->previous = NULL;
}
 
void append(Student *stu){
    p->next = stu;
    stu->previous = p;
    p = stu;
}
 
void print(){
    while(p->previous != NULL){
        printf("%s %s %s %d %d\n",p->id,p->name,p->sex,p->age,p->mark);
        p = p->previous;
    }
}
 
int main(){
    initialize();
    while(true){
        Student *stu = new Student;
        scanf("%s",stu->id);
        if(stu->id[0]=='e'&&stu->id[1]=='n'&&stu->id[2]=='d'&&stu->id[3]=='\0'){
            break;
        }
        scanf("%s %s %d %d",stu->name,stu->sex,&(stu->age),&(stu->mark));
        append(stu);
    }
    print();
    return 0;
} 

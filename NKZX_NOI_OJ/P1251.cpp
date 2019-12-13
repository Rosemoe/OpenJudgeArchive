#include<cstdio>
struct Set{
    bool value[26];
    void clear(){
        for(int i=0;i<26;i++) value[i]=0;
    }
    void add(){
        char buffer[26],i=0;
        scanf("%s",buffer);
        while(buffer[i]!='\0')
            value[buffer[i++]-'a'] = 1;
    }
    void print(){
        for(int i=0;i<26;i++) if(value[i]) putchar('a'+i);
        putchar('\n');
    }
    Set operator +(const Set t)const{
        Set n;
        n.clear();
        for(int i=0;i<26;i++)
            if(value[i]||t.value[i]) n.value[i]=1;
        return n;
    }
    Set operator *(const Set t)const{
        Set n;
        n.clear();
        for(int i=0;i<26;i++)
            if(value[i]&&t.value[i]) n.value[i]=1;
        return n;
    } 
    Set operator -(const Set t)const{
        Set n;
        n.clear();
        for(int i=0;i<26;i++)
            if(value[i]&&!t.value[i]) n.value[i]=1;
        return n;
    }
}a,b;
int main(){
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++){
        a.clear();a.add();getchar();char op=getchar();getchar();b.clear();b.add();
        switch(op){
            case '+':(a+b).print();break;
            case '*':(a*b).print();break;
            case '-':(a-b).print();break;
        }
    }
    return 0;
} 

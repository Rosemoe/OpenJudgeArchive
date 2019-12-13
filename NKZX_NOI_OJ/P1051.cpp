#include<cstdio>
int main(){
    char content[101];
    scanf("%s",content);
    int current = -1,index=0,max=0;
    bool loop = true;
    while(loop){
        char c = content[index];
        if(c == '\0'){
            loop=false;
            c='A';
        }
        if(c == 'A' || c == 'E'||c=='I'||c=='O'||c=='U'||c=='Y'){
            int newVal = index - current;
            if(newVal > max){
                max = newVal;
            }
            current = index;
        }
        index++;
    }
    printf("%d",max);
    return 0;
}

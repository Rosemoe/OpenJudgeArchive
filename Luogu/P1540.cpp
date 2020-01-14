#include<cstdio>
int mem[101],max,ct;
bool find(int word){
	for(int i = 0;i < ct;i++){
		if(word == mem[i]){
			return 1;
		}
	}
	return 0;
}
void add(int word){
	if(ct < max){
		mem[ct++] = word;
	}else{
		for(int i = 0;i < ct - 1;i++){
			mem[i] = mem[i + 1];
		}
		mem[ct - 1] = word;
	}
}
int main() {
    int n,c,s=0;
    scanf("%d%d",&max,&n);
    for(int i = 0;i < n;i++){
    	scanf("%d",&c);
    	if(!find(c)){
    		s++;
    		add(c);
		}
	}
	printf("%d",s);
    return 0;
}

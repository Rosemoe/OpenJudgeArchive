#include <cstdio>
int stack[1010];
int main(){
    int n,target,maxIn = 1,top = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&target);
        for(;maxIn <= target;maxIn++){
			stack[top++] = maxIn;
        }
        if(top != 0 && stack[top - 1] == target){
			top--;
        }else{
			puts("Impossible");
			return 0;
        }
    }
    puts("Possible");
    return 0;
} 

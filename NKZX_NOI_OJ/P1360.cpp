#include<cstdio>
int main(){
    int nums[10] = {};
    for(int i = 0;i < 10;i++){
        char c = getchar();
        if(c == '-'){
            i--;
            continue;
        }
        if(c == 'X') c = '9' + 1;
        nums[i] = c - '0';
    }
    int sum = 0;
    for(int i = 0;i < 9;i++){
        sum += nums[i] * (i + 1);
    }
    if(sum % 11 == nums[9]){
        puts("Right");
    }else{
        nums[9] = sum % 11;
        for(int i = 0;i < 10;i++){
            if(i == 1 || i == 4 || i == 9){
                putchar('-');
            }
            if(nums[i] == 10){
                putchar('X');
            }else{
                putchar('0' + nums[i]);
            }
        }
    }
    return 0;
}

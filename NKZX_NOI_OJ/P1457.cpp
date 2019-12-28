#include<cstdio>
#include<stack>
using namespace std;
stack<double> nus;
stack<char> ops;
int main(){
    while(true) {
        int num;
        char c;
        if(scanf("%d",&num)!=1){
            break;
        }
        nus.push(num);
        bool s = false;
        while(true) {
            bool exit = false;
            c = '?';
            while(c != '+' && c != '-' && c != '*' && c != '/') {
                c = getchar();
                if(c != ' ' && c != '+' && c != '-' && c != '*' && c != '/'){
                    exit = true;
                    break;
                }
            }
            if(exit) {
                break;
            }
            s = true;
            scanf("%d",&num);
            switch(c) {
                case '+':
                case '-':
                    ops.push(c);
                    nus.push(num);
                    break;
                case '*':{
                    double top = nus.top();
                    nus.pop();
                    nus.push(top * num);
                    break;
                }
                case '/':{
                    double top = nus.top();
                    nus.pop();
                    nus.push(top / num);
                    break;
                }
            }
        }
        if(!s) {
            break;
        }
        double r = 0;
        while(!ops.empty()) {
            double top1 = nus.top();
            nus.pop();
            if(ops.top() == '+') {
                r = r + top1;
            }else{
                r = r - top1;
            }
            ops.pop();
        }
        r = r + nus.top();
        printf("%.2f\n",r);
        while(!nus.empty()) nus.pop();
    }
    return 0;
}

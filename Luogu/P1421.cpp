#include<iostream>
int main(){
    int a,b;
    std::cin >> a >> b;
    int c = a * 10 + b;
    std::cout << (c -(c % 19))/19;
    return 0;
}

#include<iostream>
#include<string>
#include<cstdio>
using std::cin;
using std::cout;
std::string pre,mid;
void f(int l1,int r1,int l2,int r2) {
    //cout << l1 << ' ' << r1 << ' ' << l2 << ' ' << r2 << ' ' << pre[l1] << std::endl;
    //getchar();
    int k = mid.find(pre[l1]);
    if(k > l2) {
        f(l1 + 1,l1 + k - l2,l2,k - 1);
    }
    if(k < r2) {
        f(l1 + k - l2 + 1,r1,k + 1,r2);
    }
    cout << pre[l1];
}
int main() {
    cin >> pre >> mid;
    f(0,pre.length() - 1,0,mid.length() - 1);
    return 0;
} 

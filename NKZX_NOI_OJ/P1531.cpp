#include<iostream>
#include<string>
using namespace std;
int main() {
    string a,b;
    cin >> a >> b;
    if((a + a).find(b) != -1 || (b + b).find(a) != -1) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}

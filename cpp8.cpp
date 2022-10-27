#include <iostream>

using namespace std;

28tech : print pattern

int main(){
    int n; cin >> n;
    int dem = 1;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout << dem << ' ';
            ++dem;
        }
        cout << endl;
    }
}
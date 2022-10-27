#include <iostream>

using namespace std;

28tech : print pattern

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int ktao = i;
        int kc = n - 1;
        for(int j = i; j <= i; j++){
            cout << ktao << ' ';
            ktao += kc;
            --kc;
        }
        cout << endl;
    }
}
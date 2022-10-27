#include <iostream>

using namespace std;

28tech : print pattern

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            //64 + i
            cout << (char)(64 + i) << ' ';
        }
        cout << endl;
    }
    return 0;
}
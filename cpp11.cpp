#include <iostream>

using namespace std;

28tech : print pattern

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        //in dau cach
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        //2i - 1
        for(int j = 1; j <= 2 * i -1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
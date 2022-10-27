#include <iostream>

using namespace std;

28tech : print pattern

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int ktao = i;
        for(int j = 1; j <= n; j++){
            cout << ktao << ' ';
            ++ktao;
        }
        cout << endl;
    }
}
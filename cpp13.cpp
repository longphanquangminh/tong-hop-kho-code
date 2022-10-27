#include <iostream>

using namespace std;

28tech : print pattern

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i % 2 == 1){
                cout << (char)(i + j - 2 + 'A');
            }
            else{
                cout << (char)(i + j - 2 + 'a');
            }
        }
        cout << endl;
    }
    return 0;
}
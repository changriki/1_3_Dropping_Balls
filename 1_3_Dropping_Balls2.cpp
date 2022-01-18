#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int j, depth, nball;
    cin >> j;
    while (j--){
        cin >> depth >> nball;
        nball--;
        int pos = 1;
        for (int i = 1; i < depth; i++){
            if (nball % 2) pos = pos * 2 + 1;
            else pos = pos * 2;
            nball >>= 1;
        }
        cout << pos << "\n";
    }
    return 0;
}

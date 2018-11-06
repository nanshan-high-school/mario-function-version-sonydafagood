#include <iostream>
using namespace std;
void mario (int);
int main() {
    int height;
    cout << "請輸入高度";
    cin >> height;
    mario(height);
  
}
void mario (int height) {
    for (int n=1; n< height+1; n++){
        for (int i=0; i< n; i++){
            cout<<"#";
    }
    cout<<"\n";
}
}

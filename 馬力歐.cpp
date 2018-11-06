#include <iostream>
using namespace std;
void mario (int);
void mario_2 (int);
int main() {
    int height;
    cout << "請輸入高度";
    cin >> height;
    mario(height);
    mario_2(height);

  
}
void mario (int height){
    for (int n=1; n< height+1; n++){
        for (int j=height+1; j>n; j--){
            cout<<" ";
        }
        for (int i=0; i<n; i++){
                cout<<"#";
            }
            cout<<"\n";
    }
}
void mario_2 (int height) {
    for (int n=1; n< height+1; n++){
        for (int i=0; i< n; i++){
            cout<<"#";
    }
   cout<<"\n";
}
}

#include <iostream>
using namespace std;
int main (){
    int n, a=1, b=1, c;
    cout <<"inserire un numero intero n" << endl;
    cin >> n;
    cout << a<< "\n"<< b << endl;
    c= a+b;
        while (c<=n){
        cout << c << endl;
        a=b;
        b=c;
        c= a+b;
    }
   return 0;
}

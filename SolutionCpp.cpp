#include <bits/stdc++.h>
using namespace std;

void fibonacci_seq(int n){
    int a = 0;
    int b=1;
    cout<<a;
    n--;
    while(n--){        
        int x = a+b;
        a = b;
        b=x;
        cout<<" , "<<a;
    }
}
int main(){
    int n;
    cin>>n;
    fibonacci_seq(n);
    return 0;
}
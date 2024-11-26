#include <iostream>
using namespace std;

bool del(int n){
    int tmp = n;
    while(n != 0){
        if(tmp % (n%10) == 0)
            return true;
        n /= 10;
    }
    return false;
}

void fun(){
    int n, k = 0;
    cin >> n;
    while(n != 0){
        if(del(n)) k++;
        cin >> n;
    }
    cout << k;
}

int main(){
    fun();
    return 0;
}

#include <iostream>
using namespace std;

void fun(){
    int n, sum = 0, k = 0;
    cin >> n;
    while(n != 0){
        if(n > sum && sum != 0){
            k++;
        }
        sum += n;
        cin >> n;
    }
    cout << k;
}

int main(){
    fun();
    return 0;
}

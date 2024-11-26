#include <iostream>
#include <vector>
using namespace std;

bool palindrom(int n){
    vector<int> nums = {};
    int copy_ = n;

    while(copy_!=0){
        nums.push_back(copy_%10);
        copy_/=10;
    }

    int len = nums.size();
    for(int i=0; i<(len/2); i++){
        if(nums[i]!=nums[len - 1 - i])
            return false;
    }
    return true;
}

int main(){
    int n, q_plus=0, q_minus=0;
    int mx_plus = -999, mx_minus = -999;

    cin >> n;
    while(n != 0){
        if(palindrom(n)){
            if(q_minus > mx_minus){
                mx_minus = q_minus;
                q_minus = 0;
            }
            q_plus+=1;
        }else{
            if(q_plus > mx_plus){
                mx_plus = q_plus;
                q_plus = 0;
            }
            q_minus+=1;
        }
        cin >> n;
    }
    if(q_plus > mx_plus) mx_plus = q_plus;
    if(q_minus > mx_minus) mx_minus = q_minus;

    cout << mx_plus << " " << mx_minus;
    return 0;
}

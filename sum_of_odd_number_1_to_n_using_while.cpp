#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int i=1;
    int tn;
    cin >> tn;
    while(i<=tn){
        if(i%2!=0){
            sum+=i;
        }
        i++;

    }
    cout << sum;

    return 0;
};
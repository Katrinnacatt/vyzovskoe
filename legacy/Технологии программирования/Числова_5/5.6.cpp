//331 Числова 5.6
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n=1000,i,sum,a;
    for (n;n<10000;n++){
        sum=0;
        a=n;
        for (i=1;i<=4;i++){
            sum=sum+a%10;
            a=a/10;
        }
        if (sum==15) cout << n << endl;
    }
    return 0;
}
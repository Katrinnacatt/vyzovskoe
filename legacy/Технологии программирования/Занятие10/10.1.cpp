//331 Числова 10.1
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int i, A[12];
    
    ifstream F ("1.txt");
    if (!F) cout <<"Error";
    
    for (i=0; i<12; i++) F>>A[i];
    
    F.close();
    
    for (i=0; i<12; i++) cout << A[i]<< "\t";
    
    return 0;
}



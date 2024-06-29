#include <iostream> 
using namespace std;

void Yes ( ) { 
    cout << "\nGood :) !!!"; 
} 
void No ( ) { 
    cout << "\nBad :("; 
} 
void Err ( ) { 
    cout << "\nError"; 
}
void Menu (char Z) {
switch (Z) {
    case 'Y': Yes ( ); break; 
    case 'y': Yes ( ); break; 
    case 'N': No ( ); break; 
    case 'n': No ( ); break; 
    default: Err ( ); break;
    } 
}

int main( ) {
    setlocale(LC_ALL, "Russian");
    char z;
    cout << " \nВы выполнили работу? (Y/N)"; 
    cin>>z;
    Menu (z);
    cout << "\n\nEND" << endl; return 0;
}






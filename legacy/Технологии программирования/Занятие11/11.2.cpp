//331 Числова 11.2
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;
int Sl()
{
    int k; 
    k= rand ( )%6; 
    return k;
}
int Play ()
{
    int n, y;
    cout << "\nВаше число = "; 
    cin >>n;
    y=Sl();
    if (y==n) {
        cout << "\n\nВы выиграли!\n Игра окончена\n";
    return 0;}
    else {
        cout <<"\nНеправильно, мое число ="<<y;
    return 1;}
}

int main()
{
    int P; 
    char g;
    srand (time (0));
    cout <<"\nПривет!!";
    cout <<"\nУгадай число в интервале [0...5]\n";
    m: P=Play();
    if (P==1) { 
        cout <<"\n\nЕще играем? (Y/N) ";
        cin >> g;
        if (g=='y' || g=='Y') goto m;
        else cout <<"До свидания! \n";
        }
    return 0;
}
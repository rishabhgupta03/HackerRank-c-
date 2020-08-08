#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int d; long l; char c; float f; double dou;
    cin >> d >> l >> c >> f >> dou;
    cout<<d<<"\n"<<l<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<f<<endl; 
    cout<<fixed<<setprecision(9)<<dou;
    return 0;
}

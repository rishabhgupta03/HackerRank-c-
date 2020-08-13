#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven","eight", "nine"};
    for(;a<=b;a++){
        if(a<=9){
           cout<<arr[a]<<endl; 
        }
        else{
            if(a%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}

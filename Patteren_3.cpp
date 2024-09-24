#include<iostream>
//printing the below  patteren.
//*        *
//**      **
//***    *** 
//****  ****
//**********
using namespace std;
void print(int n){
    for(int i = 1; i<=n ;i++){
        for(int k = 1; k<=i ; k++)
            cout<<"*";
        for(int j = 1; j<=2*n-2*i; j++)
            cout<<" ";
        for(int l = 1; l<=i ; l++)
            cout<<"*";
        cout<<endl;
    }
}
int main(){
    int n = 5;
    print(5);
    return 0;
}

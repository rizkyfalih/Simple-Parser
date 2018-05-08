#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "list.h"

using namespace std;

int main(){
    cout<<" String Lexic dan Token"<<endl;
    cout<<"======================================="<<endl;
    cout<<"p,q,r,s not and or xor if then iff ( ) "<<endl;
    cout<<"   1     2   3   4  5   6   7   8  9 10"<<endl;
    cout<<"======================================="<<endl;
    cout<<endl;
    cout<<"Inputan: ";
    string inputan;
    string hasilCekValid;
    char input[100];
    int i=0;
    bool status = true;
    getline (cin, inputan);
    strcpy(input, inputan.c_str ());
    cout<<"Output : ";
    while ((i<strlen(input)&&(status == true))){

        if(input[i] == 'a'){
            And (input,i,status);
        }
        else if(input[i]=='x'){
            Xor (input,i,status);
        }
        else if(input[i]=='i'){
            If(input,i,status);
        }
        else if ((input[i]=='p') || (input[i]=='q') || (input[i]=='r') ||
                 (input[i]=='s')){
            proposisi (input,i, status);
        }
        else if (input[i]=='n'){
            Not(input, i, status);
        }
        else if (input[i]=='('){
            kurungBuka(input, i, status);
        }
        else if (input[i]==')'){
            kurungTutup(input, i, status);
        }
        else if (input[i]=='t'){
            Then(input, i, status);
        }
        else if (input[i]=='o'){
            Or(input, i, status);
        }

        else{
            status = false;
        }

        if(status==false){
            hasilCekValid = "error";
            cout<<hasilCekValid;
        };
    };
    printInfo();

    if(hasilCekValid != "error"){
        if(ValidasiLexic()){
            cout << "\nVALID";
        }else{
            cout << "\nTIDAK VALID";
            }
    }else{
        cout << "\nSTRING ERROR";
    }
    cout<<endl;

    getch();
    return 0;
}

/*
Nama    : Jovan Ade Prayoga
NIM     : A11.2021.13363
Responsi
*/

#include <iostream>
#include <stdlib.h>
#define MAX_STACK 30
using namespace std;

void push();
void pop();
void print();
void olah();
bool isfull();
bool isempty();
char tumpuk[MAX_STACK]{'H','A','*','*','*','L','*','O','A','P','*','*','*','A','*','K','A','B','*','A','*','*','*','R'};
char baru[MAX_STACK]{};
int top=-1;
char isi;

int main(){
    cout<<"Sebelum Diproses : ";
    for(int i=0;i<MAX_STACK;i++){
        cout<<tumpuk[i];
    }
    cout<<"\n\nSetelah Diproses : ";
    olah();
    for(int i=0;i<MAX_STACK;i++){
        cout<<baru[i];
    }
    cout<<"\n";
}

void olah(){
    for(int i=0;i<MAX_STACK;i++){
        if(tumpuk[i]=='*'){
        }
        else{
            isi=tumpuk[i];
            push();
        }
    }
}

void push(){
    if(!isfull()){
        top++;
        baru[top]=isi;
    }
    else
        cout<<"\nStack Penuh!\n";
}

void pop(){
}

void print(){
    for(int i=0;i<=top;i++){
        cout<<tumpuk[i]<<", ";
    }
    cout<<"\n";
}

bool isfull(){
    if(top==MAX_STACK-1)
        return true;
    else
        return false;
}

bool isempty(){
    if(top==-1)
        return true;
    else
        return false;
}


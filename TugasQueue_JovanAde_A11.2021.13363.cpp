/*
Nama    : Jovan Ade Prayoga
NIM     : A11.2021.13363
Tugas Queue
*/




#include <iostream>
#define MAX 8
using namespace std;

struct Antrian {
    int data[MAX];
    int head;
    int tail;
};

Antrian antre;

void create(){
    antre.head = antre.tail = -1;
}

bool isEmpty(){
    if(antre.tail == -1){
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(antre.tail == MAX ){ //kalau max - 1 jadi nya hanya bisa memasukan 7 bilangan.
            return true;
    }else {
        return false;
    }
}

//cek apakah queue penuh, jika penuh tampilkan tulisan queue penuh. jika tidak, enqueue ke queue

void enqueue(int data){
    if(isFull()){
        cout<<"Antrian Sudah Penuh !!!\n";
    }else{
        if(isEmpty()){
            //kalau kosong ketika head dan tail=0
            antre.head = antre.tail = 0;
            antre.data[antre.tail] = data;
            antre.head++;
            antre.tail++;
        }else{
            //kalo tidak kosong
            antre.data[antre.tail] = data;
            //tambahkan tail karena head kan sudah 1
            antre.tail++;
            cout<<data<<" dimasukan kedalam antrian.\n\n";
        }
    }

}

//cek apakah queue kosong, jika iya tampilkan tulisan queue kosong. jika tidak, dequeue dari queue

int dequeu(){
    if(isEmpty()){
        cout<<"Antrian kosong";
    }else{
        int e = antre.data[antre.head];
        for(int i=0;i<antre.tail;i++){
            antre.data[i] = antre.data[i+1];
        }
        antre.tail--;
        return e;
    }


}

void tampil(){
    cout<<"\nData antrian : \n";
    if(isEmpty()){
        cout<<"Antrian Kosong\n";
    }else{
        for(int i = 0;i<MAX;i++){
            if(antre.data[i] == NULL){
                cout<<i+1<<". Data Kosong\n";
            }else{
                cout<<i+1<<". "<<antre.data[i]<<endl;
            }
        }
    }
    cout<<endl<<endl;
}


int main()
{
    int pilih,indata;
    //Pilih Program.
    pilihprogram:
    cout<<"Pilih Program\n\n";

    cout<<"1. Menambahkan data\n";
    cout<<"2. Menghapus data\n";
    cout<<"3. Menampilkan data\n";

    cout<<"\nMasukan Pilihan : \n\n";
    cin>>pilih;

    switch(pilih){
        case 1 : cout<<"Masukan data : ";
                 cin>>indata;
                 enqueue(indata);goto pilihprogram;
        break;

        case 2 : cout<<"Hapus data : \n";
                 dequeu();goto pilihprogram;
        break;

        case 3 : cout<<"Tampilkan data : \n";
                 tampil();goto pilihprogram;
        break;

        default :cout<<"TIDAK ADA PILIHAN";
        break;
    }


    return 0;
}

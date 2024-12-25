
//so ini adalah my recap after UAS yeayy
// im so bad about this i cant understand about this

#include <iostream>

//jadi kita akan mendefinisikan max stack 5
#define MAX_STACK 5
//this untuk inisiasi struct berupa mahasiswa
struct Pertama {
    int elemen[MAX_STACK];
    int top;
};

void createStack(Pertama &kedua) {
    kedua.top = -1;
}

bool empty(Pertama kedua) {
    return kedua.top == -1;
}

bool full(Pertama kedua) {
    return kedua.top == MAX_STACK-1;
}

void push(Pertama &kedua, int i) {
    if(full(kedua)) {
        std::cout << "Stack penuh. Tidak bisa menambah data! \n";
    }else {
        kedua.top++;
        kedua.elemen[kedua.top] = i;
        std::cout << "Data " << i << " ditambahkan dari stack\n";
    }
}

void pop(Pertama &kedua, int &i) {
    if(empty(kedua)) {
        std::cout << "Stack kosong. Tidak ada data untuk dihapus. \n";
    }else {
        i = kedua.elemen[kedua.top];
        kedua.top--;
        std::cout<<"data "<< i <<" telah dihapus dari stack\n";
    }
}

void menu() {
//    std::cout <<std:: endl;
    std::cout<<"Menu : " <<std::endl;
    std::cout<<"1. Push Data " <<std::endl;
    std::cout<<"2. Pop Data" <<std::endl;
    std::cout<<"3. Tampil Isi Stack" <<std::endl;
    std::cout<<"4. Kosongkan Stack" <<std::endl;
    std::cout<<"5. Keluar" <<std::endl;
    std::cout<<"Masukan pilihan [1..5] : ";
}

void display(Pertama kedua) {
    if(empty(kedua)){
        std::cout << "stack kosong \n";
    }else{
        std::cout << "Isi stack : ";
        for(int i =0; i <= kedua.top; i++) {
            std::cout << kedua.elemen[i];
        }
        std::cout << std::endl;
    }
}

void clear(Pertama &kedua) {
    kedua.top = -1;
    std::cout << "Stack telah dikosongkan. \n";
}

int main() {
    Pertama kedua;
    std::cout <<"For UAS" << std::endl;
    createStack(kedua);
    int pilihan,data;
    std::cout<<"Implementasi Stack dengan Array" <<std::endl;
    std::cout<<"===============================" <<std::endl;
    do {
        menu();
        std::cin>>pilihan;
        switch (pilihan) {
            case 1:
                std::cout << "Masukan data :  ";
                std::cin  >>data;
                push(kedua, data);
                break;
            case 2:
                pop(kedua,data);
                break;
            case 3:
                display(kedua);
                break;
            case 4:
                clear(kedua);
                break;
            case 5:
                std::cout<<"Program telah selesai \n";
                break;
            default:
                std::cout <<"pilihan tidak valid. try again. \n";
        }
    } while (pilihan !=5);

    return 0;
}
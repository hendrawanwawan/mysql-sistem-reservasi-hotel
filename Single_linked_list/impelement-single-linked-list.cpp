#include <iostream>


void menu() {
    std::cout << "Menu :\n";
    std::cout << "1. Buat Node Awal\n";
    std::cout << "2. Tambah Node\n";
    std::cout << "3. Hapus Node\n";
    std::cout << "4. Tampil Data\n";
    std::cout << "5. Keluar\n";
    std::cout << "Masukan pilihan [1...5] : ";
}

struct Node {
    int data;
    Node *next;
};

Node *n = NULL, *head=NULL, *tail=NULL, *x=NULL;

void buatNodeAwal(int i) {
    n = new Node;
    n->data = i;
    tail = n;
    head = n;
    tail -> next = NULL;
}

void tambahBelakang(int i) {
    n = new Node;
    n -> data = i;
    tail -> next = n;
    tail = n;
    tail -> next = NULL;
}

void tambahDepan(int i) {
    n = new Node;
    n -> data = i;
    n ->next = head;
    head = n;
}

void tambahTengah(int i, int j) {
    x = head;
    while( x->data !=j ) x = x -> next;
    n = new Node;
    n -> data = i;
    n -> next = x -> next;
    x -> next = n;
}

void hapusDepan() {
    x = head;
    head = head -> next;
    delete(x);
}

void hapusBelakang() {
    x = head;
    while ( x-> next !=tail ) x = x -> next;
    tail = x;
    delete ( x-> next );
    tail -> next = NULL;
}

void hapusTengah(int i) {
    Node *temp = NULL;
    x = head;
    while ( x-> data !=i) {
        temp = x;
        x = x->next;
    }
    temp -> next = x -> next;
    delete(x);
}

void tampilData() {
    x = head;
    std::cout << "Isi linked list : \n";
    while ( x!=NULL) {
        std::cout << x -> data << " ";
        x = x-> next;
    }
}

int main() {
    int pilihan, nilai, posisi;
    do {
        menu();
        std::cin>>pilihan;
        switch (pilihan) {
            case 1:
                if (head !=NULL) {
                    std::cout << "Node awal sudah dibuat.\n";

                } else {
                    std::cout << "Masukan nilai : ";
                    std::cin  >> nilai;
                    buatNodeAwal(nilai);
                    std::cout << "Node awal dengan nilai " << nilai << " berhasil dibuat. \n";
                }
                break;
            case 2:
                if (head == NULL) {
                    std::cout << "Node awal harus dibuat terlebih dahulu. \n";
                } else {
                    std::cout << "1. Tambah Node di Depan \n";
                    std::cout << "2. Tambah Node di Belakan \n";
                    std::cout << "3. Tambah Node di Tengah \n";
                    std::cout << "4. Batal  \n";
                    std::cout << "Masukan pilihan [1....4] : ";

//                std::cout << "Masukan pilihan : ";
                    std::cin  >>pilihan;
                    if( pilihan == 1 ) {
                        std::cout << "Masukan nilai : ";
                        std::cin >> nilai;
                        tambahDepan(nilai);
                        std::cout << "Node dengan nilai " << nilai << " berhasil ditambahkan di depan.\n";
                    } else if (pilihan == 2) {
                        std::cout << "Masukan nilai : ";
                        std::cin >> nilai;
                        tambahBelakang(nilai);
                        std::cout << "Node dengan nilai " << nilai << " berhasi ditambahkan di belakakng. \n";
                    } else if (pilihan == 3) {
                        std::cout << "Masukan nilai :  ";
                        std::cin >> nilai;
                        std::cout << "Masukan nilai node sebelumnya : ";
                        std::cin >> posisi;
                        tambahTengah(nilai, posisi);
                        std::cout << "Node dengan nilia " << nilai << " berhasil ditambahkan di tengah.\n";
                    }
                }

                break;
            case 3:
                if (head == NULL) {
                    std::cout << "Node awal harus dibuat terlebih dahulu \n";
                } else {
                    std::cout << "Pilihan : \n";
                    std::cout << "1. Hapus Node di Depan\n";
                    std::cout << "2. Hapus Node di Belakang\n";
                    std::cout << "3. Hapus Node di Tengah\n";
                    std::cout << "4. Hapus Node di Batal\n";
                    std::cout << "Masukan Pilihan [1...4] : ";
                    std::cin >> pilihan;
                    if (pilihan == 1) {
                        hapusDepan();
                        std::cout << "Node di depan berhasil dihapus. \n";
                    }else if (pilihan == 2) {
                        hapusBelakang();
                        std::cout << "Node di belakang berhasil dihapus. \n";
                    }else if (pilihan ==3) {
                        std::cout << "Mauskan nilai node yang ingin dihapus :";
                        std::cin >> nilai;
                        hapusTengah(nilai);
                        std::cout << "Node dengan nilai " << nilai << "berhasil dihapus. \n";
                    }
                }
                break;
            case 4:
                tampilData();
                break;
            case 5:
                std::cout << "Keluar dari program. \n";
                break;
            default:
                std::cout << "Piliahan tidak valid. \n";
        }
    } while (pilihan !=5);
    return 0;
}
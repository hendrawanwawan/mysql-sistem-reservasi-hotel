#include <iostream>
#define MAX_QUEUE 100
//queueu it FIFO its mean first in first out
//queue its have two part is about FRONT and REAR
struct Antrian{
    int elemen[MAX_QUEUE];
    int rear;
    int front;
    int jml;
};

void createQ(Antrian &q) {
    q.front = 0;
    q.rear = -1;
    q.jml = 0;
}

bool isFull(Antrian q) {
    return q.jml == MAX_QUEUE;
}

bool isEmpty(Antrian q) {
    return q.jml == 0;
}

void enQ(Antrian &q, int i ) {
    if(isFull(q)) {
        std::cout <<"Antrian penuh! Tidak dapat menambah elemen. \n";
        return;
    }
    q.rear++;
    q.jml++;
    q.elemen[q.rear] = i;
}

void deQ(Antrian &q, int &i) {
    if(isEmpty(q)) {
        std::cout << "Antrian kosong! Tidak ada elemen yang dapat dihapus.\n";
    return;
    }
    i = q.elemen[q.front];
    q.front++;
    q.jml--;
}

void display(Antrian q) {
    if(isEmpty(q)) {
        std::cout <<"queue kosong";
        return;
    }
    std::cout << "Isi antrian : ";
    for (int i = q.front; i <= q.rear; ++i) {
        std::cout <<q.elemen[i] <<" ";
    }
    std::cout << std::endl;
}

void peekQue(Antrian q) {
    if(isEmpty(q)) {
        std::cout << "Antrian kosong! Tidak ada elemen di depan. \n";
        return;
    }
    std::cout << "Elemen didepan antrian " << q.elemen[q.front] <<  std::endl;
}

void kosongkan(Antrian &q) {
    q.front = 0;
    q.rear = -1;
    q.jml = 0;
    std::cout <<"Antrian telah dikosongkan.\n"
}



int main() {
    Antrian q;
    createQ(q);

    int choice, data;

    do {
        std::cout << "\n=== Menu Antrian ===\n";
        std::cout << "1. Tambah Elemen (Enqueue)\n";
        std::cout << "2. hapus Elemen (Dequeue)\n";
        std::cout << "3. Tampilkan Isi Antrian\n";
        std::cout << "4. Lihat Elemen Depan (Peek)\n";
        std::cout << "5. Kosongkan queue\n";
        std::cout << "6. Keluar\n";
        std::cout << "Pilih Opsi : \n";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Masukan elemen : ";
                std::cin >> data;
                enQ(q, data);
                break;
            case 2:
                deQ(q, data);
                std::cout << "Elemen yang dihapus : " << data << std::endl;
                break;
            case 3:
                display(q);
                break;
            case 4:
                peekQue(q);
                break;
            case 5:
                kosongkan(q);

                break;
            case 6:
                std::cout << "Keluar dari Program. \n";
                break;

            default:
                std::cout << "Pilihan tidak valid. Coba lagi. \n";
        }
    } while (choice != 6);
    return 0;
}

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void inisialisasi();
void push();
void pop();

#define MAX_STACK 10
typedef struct STACK

{ int top;
char data[10][10];};
STACK tumpuk;

void inisialisasi()
{ tumpuk.top= -1;}

int IsFull() {
     if(tumpuk.top== MAX_STACK-1) return 1;

     else return 0;}

int IsEmpty() {
     if(tumpuk.top== -1) return 1;

     else return 0;}

void Push(char d[10]) {
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top],d); }

void Pop() {
    printf("Elemen terakhir stack sudah dihapus, yaitu : %s\n",tumpuk.data [tumpuk.top]);

    tumpuk.top--; }

 void TampilStack() {
     for(int i=tumpuk.top;i>=0;i--)
        {
             printf("Data : %s\n",tumpuk.data[i]);
    }
 }
 int main()
 {
     int pilihan;
     inisialisasi();
     char nama[10] ,posisi[20],no[20];
do{
 system("cls");
    printf("STACK MENGGUNAKAN LINKEDLIST\n");
    printf("1.Masukan Data Pemain\n");
    printf("2.Hapus Data Pemain\n");
    printf("3.Tampilkan\n");
    printf("4.Keluar\n");
    printf("Masukan pilihan (1-4) : ");
    printf("===================\n");
scanf("%d",&pilihan);

    switch(pilihan) {
    case 1:
        if(IsFull() != 1)
        {
            printf("No Punggung : ");
            scanf("%s",no);
        printf("Nama Pemain :");
                scanf("%s",nama);
            Push(nama);
        printf("Posisi Pemain : ");
                scanf("%s",posisi);
            Push(posisi);
        }
        else
            printf("\nSudah penuh, push gagal!\n");
        break;
    case 2:
        if(IsEmpty() != 1)
            Pop();
        else  printf("\nMasih kosong!\n");
         break;
    case 3:
             if(IsEmpty() != 1)
             TampilStack();
             else
                printf("\nStack kosong!\n");
               break;
                 }
        }
    while(pilihan!= 5);
    getch(); }

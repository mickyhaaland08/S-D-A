/* File        : stack.cpp */
/* Deskripsi   : Body ADT stack yang diimplementasikan dgn linked list */
/* Dibuat oleh : Ade Chandra Nugraha*/

#include "stack.h"
#include "boolean.h"

/**** Perubahan nilai komponen struktur ****/
void SetTop (Stack *S, Stack NewTop )
/* Memberi Nilai TOP yang baru dengan NewTop */
{
	*S = NewTop;
}

/*    PROTO TYPE    */
/**** Konstruktor/Kreator ****/
void CreateEmpty (Stack *S)
/* IS : S sembarang */
/* FS : Membuat sebuah stack S yang kosong */
/* Ciri stack kosong : TOP bernilai NULL */
{
	*S = NULL;
}

/**** Predikat untuk test keadaan KOLEKSI ****/
boolean IsEmpty (Stack S)
/* Mengirim true jika Stack Kosong */
{
	return (isEmpty(S));
}

/**** Menambahkan sebuah elemen ke Stack ****/
void Push (Stack *S, infotype X)
/* Menambahkan X sebagai elemen stack S */
/* IS : S mungkin kosong */
/* FS : X menjadi TOP yang baru */
{
	InsVFirst (&(*S),X);  // nama modul disesuaikan dengan pseudocode linked list pribadi
}

/**** Menghapus sebuah elemen Stack ****/
void Pop (Stack *S, infotype *X)
/* Menghapus X dari Stack S */
/* IS : S tidak mungkin kosong */
/* FS : X adalah nilai elemen TOP yang lama */
{
	DelVFirst(&(*S), &(*X)); // nama modul disesuaikan dengan pseudocode linked list pribadi
}

void DecimalToBinary(int num)
{
    Stack S;
    CreateEmpty(&S);
    
    if (num == 0) {
        printf("Bilangan biner: 0\n");
        return;
    }
    
    // Mengisi stack dengan sisa hasil bagi dari pembagian dengan 2
    while (num > 0)
    {
        Push(&S, num % 2);
        num /= 2;
    }
    
    printf("Bilangan biner: ");
    // Mengeluarkan nilai dari stack untuk mendapatkan urutan biner yang benar
    while (!IsEmpty(S))
    {
        int bit;
        Pop(&S, &bit);
        printf("%d", bit);
    }
    printf("\n");
}

#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED

#define first(L) L.first
#define last(L) L.last
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define lAnak(P) P->lAnak

using namespace std;

typedef string infotype;
typedef struct elmList_induk *address_induk;
typedef struct elmList_anak *address_anak;

// Struktur data untuk anak
struct elmList_anak {
    infotype info;
    address_anak next;
    address_anak prev;
};

struct ListAnak {
    address_anak first;
    address_anak last;
};

// Struktur data untuk induk
struct elmList_induk {
    infotype info;
    ListAnak lAnak;
    address_induk next;
    address_induk prev;
};

struct ListInduk {
    address_induk first;
    address_induk last;
};

// Deklarasi fungsi untuk List Anak
bool isEmptyAnak(ListAnak L);
void createListAnak(ListAnak &L);
address_anak createNewElmtAnak(infotype X);
void insertFirstAnak(ListAnak &L, address_anak P);
void insertLastAnak(ListAnak &L, address_anak P);
void deleteFirstAnak(ListAnak &L, address_anak &P);
void deleteLastAnak(ListAnak &L, address_anak &P);
void showAnak(ListAnak L);

// Deklarasi fungsi untuk List Induk
bool isEmptyInduk(ListInduk L);
void createListInduk(ListInduk &L);
address_induk createNewElmtInduk(infotype X);
void insertFirstInduk(ListInduk &L, address_induk P);
void insertLastInduk(ListInduk &L, address_induk P);
void deleteFirstInduk(ListInduk &L, address_induk &P);
void deleteLastInduk(ListInduk &L, address_induk &P);
void showInduk(ListInduk L);

#endif // MLL_H_INCLUDED

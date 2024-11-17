#include <iostream>
#include "MLL.h"

using namespace std;

// ================================== List Anak ==================================
bool isEmptyAnak(ListAnak L) {
    return first(L) == NULL;
}

void createListAnak(ListAnak &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address_anak createNewElmtAnak(infotype X) {
    address_anak P = new elmList_anak;
    if (P != NULL) {
        info(P) = X;
        next(P) = NULL;
        prev(P) = NULL;
    }
    return P;
}

void insertFirstAnak(ListAnak &L, address_anak P) {
    if (isEmptyAnak(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertLastAnak(ListAnak &L, address_anak P) {
    if (isEmptyAnak(L)) {
        insertFirstAnak(L, P);
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}

void deleteFirstAnak(ListAnak &L, address_anak &P) {
    if (!isEmptyAnak(L)) {
        P = first(L);
        if (first(L) == last(L)) {
            first(L) = NULL;
            last(L) = NULL;
        } else {
            first(L) = next(P);
            prev(first(L)) = NULL;
        }
        next(P) = NULL;
    }
}

void deleteLastAnak(ListAnak &L, address_anak &P) {
    if (!isEmptyAnak(L)) {
        P = last(L);
        if (first(L) == last(L)) {
            first(L) = NULL;
            last(L) = NULL;
        } else {
            last(L) = prev(P);
            next(last(L)) = NULL;
        }
        prev(P) = NULL;
    }
}

void showAnak(ListAnak L) {
    address_anak P = first(L);
    while (P != NULL) {
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
}

// ================================== List Induk ==================================
bool isEmptyInduk(ListInduk L) {
    return first(L) == NULL;
}

void createListInduk(ListInduk &L) {
    first(L) = NULL;
    last(L) = NULL;
}

address_induk createNewElmtInduk(infotype X) {
    address_induk P = new elmList_induk;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
    createListAnak(lAnak(P));
    return P;
}

void insertFirstInduk(ListInduk &L, address_induk P) {
    if (isEmptyInduk(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertLastInduk(ListInduk &L, address_induk P) {
    if (isEmptyInduk(L)) {
        insertFirstInduk(L, P);
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}

void deleteFirstInduk(ListInduk &L, address_induk &P) {
    if (!isEmptyInduk(L)) {
        P = first(L);
        if (first(L) == last(L)) {
            first(L) = NULL;
            last(L) = NULL;
        } else {
            first(L) = next(P);
            prev(first(L)) = NULL;
        }
        next(P) = NULL;
    }
}

void deleteLastInduk(ListInduk &L, address_induk &P) {
    if (!isEmptyInduk(L)) {
        P = last(L);
        if (first(L) == last(L)) {
            first(L) = NULL;
            last(L) = NULL;
        } else {
            last(L) = prev(P);
            next(last(L)) = NULL;
        }
        prev(P) = NULL;
    }
}

void showInduk(ListInduk L) {
    address_induk P = first(L);
    while (P != NULL) {
        cout << "Induk: " << info(P) << " -> Anak: ";
        showAnak(lAnak(P));
        P = next(P);
    }
}

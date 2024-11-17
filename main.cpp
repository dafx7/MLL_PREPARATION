#include <iostream>
#include "MLL.h"

using namespace std;

int main() {
    ListInduk listInduk;
    createListInduk(listInduk);

    // =================== Menambahkan Induk ===================
    cout << "=== Menambahkan Induk ===" << endl;
    address_induk induk1 = createNewElmtInduk("Ahmad");
    address_induk induk2 = createNewElmtInduk("Asmara");
    address_induk induk3 = createNewElmtInduk("Ajay");

    insertFirstInduk(listInduk, induk1);
    insertLastInduk(listInduk, induk2);
    insertLastInduk(listInduk, induk3);

    showInduk(listInduk);

    // =================== Menambahkan Anak ke Induk ===================
    cout << "\n=== Menambahkan Anak ke Induk ===" << endl;
    address_anak anak1 = createNewElmtAnak("Rendy");
    address_anak anak2 = createNewElmtAnak("Niko");
    address_anak anak3 = createNewElmtAnak("Fadhlan");

    insertFirstAnak(lAnak(induk1), anak1);
    insertLastAnak(lAnak(induk1), anak2);
    insertLastAnak(lAnak(induk1), anak3);

    address_anak anak4 = createNewElmtAnak("Rey");
    address_anak anak5 = createNewElmtAnak("YantoGemink");

    insertFirstAnak(lAnak(induk2), anak4);
    insertLastAnak(lAnak(induk2), anak5);

    showInduk(listInduk);

    // =================== Menghapus Anak dari Induk ===================
    cout << "\n=== Menghapus Anak dari Induk ===" << endl;
    address_anak deletedAnak;
    deleteFirstAnak(lAnak(induk1), deletedAnak);
    cout << "Anak yang dihapus dari Induk 1: " << info(deletedAnak) << endl;

    showInduk(listInduk);

    // =================== Menghapus Induk ===================
    cout << "\n=== Menghapus Induk ===" << endl;
    address_induk deletedInduk;
    deleteFirstInduk(listInduk, deletedInduk);
    cout << "Induk yang dihapus: " << info(deletedInduk) << endl;

    showInduk(listInduk);

    cout << "\n-Dapnek IF'23" << endl;

    return 0;
}

#include <stdio.h>

void pecel_lele() {
    int qty;
    printf("Masukkan jumlah pesanan Pecel Lele: ");
    scanf("%d", &qty);
    int total = qty * 15000;  // Harga Pecel Lele per porsi = Rp 15.000
    printf("Total harga Pecel Lele: Rp %d\n", total);
    printf("Terima kasih, pesanan segera di proses.\n");
}

void nasi_goreng() {
    int qty;
    printf("Masukkan jumlah pesanan Nasi Goreng: ");
    scanf("%d", &qty);
    int total = qty * 12000;  // Harga Nasi Goreng per porsi = Rp 12.000
    printf("Total harga Nasi Goreng: Rp %d\n", total);
    printf("Terima kasih, pesanan Anda akan segera diproses.\n");
}

int main() {
    while (1) {
        printf("MENU:\n");
        printf("1. Makanan\n");
        printf("2. Minuman\n");
        printf("3. Exit\n");

        int pilihan;
        printf("Masukkan pilihan Anda (1-3): ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            while (1) {
                printf("MAKANAN:\n");
                printf("1. Pecel Lele\n");
                printf("2. Nasi Goreng\n");
                printf("3. Kembali\n");

                int pilihan_makanan;
                printf("Masukkan pilihan Anda (1-3): ");
                scanf("%d", &pilihan_makanan);

                if (pilihan_makanan == 1) {
                    pecel_lele();
                } else if (pilihan_makanan == 2) {
                    nasi_goreng();
                } else if (pilihan_makanan == 3) {
                    break;
                } else {
                    printf("Pilihan tidak valid. Silakan coba lagi.\n");
                }
            }
        } else if (pilihan == 2) {
            printf("Maaf, menu minuman belum tersedia.\n");
        } else if (pilihan == 3) {
            printf("Terima kasih, sampai jumpa!\n");
            break;
        } else {
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }
    return 0;
}
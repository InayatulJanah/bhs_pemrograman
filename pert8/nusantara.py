from datetime import datetime

class User:
    def _init_(self, userID, nama, email, alamat, noTelepon):
        self.userID = userID
        self.nama = nama
        self.email = email
        self.alamat = alamat
        self.noTelepon = noTelepon

    def mendaftar(self):
        # Implementasi logika pendaftaran pengguna
        pass

    def masuk(self):
        # Implementasi logika masuk pengguna
        pass

class Pelanggan(User):
    def _init_(self, userID, nama, email, alamat, noTelepon):
        super()._init_(userID, nama, email, alamat, noTelepon)
        self.riwayatPesanan = []

    def memesanMakanan(self):
        # Implementasi logika pemesanan makanan
        pass

    def melacakPesanan(self):
        # Implementasi logika pelacakan pesanan
        pass

    def memberikanUmpanBalik(self):
        # Implementasi logika memberikan umpan balik
        pass

class Admin(User):
    def _init_(self, userID, nama, email, alamat, noTelepon, hakAkses):
        super()._init_(userID, nama, email, alamat, noTelepon)
        self.hakAkses = hakAkses

    def mengelolaMenu(self):
        # Implementasi logika pengelolaan menu
        pass

    def mengelolaPesanan(self):
        # Implementasi logika pengelolaan pesanan
        pass

class Kurir(User):
    def _init_(self, userID, nama, email, alamat, noTelepon, kendaraan, wilayahPengiriman):
        super()._init_(userID, nama, email, alamat, noTelepon)
        self.kendaraan = kendaraan
        self.wilayahPengiriman = wilayahPengiriman

    def mengelolaPengiriman(self):
        # Implementasi logika pengelolaan pengiriman
        pass

class Pesanan:
    def _init_(self, pesananID, daftarItem, totalHarga, statusPesanan, waktuPesanan):
        self.pesananID = pesananID
        self.daftarItem = daftarItem
        self.totalHarga = totalHarga
        self.statusPesanan = statusPesanan
        self.waktuPesanan = waktuPesanan

    def konfirmasiPesanan(self):
        # Implementasi logika konfirmasi pesanan
        pass

    def ubahStatusPesanan(self):
        # Implementasi logika perubahan status pesanan
        pass

class Makanan:
    def _init_(self, makananID, namaMakanan, harga, deskripsi):
        self.makananID = makananID
        self.namaMakanan = namaMakanan
        self.harga = harga
        self.deskripsi = deskripsi

    def tambahMakanan(self):
        # Implementasi logika penambahan makanan
        pass

    def hapusMakanan(self):
        # Implementasi logika penghapusan makanan
        pass

    def ubahMakanan(self):
        # Implementasi logika perubahan makanan
        pass

class Pembayaran:
    def _init_(self, pembayaranID, metodePembayaran, statusPembayaran):
        self.pembayaranID = pembayaranID
        self.metodePembayaran = metodePembayaran
        self.statusPembayaran = statusPembayaran

    def prosesPembayaran(self):
        # Implementasi logika proses pembayaran
        pass

# Contoh penggunaan kelas-kelas yang telah didefinisikan
if _name_ == "_main_":
    # Objek User
    user1 = User(1, "John Doe", "john@example.com", "Jl. ABC No. 123", "081234567890")

    # Objek Pelanggan
    pelanggan1 = Pelanggan(2, "Jane Smith", "jane@example.com", "Jl. XYZ No. 456", "089876543210")

    # Objek Admin
    admin1 = Admin(3, "Admin", "admin@example.com", "Jl. Admin No. 1", "081111111111", "Super Admin")

    # Objek Kurir
    kurir1 = Kurir(4, "Kurir", "kurir@example.com", "Jl. Kurir No. 5", "082222222222", "Motor", "Jakarta Selatan")

    # Objek Makanan
    makanan1 = Makanan(1, "Nasi Goreng", 15000, "Nasi goreng dengan telur, ayam, dan sayuran")

    # Objek Pembayaran
    pembayaran1 = Pembayaran(1, "Transfer Bank", "Menunggu Pembayaran")

    # Objek Pesanan
    pesanan1 = Pesanan(1, [makanan1], 15000, "Diproses", datetime.now())
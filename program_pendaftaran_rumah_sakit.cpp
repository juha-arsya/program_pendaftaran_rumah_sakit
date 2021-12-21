#include <iostream>

using namespace std;
int main()
{
  // Membuat variabel
  char nama[50];
  char alamat[75];
  int dokter;
  int lama;
  int kamar;
  char kelamin[25];
  int harga;
  int jasa;
  char lagi;

awal:
  cout << "==========================================" << endl;
  cout << "SELAMAT DATANG DI RUMAH SAKIT NGUDI WALUYO" << endl;
  cout << "        MASUKKAN DATA ANDA DIBAWAH        " << endl;
  cout << "==========================================" << endl;
  cout << endl;

  // Meminta inputan
  cout << "Masukkan nama anda      = ";
  cin >> nama;
  cout << endl;

  cout << "Masukkan Alamat Anda    = ";
  cin >> alamat;
  cout << endl;

  cout << "Masukkan Jenis Kelamin  = ";
  cin >> kelamin;
  cout << endl;

  cout << "Masukkan Lama Menginap  = ";
  cin >> lama;
  cout << endl;

  cout << "Jenis Kamar :" << endl;
  cout << "1.Kelas I   " << endl;
  cout << "2.Kelas II  " << endl;
  cout << "3.Kelas III " << endl;
  cout << "4.Kelas VIP " << endl;
  cout << "5.Kelas VVIP" << endl;
  cout << "Pilih Jenis Kamar Anda[1-5] = ";
  cin >> kamar;

  // Pengkondisian switch case untuk kamar
  switch (kamar)
  {

  case 1:
    harga = 100000;
    cout << "Kelas I" << endl;
    cout << "Tarif 100000" << endl;
    break;

  case 2:
    harga = 200000;
    cout << "Kelas II" << endl;
    cout << "Tarif 200000" << endl;
    break;

  case 3:
    harga = 300000;
    cout << "Kelas III" << endl;
    cout << "Tarif 300000" << endl;
    break;

  case 4:
    harga = 500000;
    cout << "Kelas VIP" << endl;
    cout << "Tarif 500000" << endl;
    break;

  case 5:
    harga = 600000;
    cout << "Kelas VVIP" << endl;
    cout << "Tarif 600000" << endl;
    break;

  default:
    cout << "Tidak Tersedia";
  }
  cout << endl;

  cout << "Jenis Dokter : " << endl;
  cout << "1.Dokter Anak" << endl;
  cout << "2.Dokter Penyakit Dalam" << endl;
  cout << "3.Dokter THT" << endl;
  cout << "4.Dokter Bedah" << endl;
  cout << "5.Dokter Umum" << endl;
  cout << "Pilih Jenis Dokter Anda[1-5] = ";
  cin >> dokter;

  // Pengkondisian switch case untuk dokter
  switch (dokter)
  {
  case 1:
    jasa = 50000;
    cout << "Dokter Anak" << endl;
    cout << "Tarif 50000" << endl;
    break;

  case 2:
    jasa = 60000;
    cout << "Dokter Penyakit Dalam" << endl;
    cout << "Tarif 60000" << endl;
    break;

  case 3:
    jasa = 70000;
    cout << "Dokter THT" << endl;
    cout << "Tarif 70000" << endl;
    break;

  case 4:
    jasa = 90000;
    cout << "Dokter Bedah" << endl;
    cout << "Tarif 90000" << endl;
    break;

  case 5:
    jasa = 40000;
    cout << "Dokter Umum" << endl;
    cout << "Tarif 40000" << endl;
    break;

  default:
    cout << "Tidak Tersedia" << endl;
  }
  cout << endl;

  // Outputan data pasien
  cout << "========= DATA ANDA =========" << endl;
  cout << "Nama Anda           :" << nama << endl;
  cout << "Alamat Anda         :" << alamat << endl;
  cout << "Jenis Kelamin       :" << kelamin << endl;
  cout << "Lama Menginap       :" << lama << endl;
  cout << "Jenis Kamar         :" << kamar << endl;
  cout << "Dokter              :" << dokter << endl;
  cout << "Yang Harus Dibayar  :" << (jasa + harga) * lama << endl;
  cout << "=============================" << endl;
  cout << endl;
  cout << "Ingin Mengulangi Lagi (Y/N)?";
  cin >> lagi;

  // kembali ke menu

  if (lagi == 'Y')
  {
    goto awal;
  }
  if (lagi == 'N')
  {
    goto selesai;
  }
selesai:
  cout << "Terima Kasih Atas Kunjungan Anda di Rumah Sakit Ngudi Waluyo" << endl;

  return 0;
}
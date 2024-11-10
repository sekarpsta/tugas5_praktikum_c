#include <stdio.h>

int main ()
{
  int kode, harga, harga_setelah_diskon;
  char jenis;
  float diskon = 0.0;
  
  printf("Masukan kode: ");
  scanf("%d", &kode);
 
  printf("Masukan jenis: ");
  scanf(" %c", &jenis);
  
  printf("Masukan harga: ");
  scanf("%d", &harga);
  
  if (jenis == 'A') {
    diskon = 0.10;
  } else if (jenis == 'B') {
    diskon = 0.15;
  } else if (jenis == 'C') {
    diskon = 0.20;
  }
  
  harga_setelah_diskon = harga - (harga * diskon);
  printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %d\n", jenis, diskon * 100, harga_setelah_diskon);
  return 0;
}

#### RUMAH PINTAR BERBASIS IOT MENGGUNAKAN GOOGLE ASSISTANT DAN ESP8266

<p align="justify">Rumah pintar merupakan sebuah konsep tempat tinggal yang menghubungkan jaringan internet dengan peralatan-peralatan rumah tangga yang terhubung dengan listrik sehingga dapat dilakukan pengendalian secara otomatis melalui perangkat smartphone penghuni rumah. Melalui teknologi yang bernama internet of things maka perangkat-perangkat rumah seperti: lampu, kipas, pintu, jendela, suhu, dan kelembapan dapat dikontrol dan dimonitoring melalui smartphone. Gambar di bawah ini merupakan gambaran umum sistem kerja alat secara keseluruhan.</p>

<p align="center">
  <img
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Gambaran%20Umum%20Sistem/Struktur%20Kerja%20Alat.jpg"
  >
</p>

<p align="justify">Berikut di bawah ini langkah-langkah membuat alat purwarupa rumah pintar berbasis IoT menggunakan google assistant dan ESP8266. Dengan alat ini maka pengguna dapat melakukan kendali lampu, kipas, pintu dan jendela yang terdapat di rumah secara otomatis menggunakan perintah suara dengan bahasa Indonesia atau bahasa Inggris melalui layanan google assistant yang terdapat pada aplikasi google home. Selain itu pengguna juga dapat melakukan monitoring suhu dan kelembapan melalui aplikasi blynk IoT.</p>

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

1. Pembuatan Antarmuka Blynk IoT
<p align="justify">Media perantara antara pengguna dengan alat untuk memonitoring suhu dan kelembapan dibuat menggunakan aplikasi blynk IoT. Hasil dari nilai suhu dan kelembapan ditampilkan dalam grafik gauge. Berikut di bawah ini adalah langkah-langkah pembuatan grafik gauge.</p>

<p align="center">
  <img
    src="https://raw.githubusercontent.com/hasptn/smarthome/main/Dokumentasi/Pembuatan%20Aplikasi%20Blynk%20IoT/1.jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Aplikasi%20Blynk%20IoT/2.jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Aplikasi%20Blynk%20IoT/3.jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Aplikasi%20Blynk%20IoT/4.jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Aplikasi%20Blynk%20IoT/5.jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Aplikasi%20Blynk%20IoT/6.jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Aplikasi%20Blynk%20IoT/7.jpg"
  >
</p>

* Membuka website https://blynk.io, kemudian login menggunakan email dan password yang sudah terdaftar.
* Kemudian klik ke menu pencarian, dan klik membuat template baru. Isi data template sesuai dengan kebutuhan.
* Selanjutnya klik ke menu datastreams, dan buat datastream baru untuk suhu. Untuk datastream suhu menggunakan virtual pin V0.
* Selanjutnya ulangi langkah ketiga untuk membuat datastream kelembapan. Untuk datastream kelembapan menggunakan virtual pin V1.
* Setelah itu klik menu mobile datastream, selanjutnya drag dan drop widget box untuk gauge, lalu atur pengaturan suhu dan kelembapan sesuai virtual pin yang sudah dibuat. Maka grafik gauage sudah dapat dilihat melalui smartphone.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

2. Pembuatan Layanan Google Assistant
<p align="justify">Untuk melakukan otomasi antara google assistant dan ESP8266 maka memerlukan layanan otomasi IFTTT. IFTTT dapat menjembatani google assistant yang terdapat pada aplikasi google home dengan ESP8266, sehingga komponenkomponen yang terhubung dengan ESP8266 dapat dioperasikan melalui perintah suara pengguna. Berikut di bawah ini adalah langkah-langkah pembuatan layanan tersebut.</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Layanan%20Google%20Assistant/Screenshot_2023-01-15-19-38-13-539_com.google.android.apps.chromecast.app%20(2).jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Layanan%20Google%20Assistant/Screenshot_2023-01-15-19-38-25-225_com.google.android.apps.chromecast.app%20(2).jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Layanan%20Google%20Assistant/Screenshot_2023-01-15-19-38-48-735_com.google.android.googlequicksearchbox%20(2).jpg"
  >
</p>

* Langkah pertama buka aplikasi google home, setelah itu klik ikon “tambah” dan buat perangkat baru rumah.
* Setelah itu klik kembali ikon “tambah” dan klik menambahkan perangkat. Kemudian klik tulisan “works with Google”.
* Selanjutnya pada kolom pencarian ketik “IFTTT”, setelah itu klik dan hubungkan dengan akun google pengguna.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

3. Pembuatan Layanan IFTTT
<p align="justify">Layanan google assistant yang sudah dibuat di atas, dapat terhubung dengan IFTTT menggunakan satu akun google sama. Jika google assistant dan IFTTT sudah terhubung maka perintah suara pengguna untuk mengoperasikan komponen-komponen yang terhubung ke ESP8266 dapat dijalankan. Berikut di bawah ini adalah langkah-langkah pembuatan layanan tersebut.</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Layanan%20IFTTT/1.jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Layanan%20IFTTT/2.jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Layanan%20IFTTT/3.jpg"
  >
</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Pembuatan%20Layanan%20IFTTT/4.jpg"
  >
</p>

* Langkah pertama ketik https://ifttt.com, kemudian tekan enter. Setelah itu klik ikon login, lalu login menggunakan akun google yang sama digunakan dalam pembuatan layanan google assistant di atas.
* Setelah itu tekan tombol create, lalu klik add pada “If This”. Selanjutnya klik kolom activate, kemudian cari “google assistant”. Kemudian ketik kalimat perintah suara yang diinginkan. Salah satu contoh kalimat perintah yang digunakan untuk menyalakan lampu/led pada penelitian ini adalah “nyalakan lampu”. Setelah itu, klik tombol create.
* Kemudian klik add pada “Then That”. Selanjutnya klik kolom activate, kemudian cari “webhooks”. Kemudian masukan url server aplikasi blynk yang sudah dibuat, token aplikasi blynk, pin dari setiap komponen yang sudah dibuat pada aplikasi blynk sebelumnya, dan kondisi nilai on/off komponen. Berikut contoh url tersebut: https://sgp1.blynk.cloud/external/api/update?token=81bvRgFHgJUnXdKTMZBk4SgOI0-D0whi&D4=1. Setelah itu klik tombol create action dan klik tombol finish, maka layanan google assistant dan ESP8266 sudah terhubung dengan bantuan layanan otomasi IFTTT.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

4. Pembuatan Rangkaian Alat
<p align="justify">Setelah semua layanan berhasil dibuat, maka langkah selanjutnya adalah membuat rangkaian alat keseluruhan. Berikut gambar di bawah ini merupakan
rangkaian skematik alat yang dibuat secara keseluruhan.</p>

<p align="center">
  <img 
    src="https://github.com/hasptn/smarthome/blob/main/Dokumentasi/Skematik/Skematik%20Keseluruhan.jpg"
  >
</p>

Adapun koneksi antara pin-pin komponen yang digunakan dengan board mikrokontroler ESP8266 adalah sebagai berikut:
* Koneksi pin pada sensor DHT11: VCC ke Vin, signal ke D1, GND ke GND. 
* Koneksi pin pada led : signal ke D2, GND ke GND. 
* Koneksi pin pada relay: VCC ke Vin, signal pin ke D3, GND ke GND.
* Koneksi pin pada motor servo untuk pintu: VCC ke Vin, signal ke D4, GND ke GND.
* Koneksi pin pada motor servo untuk jendela: VCC ke Vin, signal ke D5, GND ke GND.

Sedangkan pin-pin pada relay yang terhubung ke kipas dan power supply adalah sebagai berikut:
* Pin NO terhubung ke GND power supply.
* Pin COM terhubung ke GND kipas.

Langkah terakhir, membuka aplikasi google home dan blynk IoT melalui smartphone untuk mengoperasikan alat dan memonitoring suhu dan kelembapan. 
Berikut link video demonstrasi alat: https://drive.google.com/file/d/1jYFG3ANAmhSM605LqrN-Dr-eTh18XI02/view?usp=sharing

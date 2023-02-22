### PERANCANGAN PURWARUPA RUMAH PINTAR BERBASIS IOT MENGGUNAKAN GOOGLE ASSISTANT DAN ESP8266

<p align="justify">Rumah pintar merupakan sebuah konsep tempat tinggal yang menghubungkan jaringan internet dengan peralatan-peralatan rumah tangga yang terhubung dengan listrik sehingga dapat dilakukan pengendalian secara otomatis melalui perangkat smartphone penghuni rumah. Melalui teknologi yang bernama internet of things maka perangkat-perangkat rumah seperti: lampu, kipas, pintu, jendela, suhu, dan kelembapan dapat dikontrol dan dimonitoring melalui smartphone.</p>

<p align="justify">Berikut di bawah ini langkah-langkah membuat alat purwarupa rumah pintar berbasis IoT menggunakan google assistant dan ESP8266. Dengan alat ini maka pengguna dapat melakukan kendali lampu, kipas, pintu dan jendela yang terdapat di rumah secara otomatis menggunakan perintah suara dengan bahasa Indonesia atau bahasa Inggris melalui layanan google assistant yang terdapat pada aplikasi google home. Selain itu pengguna juga dapat melakukan monitoring suhu dan kelembapan melalui aplikasi blynk IoT.</p>

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

2. Pembuatan Layanan Google Assistant


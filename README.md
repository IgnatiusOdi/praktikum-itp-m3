# praktikum-itp-m3
## Praktikum ITP M3
### No 1
Buatlah sebuah program sederhana yang akan meminta 2 inputan. Inputan pertama merupakan inputan angka negative sedangkan inputan kedua merupakan inputan angka positive. Jika inputan tidak sesuai maka program akan selalu meminta inputan lagi.
```
Inputan Negative   : 0
Inputan Negative   : 2
Inputan Negative   : -5

Inputan Positive   : -1
Inputan Positive   : 8
```
Setelah itu program akan menampilkan data deret yang terdiri dari deret angka (semua angka di range tersebut di tampilkan), deret angka ganjil (hanya angka ganjil di range tersebut di tampilkan), deret angka genap (hanya angka genap di range tersebut di tampilkan) seperti contoh di bawah ini.
```
= DATA DERET =
-------------- 
Deret Angka        : -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8
Deret Angka Ganjil : -5, -3, -1, 1, 3, 5, 7 (7 angka ganjil)
Deret Angka Genap  : -4, -2, 0, 2, 4, 6, 8 (7 angka genap)
```
Setelah itu program juga akan menampilkan Bilangan Jomblo Selamanya, Bilangan Jomblo dan Bilangan Couple. Bilangan Jomblo Selamanya adalah angka yang pasti hingga kapanpun tidak akan memiliki pasangan, Bilangan Jomblo adalah angka yang tidak memiliki pasangan sedangkan bilangan couple adalah bilangan yang memiliki pasangan. Pasangan tersebut adalah angka yang mempunyai positive serta negative dari range inputan. Berikut merupakan contoh dari bilangan jomblo dan couple.
```
= Bilangan Jomblo Selamanya =
-----------------------------
0
= Bilangan Jomblo =
-------------------
6 , 7 , 8
= Bilangan Couple =
-------------------
(-5, 5) , (-4, 4) , (-3, 3) , (-2, 2) , (-1, 1)
```

### No 2
Buatlah program yang akan mengkonversi decimal ke binary. Program akan meminta inputan angka dengan range 0 – 255, jika inputan tidak di dalam range tersebut maka program akan meminta inputan terus menerus hingga benar!
```
Input : 0
Output: 0000 0000

Input : 12
Output: 0000 1100

Input : 255
Output: 1111 1111
```

### Tugas
### No 1
Keajaiban Angka 9 Bagian 1
Pada awal program, mintalah inputan untuk menampilkan banyak keajaiban angka 9 bagian 1 (Pastikan inputan hanya menerima 1-10, jika inputan salah maka mintalah inputan terus hingga benar).. Keajaiban angka 9 bagian 1 memiliki rumus seperti berikut
```
[123…n] x 9 + n = 1n (jumlah urutannya) 0
```
Contoh
```
Banyak : 4
Output :
1 x 9 + 1 = 10
12 x 9 + 2 = 110
123 x 9 + 3 = 1110
1234 x 9 + 3 = 11110
```

### No 2
Keajaiban Angka 9 Bagian 2
Pada awal program, mintalah inputan untuk menampilkan banyak keajaiban angka 9 bagian 2 (Pastikan inputan hanya menerima 1-10, jika inputan salah maka mintalah inputan terus hingga benar).  Keajaiban angka 9 bagian 2 adalah Perkalian bilangan bulat positif 1-10 dengan 9. Jika a adalah bilangan bulat positif dan dikalikan dengan 9, maka hasilnya adalah mn. Dua bilangan m dan n jika dijumlahkan maka hasilnya adalah 9. Contoh:
```
Banyak : 4
Output :
1 x 9 = 09 -> 0 + 9 = 9
2 x 9 = 18 -> 1 + 8 = 9
3 x 9 = 27 -> 2 + 7 = 9
4 x 9 = 36 -> 3 + 6 = 9
```

### No 3
Keajaiban Angka 9 Bagian 3 
Program ini sama dengan no 2, namun inputannya hanya menerima >10 dan dimulai dari angka 11.
```
Banyak : 2 
Output : 
11 x 9 = 099 -> 0 + 9 + 9 = 18 -> 1 + 8 = 9 
12 x 9 = 108 -> 1 + 0 + 8 = 09 -> 0 + 9 = 9 
```

### No 4
Buatlah program yang akan meminta angka. Outputkan TRUE jika angka adalah bilangan “AGAK PRIMA” dan outputkan FALSE jika angka bukan bilangan “AGAK PRIMA”. Bilangan “AGAK PRIMA” adalah bilangan yang habis dibagi oleh 1, dirinya sendiri, dan maksimum dua bilangan lainnya. Bilangan prima juga termasuk bilangan agak prima.
```
Input  : 4
Output : TRUE
```

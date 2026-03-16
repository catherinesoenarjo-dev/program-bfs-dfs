**Algoritma BFS:**
1. Membuat daftar dan antrian untuk mencatat node yang dikunjungi
2. Masukkan simpul awal ke dalam antrian / queue lalu node tersebut akan ditandai "sudah dikunjungi".
3. Membuat loop: selama antrian ada isinya, ambil node urutan terdepan, cek semua tetangganya.
4. Jika tetangga belum dikunjungi, tandai sebagai "kunjungi", lalu masukkan ke dalam antrian.
5. Ulangi proses tersebut untuk node-node lain di dalamnya.
6. Proses akan berhenti jika antrian sudah kosong.
7. Program mencetak hasil dari pencarian.
8. Selesai.

->Kalau mengikuti graph pada kode tersebut maka akan jadi seperti ini:
1. Mulai dari 0: Antrean: [0], Visited: {0}
2. Dequeue 0: Cetak 0. Cek tetangga 0 (1 dan 4). **Antrean: [1, 4], Visited: {0, 1, 4}**
3. Dequeue 1: Cetak 1. Cek tetangga 1 (0, 2, 3). 0 sudah dikunjungi. Masukkan 2 dan 3. **Antrean: [4, 2, 3], Visited: {0, 1, 4, 2, 3}**
4. Dequeue 4: Cetak 4. Cek tetangga 4 (0, 2, 3). Semuanya sudah dikunjungi. **Antrean: [2, 3]**
5. Dequeue 2: Cetak 2. Cek tetangga 2 (1, 3, 4). Semuanya sudah dikunjungi. **Antrean: [3]**
6. Dequeue 3: Cetak 3. Cek tetangga 3. Semua sudah dikunjungi. **Antrean: Kosong.**
7. Hasil Penelusuran BFS: 0 -> 1 -> 4 -> 2 -> 3 -> NULL
8. Selesai.

**Algoritma DFS:**
1. Membuat daftar dan tumpukan / stack untuk mencatat node yang dikunjungi.
2. Masukkan node awal ke dalam stack.
3. Membuat loop: selama stack ada isinya, ambil/pop node paling atas dari stack
4. Jika node belum dikunjungi, ambil semua tetangga, lalu masukkan ke dalam stack.
5. Ulangi proses tersebut untuk node-node lain di dalamnya.
6. Jika node sudah tidak memiliki tetangga, maka algoritma akan mundur dan mengambil node yang menunggu di stack.
7. Proses akan berhenti jika stack sudah kosong.
8. Program mencetak hasil dari pencarian.
9. Selesai

->Kalau mengikuti graph pada kode tersebut maka akan jadi seperti ini:
1. Mulai dari 0: **Stack: [0], Visited: {0}.**
2. Pop 0: Cetak 0. Cek tetangga 0 (1 dan 4). Karena loop terbalik, 4 di push dulu, baru 1. **Stack: [4, 1], Visited: {0, 4, 1}.**
3. Pop 1: Cetak 1. Cek tetangga 1 (0, 2, 3). 0 sudah dikunjungi. Masukkan 3 dulu, baru 2. **Stack: [4, 3, 2], Visited: {0, 4, 1, 3, 2}.**
4. Pop 2: Cetak 2. Cek tetangga 2 (1, 3, 4). Semuanya sudah dikunjungi. **Stack: [4, 3].**
5. Pop 3: Cetak 3. Cek tetangga 3 (1, 2, 4). Semuanya sudah dikunjungi. **Stack: [4].**
6. Pop 4: Cetak 4.
7. Hasil Penelusuran DFS: 0 -> 1 -> 2 -> 3 -> 4 -> NULL
8. Selesai.

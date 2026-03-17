**Algoritma BFS:**
1. Membuat daftar untuk mencatat node yang dikunjungi.
2. Membuat antrian kosong.
4. Tentukan titik awal penelusuran (startNode)
5. Mulai: Masukkan node awal (startNode) ke dalam antrian / queue lalu node tersebut akan ditandai "sudah dikunjungi" (visited[startNode] = true).
6. Membuat loop: selama antrian ada isinya, ambil node urutan terdepan dan disimpan dalam curr, curr dicetak, lalu cek semua tetangganya (graph[curr][i] == 1).
7. Jika tetangga belum dikunjungi (visited[i] == false), tandai sebagai "kunjungi" (visited[i] = true), lalu masukkan ke dalam antrian.
8. Ulangi proses tersebut untuk node-node lain di dalamnya.
9. Proses akan berhenti jika antrian sudah kosong.
10. Program mencetak hasil dari pencarian.
11. Selesai.

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
2. Membuat fungsi stack yaitu pop dan push.
3. Mulai: Masukkan node awal ke dalam stack.
4. Membuat loop: selama stack ada isinya, ambil/pop node paling atas dari stack
5. Jika node belum dikunjungi, ambil semua tetangga, lalu masukkan ke dalam stack.
6. Ulangi proses tersebut untuk node-node lain di dalamnya.
7. Jika node sudah tidak memiliki tetangga, maka algoritma akan mundur dan mengambil node yang menunggu di stack.
8. Proses akan berhenti jika stack sudah kosong.
9. Program mencetak hasil dari pencarian.
10. Selesai

->Kalau mengikuti graph pada kode tersebut maka akan jadi seperti ini:
1. Mulai dari 0: **Stack: [0], Visited: {0}.**
2. Pop 0: Cetak 0. Cek tetangga 0 (1 dan 4). Karena loop terbalik, 4 di push dulu, baru 1. **Stack: [4, 1], Visited: {0, 4, 1}.**
3. Pop 1: Cetak 1. Cek tetangga 1 (0, 2, 3). 0 sudah dikunjungi. Masukkan 3 dulu, baru 2. **Stack: [4, 3, 2], Visited: {0, 4, 1, 3, 2}.**
4. Pop 2: Cetak 2. Cek tetangga 2 (1, 3, 4). Semuanya sudah dikunjungi. **Stack: [4, 3].**
5. Pop 3: Cetak 3. Cek tetangga 3 (1, 2, 4). Semuanya sudah dikunjungi. **Stack: [4].**
6. Pop 4: Cetak 4.
7. Hasil Penelusuran DFS: 0 -> 1 -> 2 -> 3 -> 4 -> NULL
8. Selesai.

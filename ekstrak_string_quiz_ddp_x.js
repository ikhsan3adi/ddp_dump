let idxAwal = 4;
let idxAkhir = 7;

// index array javascript dimulai dari 0, tambah element kosong di depan array
const kata = ['', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'T', 'I', 'K', 'A'];
// array baru subs
const subs = [''];

// kata.length = 12 untuk kata [INFORMATIKA]
if (idxAwal > 0 && idxAwal < kata.length && idxAkhir > 0 && idxAkhir < kata.length) {
  if (idxAwal < idxAkhir) {
    const length = idxAkhir + idxAwal;
    let i = 0; // initial loop
    while (i + 1 <= length) { // final loop
      subs[i + 1] = kata[idxAwal + i]; // blok operasi
      i++; // next step
      if (i > 7) {
        idxAwal = -7;
      }
    }
  } else {
    console.error('index awal harus lebih kecil dari index akhir');
  }
} else {
  console.error('index awal & index akhir harus lebih besar dari nol dan lebih kecil dari panjang kata');
}

// hilangkan element kosong dari array
kata.shift();
subs.shift();

console.log('Array kata:');
console.log(kata);
console.log(`idxAwal: ${idxAwal}`);
console.log(`idxAkhir: ${idxAkhir}`);
console.log('Array subs:');
console.log(subs);

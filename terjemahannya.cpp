#!/bin/bash
##############################################################################
# PINTASAN dan RIWAYAT
##############################################################################

CTRL+A  # pindah ke awal baris
CTRL+B  # bergerak mundur satu karakter
CTRL+C  # menghentikan perintah saat ini
CTRL+D  # menghapus satu karakter mundur atau keluar dari sesi saat ini, mirip dengan perintah exit
CTRL+E  # bergerak ke akhir baris
CTRL+F  # bergerak maju satu karakter
CTRL+G  # membatalkan perintah pengeditan saat ini dan membunyikan bel terminal
CTRL+H  # menghapus satu karakter di bawah kursor (sama seperti DELETE)
CTRL+J  # sama seperti RETURN
CTRL+K  # menghapus (kill) ke depan sampai akhir baris
CTRL+L  # membersihkan layar dan menampilkan ulang baris
CTRL+M  # sama seperti RETURN
CTRL+N  # baris berikutnya dalam riwayat perintah
CTRL+O  # sama seperti RETURN, lalu menampilkan baris berikutnya dalam file riwayat
CTRL+P  # baris sebelumnya dalam riwayat perintah
CTRL+Q  # melanjutkan keluaran shell yang tertunda
CTRL+R  # mencari ke belakang
CTRL+S  # mencari ke depan atau menunda keluaran shell
CTRL+T  # menukar dua karakter
CTRL+U  # menghapus mundur dari titik hingga awal baris
CTRL+V  # mengetik karakter berikutnya secara verbatim
CTRL+W  # menghapus kata di belakang kursor
CTRL+X  # menampilkan kemungkinan penyelesaian nama file untuk kata saat ini
CTRL+Y  # mengambil (yank) item terakhir yang dihapus
CTRL+Z  # menghentikan perintah saat ini, lanjutkan dengan fg di latar depan atau bg di latar belakang

ALT+B   # bergerak mundur satu kata
ALT+D   # menghapus kata berikutnya
ALT+F   # bergerak maju satu kata
ALT+H   # menghapus satu karakter mundur
ALT+T   # menukar dua kata
ALT+.   # menempelkan kata terakhir dari perintah terakhir. Menekan berulang kali untuk menelusuri riwayat perintah.
ALT+U   # mengkapitalisasi setiap karakter dari posisi kursor saat ini hingga akhir kata
ALT+L   # mengubah menjadi huruf kecil setiap karakter dari posisi kursor saat ini hingga akhir kata
ALT+C   # mengkapitalisasi huruf di bawah kursor. Kursor kemudian bergerak ke akhir kata.
ALT+R   # mengembalikan perubahan ke perintah dari riwayat jika telah diedit.
ALT+?   # menampilkan kemungkinan penyelesaian untuk yang diketik
ALT+^   # memperluas baris ke kecocokan terbaru dari riwayat

CTRL+X lalu (   # memulai perekaman makro keyboard
CTRL+X lalu )   # selesai merekam makro keyboard
CTRL+X lalu E   # mengingat makro keyboard yang terakhir direkam
CTRL+X lalu CTRL+E   # membuka editor teks (ditentukan oleh $EDITOR) pada baris perintah saat ini lalu menjalankan hasilnya sebagai perintah shell
CTRL+A lalu D  # logout dari layar tetapi tidak membunuhnya, jika ada perintah, itu akan berlanjut

BACKSPACE  # menghapus satu karakter mundur
DELETE     # menghapus satu karakter di bawah kursor

history   # menampilkan riwayat baris perintah
!!        # mengulangi perintah terakhir
!<n>      # mengacu pada baris perintah 'n'
!<string> # mengacu pada perintah yang dimulai dengan 'string'
esc :wq   # keluar dan menyimpan skrip

exit      # keluar dari sesi saat ini


##############################################################################
# DASAR-DASAR BASH
##############################################################################

env                 # menampilkan semua variabel lingkungan

echo $SHELL         # menampilkan shell yang sedang digunakan
echo $BASH_VERSION  # menampilkan versi bash

bash                # jika ingin menggunakan bash (ketik exit untuk kembali ke shell yang sebelumnya dibuka)
whereis bash        # menemukan lokasi binary, sumber, dan halaman manual untuk sebuah perintah
which bash          # menemukan program yang dijalankan sebagai 'bash' (default: /bin/bash, bisa berubah antar lingkungan)

clear               # membersihkan konten di jendela (menyembunyikan baris yang ditampilkan)


##############################################################################
# PERINTAH FILE
##############################################################################

ls                            # menampilkan file di direktori saat ini, ls <dir> untuk menampilkan file di direktori tertentu
ls -l                         # menampilkan file dalam 'format panjang', termasuk ukuran file, pemilik file, hak akses, dan waktu terakhir dimodifikasi
ls -a                         # menampilkan semua file dalam 'format panjang', termasuk file tersembunyi (nama dimulai dengan '.')
ln -s <filename> <link>       # membuat tautan simbolik ke file
readlink <filename>           # menampilkan arah tautan simbolik
tree                          # menampilkan direktori dan subdirektori dalam format pohon yang mudah dibaca
mc                            # penjelajah file terminal (alternatif ncdu)
touch <filename>              # membuat atau memperbarui file
mktemp -t <filename>          # membuat file sementara di /tmp/ yang dihapus pada boot berikutnya (-d untuk membuat direktori)
cat <filename>                # menampilkan konten mentah file (tidak akan diinterpretasikan)
cat -n <filename>             # menampilkan jumlah baris
nl <file.sh>                  # menampilkan jumlah baris dalam file
cat filename1 > filename2     # menyalin filename1 ke filename2
cat filename1 >> filename2    # menggabungkan teks dua file
any_command > <filename>      # '>' digunakan untuk redireksi, akan menetapkan stdout perintah ke file daripada stdout asli (umumnya /dev/stdout)
more <filename>               # menampilkan bagian awal file (pindah dengan spasi dan ketik q untuk keluar)
head <filename>               # menampilkan baris awal dari file (default: 10 baris)
tail <filename>               # menampilkan baris akhir dari file (berguna dengan opsi -f) (default: 10 baris)
vim <filename>                # membuka file di editor teks VIM (VI iMproved), akan dibuat jika tidak ada
mv <filename1> <dest>         # memindahkan file ke tujuan
cp <filename1> <dest>         # menyalin file
rm <filename>                 # menghapus file
find . -name <name> <type>    # mencari file atau direktori di direktori saat ini dan semua sub-direktori berdasarkan nama
diff <filename1> <filename2>  # membandingkan file dan menampilkan perbedaannya
wc <filename>                 # menampilkan jumlah baris, kata, dan karakter dalam file. Gunakan -lwc untuk menampilkan salah satu informasi
sort <filename>               # mengurutkan konten file teks baris per baris secara alfabetis, gunakan -n untuk urutan numerik dan -r untuk urutan terbalik.
chmod -options <filename>     # mengubah hak akses baca, tulis, dan eksekusi pada file
gzip <filename>               # mengompres file menggunakan algoritma gzip
gunzip <filename>             # membuka kompresi file yang dikompres oleh gzip
gzcat <filename>              # menampilkan file yang dikompres tanpa harus membuka kompresinya
lpr <filename>                # mencetak file
lpq                           # menampilkan antrian printer
lprm <jobnumber>              # menghapus sesuatu dari antrian printer
genscript                     # mengonversi file teks biasa menjadi postscript untuk pencetakan dan memberikan beberapa opsi untuk pemformatan
dvips <filename>              # mencetak file .dvi (file yang dibuat oleh LaTeX)
grep <pattern> <filenames>    # mencari string dalam file
grep -r <pattern> <dir>       # mencari pola secara rekursif dalam direktori
head -n file_name | tail +n   # menampilkan baris ke-n dari file.
head -y lines.txt | tail +x   # ingin menampilkan semua baris dari x ke y. Ini termasuk baris x dan y.

sed 's/<pattern>/<replacement>/g' <filename> # mengganti pola dalam file dengan nilai pengganti untuk output
sed -i 's/<pattern>/<replacement>/g' <filename> # mengganti pola dalam file dengan nilai pengganti secara langsung
echo "this" | sed 's/is/at/g' # mengganti pola dari aliran input dengan nilai pengganti

##############################################################################
# PERINTAH DIREKTORI
##############################################################################

mkdir <dirname>               # membuat direktori baru
rmdir <dirname>               # menghapus direktori kosong
rmdir -rf <dirname>           # menghapus direktori yang tidak kosong
mv <dir1> <dir2>              # mengganti nama direktori dari <dir1> menjadi <dir2>
cd                            # berpindah ke direktori home
cd ..                         # berpindah ke direktori induk
cd <dirname>                  # berpindah ke direktori
cp -r <dir1> <dir2>           # menyalin <dir1> ke <dir2> termasuk sub-direktori
pwd                           # memberi tahu di mana Anda saat ini berada
cd ~                          # berpindah ke direktori home.
cd -                          # berpindah ke direktori kerja sebelumnya

##############################################################################
# SSH, INFORMASI SISTEM & PERINTAH JARINGAN
##############################################################################

ssh user@host            # menghubungkan ke host sebagai pengguna
ssh -p <port> user@host  # menghubungkan ke host di port yang ditentukan sebagai pengguna
ssh-copy-id user@host    # menambahkan kunci ssh Anda ke host untuk pengguna untuk mengaktifkan login tanpa kata sandi

whoami                   # mengembalikan nama pengguna Anda
su <user>                # beralih ke pengguna lain
su -                     # beralih ke root, kemungkinan membutuhkan sudo su -
sudo <command>           # menjalankan perintah sebagai pengguna root
passwd                   # memungkinkan Anda mengubah kata sandi Anda
quota -v                 # menunjukkan apa kuota disk Anda
date                     # menunjukkan tanggal dan waktu saat ini
cal                      # menunjukkan kalender bulan ini
uptime                   # menunjukkan waktu aktif saat ini
w                        # menampilkan siapa yang sedang online
finger <user>            # menampilkan informasi tentang pengguna
uname -a                 # menunjukkan informasi kernel
man <command>            # menunjukkan manual untuk perintah yang ditentukan
info <command>           # menunjukkan sistem dokumentasi lain untuk perintah tertentu
help                     # menunjukkan dokumentasi tentang perintah dan fungsi bawaan
df                       # menunjukkan penggunaan disk
du <filename>            # menunjukkan penggunaan disk dari file dan direktori dalam filename (du -s memberikan total saja)
resize2fs                # pengubah ukuran sistem file ext2/ext3/ext4
last <yourUsername>      # daftar login terakhir Anda
ps -u yourusername       # daftar proses Anda
kill <PID>               # menghentikan proses dengan ID yang Anda berikan
killall <processname>    # menghentikan semua proses dengan nama yang sama
top                      # menampilkan proses aktif Anda saat ini
lsof                     # daftar file yang terbuka
bg                       # daftar pekerjaan yang dihentikan atau latar belakang; melanjutkan pekerjaan yang dihentikan di latar belakang
fg                       # membawa pekerjaan terbaru ke depan
fg <job>                 # membawa pekerjaan ke depan

ping <host>              # melakukan ping ke host dan menampilkan hasilnya
whois <domain>           # mendapatkan informasi whois untuk domain
dig <domain>             # mendapatkan informasi DNS untuk domain
dig -x <host>            # pencarian terbalik untuk host
wget <file>              # mengunduh file
netstat                  # mencetak koneksi jaringan, tabel routing, statistik antarmuka, koneksi masquerade, dan keanggotaan multicast

time <command>           # melaporkan waktu yang digunakan oleh eksekusi perintah

##############################################################################
# VARIABEL
##############################################################################

varname=value                # mendefinisikan sebuah variabel
varname=value command        # mendefinisikan variabel untuk digunakan dalam lingkungan sub-proses tertentu
echo $varname                # memeriksa nilai variabel
echo $$                      # mencetak ID proses dari shell saat ini
echo $!                      # mencetak ID proses dari pekerjaan latar belakang yang baru saja dijalankan
echo $?                      # menampilkan status keluar dari perintah terakhir
read <varname>               # membaca string dari input dan menetapkannya ke variabel
read -p "prompt" <varname>   # sama seperti di atas tetapi menampilkan prompt untuk meminta nilai dari pengguna
column -t <filename>         # menampilkan informasi dalam kolom yang rapi (sering digunakan dengan pipe)
let <varname> = <equation>   # melakukan perhitungan matematika menggunakan operator seperti +, -, *, /, %
export VARNAME=value         # mendefinisikan variabel lingkungan (akan tersedia di sub-proses)
export -f  <funcname>        # mengekspor fungsi 'funcname'
export var1="var1 value"     # Mengekspor dan menetapkan dalam pernyataan yang sama
export <varname>             # Menyalin variabel Bash
declare -x <varname>         # Menyalin variabel Bash

array[0]=valA                # cara mendefinisikan array
array[1]=valB
array[2]=valC
array=([2]=valC [0]=valA [1]=valB)  # cara lain
array=(valA valB valC)              # dan cara lainnya

${array[i]}                  # menampilkan nilai array untuk indeks ini. Jika tidak ada indeks yang diberikan, elemen array 0 dianggap
${#array[i]}                 # untuk menemukan panjang elemen dalam array
${#array[@]}                 # untuk menemukan berapa banyak nilai dalam array

declare -a                   # variabel diperlakukan sebagai array
declare -f                   # hanya menggunakan nama fungsi
declare -F                   # menampilkan nama fungsi tanpa definisi
declare -i                   # variabel diperlakukan sebagai bilangan bulat
declare -r                   # membuat variabel menjadi hanya baca
declare -x                   # menandai variabel untuk diekspor melalui lingkungan
declare -l                   # nilai huruf besar dalam variabel diubah menjadi huruf kecil
declare -A                   # menjadikannya array asosiatif

${varname:-word}             # jika varname ada dan tidak null, kembalikan nilainya; jika tidak, kembalikan word
${varname:word}              # jika varname ada dan tidak null, kembalikan nilainya; jika tidak, kembalikan word
${varname:=word}             # jika varname ada dan tidak null, kembalikan nilainya; jika tidak, tetapkan ke word dan kemudian kembalikan nilainya
${varname:?message}          # jika varname ada dan tidak null, kembalikan nilainya; jika tidak, cetak varname, diikuti dengan message dan abort perintah atau skrip saat ini
${varname:+word}             # jika varname ada dan tidak null, kembalikan word; jika tidak, kembalikan null
${varname:offset:length}     # melakukan perluasan substring. Mengembalikan substring dari $varname yang dimulai pada offset dan hingga panjang karakter

${variable#pattern}          # jika pola cocok dengan awal nilai variabel, hapus bagian terpendek yang cocok dan kembalikan sisanya
${variable##pattern}         # jika pola cocok dengan awal nilai variabel, hapus bagian terpanjang yang cocok dan kembalikan sisanya
${variable%pattern}          # jika pola cocok dengan akhir nilai variabel, hapus bagian terpendek yang cocok dan kembalikan sisanya
${variable%%pattern}         # jika pola cocok dengan akhir nilai variabel, hapus bagian terpanjang yang cocok dan kembalikan sisanya
${variable/pattern/string}   # pencocokan terpanjang pola dalam variabel diganti dengan string. Hanya pencocokan pertama yang diganti
${variable//pattern/string}  # pencocokan terpanjang pola dalam variabel diganti dengan string. Semua pencocokan diganti

${#varname}                  # mengembalikan panjang nilai variabel sebagai string karakter

*(patternlist)               # mencocokkan nol atau lebih kemunculan pola yang diberikan
+(patternlist)               # mencocokkan satu atau lebih kemunculan pola yang diberikan
?(patternlist)               # mencocokkan nol atau satu kemunculan pola yang diberikan
@(patternlist)               # mencocokkan tepat satu dari pola yang diberikan
!(patternlist)               # mencocokkan apa pun kecuali satu dari pola yang diberikan

$(UNIX command)              # substitusi perintah: menjalankan perintah dan mengembalikan output standar

typeset -l <x>                 # menjadikan variabel lokal - <x> harus berupa bilangan bulat

##############################################################################
# FUNGSI
##############################################################################

# Fungsi merujuk pada argumen yang diteruskan berdasarkan posisi (seolah-olah mereka adalah parameter posisi), yaitu, $1, $2, dan seterusnya.
# $@ sama dengan "$1" "$2"... "$N", di mana N adalah jumlah parameter posisi. $# menyimpan jumlah parameter posisi.

function functname() {
  shell commands
}

unset -f functname  # menghapus definisi fungsi
declare -f          # menampilkan semua fungsi yang didefinisikan dalam sesi login Anda

##############################################################################
# KONTROL ALUR
##############################################################################

statement1 && statement2  # operator dan
statement1 || statement2  # operator atau

-a                        # operator dan di dalam ekspresi kondisional uji
-o                        # operator atau di dalam ekspresi kondisional uji

# STRING

str1 == str2               # str1 cocok dengan str2
str1 != str2               # str1 tidak cocok dengan str2
str1 < str2                # str1 kurang dari str2 (secara alfabet)
str1 > str2                # str1 lebih besar dari str2 (secara alfabet)
str1 \> str2               # str1 diurutkan setelah str2
str1 \< str2               # str1 diurutkan sebelum str2
-n str1                    # str1 tidak null (memiliki panjang lebih dari 0)
-z str1                    # str1 null (memiliki panjang 0)

# FILE

-a file                   # file ada atau kompilasi berhasil
-d file                   # file ada dan merupakan direktori
-e file                   # file ada; sama seperti -a
-f file                   # file ada dan merupakan file biasa (yaitu, bukan direktori atau tipe file khusus lainnya)
-r file                   # Anda memiliki izin baca
-s file                   # file ada dan tidak kosong
-w file                   # Anda memiliki izin tulis
-x file                   # Anda memiliki izin eksekusi pada file, atau izin pencarian direktori jika itu adalah direktori
-N file                   # file telah dimodifikasi sejak terakhir dibaca
-O file                   # Anda memiliki file
-G file                   # ID grup file cocok dengan milik Anda (atau salah satu milik Anda, jika Anda berada di beberapa grup)
file1 -nt file2           # file1 lebih baru dari file2
file1 -ot file2           # file1 lebih tua dari file2

# ANGKA

-lt                       # kurang dari
-le                       # kurang dari atau sama dengan
-eq                       # sama dengan
-ge                       # lebih dari atau sama dengan
-gt                       # lebih dari
-ne                       # tidak sama dengan

if condition
then
  statements
[elif condition
  then statements...]
[else
  statements]
fi

for x in {1..10}
do
  statements
done

for name [in list]
do
  statements yang dapat menggunakan $name
done

for (( initialisation ; kondisi akhir ; pembaruan ))
do
  statements...
done

case ekspresi in
  pola1 )
    statements ;;
  pola2 )
    statements ;;
esac

select name [in list]
do
  statements yang dapat menggunakan $name
done

while kondisi; do
  statements
done

until kondisi; do
  statements
done

##############################################################################
# SIKLUS PEMROSESAN PERINTAH
##############################################################################

# Urutan default untuk pencarian perintah adalah fungsi, diikuti oleh built-in, dengan skrip dan executable terakhir.
# Ada tiga built-in yang dapat Anda gunakan untuk mengubah urutan ini: `command`, `builtin`, dan `enable`.

command  # menghapus pencarian alias dan fungsi. Hanya built-in dan perintah yang ditemukan dalam jalur pencarian yang dieksekusi
builtin  # hanya mencari perintah built-in, mengabaikan fungsi dan perintah yang ditemukan dalam PATH
enable   # mengaktifkan dan menonaktifkan built-in shell

eval     # mengambil argumen dan menjalankannya melalui langkah pemrosesan baris perintah sekali lagi

##############################################################################
# PENGALIHAN INPUT/OUTPUT
##############################################################################

cmd1|cmd2  # pipe; mengambil output standar dari cmd1 sebagai input standar untuk cmd2
< file     # mengambil input standar dari file
> file     # mengarahkan output standar ke file
>> file    # mengarahkan output standar ke file; menambahkan ke file jika sudah ada
>|file     # memaksa output standar ke file meskipun noclobber disetel
n>|file    # memaksa output ke file dari deskriptor file n meskipun noclobber disetel
<> file    # menggunakan file sebagai input dan output standar
n<>file    # menggunakan file sebagai input dan output untuk deskriptor file n
n>file     # mengarahkan deskriptor file n ke file
n<file     # mengambil deskriptor file n dari file
n>>file    # mengarahkan deskriptor file n ke file; menambahkan ke file jika sudah ada
n>&        # menduplikasi output standar ke deskriptor file n
n<&        # menduplikasi input standar dari deskriptor file n
n>&m       # deskriptor file n dibuat menjadi salinan dari deskriptor output file
n<&m       # deskriptor file n dibuat menjadi salinan dari deskriptor input file
&>file     # mengarahkan output standar dan error standar ke file
<&-        # menutup input standar
>&-        # menutup output standar
n>&-       # menutup output dari deskriptor file n
n<&-       # menutup input dari deskriptor file n

|tee <file># output perintah ke terminal dan ke file (-a untuk menambahkan ke file)

##############################################################################
# PENANGANAN PROSES
##############################################################################

# Untuk menghentikan pekerjaan, ketik CTRL+Z saat berjalan. Anda juga dapat menghentikan pekerjaan dengan CTRL+Y.
# Ini sedikit berbeda dari CTRL+Z di mana proses hanya dihentikan ketika mencoba membaca input dari terminal.
# Tentu saja, untuk menghentikan pekerjaan, ketik CTRL+C.

myCommand &  # menjalankan pekerjaan di latar belakang dan mengembalikan prompt shell

jobs         # mencantumkan semua pekerjaan (gunakan -l untuk melihat PID yang terkait)

fg           # membawa pekerjaan latar belakang ke depan
fg %+        # membawa pekerjaan latar belakang yang baru saja dijalankan
fg %-        # membawa pekerjaan latar belakang yang kedua
fg %N        # membawa pekerjaan nomor N
fg %string   # membawa pekerjaan yang perintahnya diawali dengan string
fg %?string  # membawa pekerjaan yang perintahnya mengandung string

kill -l               # mengembalikan daftar semua sinyal di sistem, berdasarkan nama dan nomor
kill PID              # mengakhiri proses dengan PID yang ditentukan
kill -s SIGKILL 4500  # mengirim sinyal untuk memaksa atau mengakhiri proses
kill -15 913          # Menghentikan proses PID 913 dengan sinyal 15 (TERM)
kill %1               # Di mana %1 adalah nomor pekerjaan seperti yang dibaca dari perintah 'jobs'.

ps           # mencetak satu baris informasi tentang shell login yang sedang berjalan dan proses yang berjalan di bawahnya
ps -a        # memilih semua proses dengan tty kecuali pemimpin sesi

trap cmd sig1 sig2  # menjalankan perintah ketika sinyal diterima oleh skrip
trap "" sig1 sig2   # mengabaikan sinyal tersebut
trap - sig1 sig2    # mengatur ulang aksi yang diambil ketika sinyal diterima ke default

disown <PID|JID>    # menghapus proses dari daftar pekerjaan

wait                # menunggu hingga semua pekerjaan latar belakang selesai
sleep <number>      # menunggu # detik sebelum melanjutkan

pv                  # menampilkan bilah kemajuan untuk perintah penanganan data. sering digunakan dengan pipe seperti |pv
yes                 # memberikan respons ya setiap kali input diminta dari skrip/proses


##############################################################################
# TIPS & TRICKS
##############################################################################

# menetapkan alias
cd; nano .bash_profile
> alias gentlenode='ssh admin@gentlenode.com -p 3404'  # tambahkan alias Anda di .bash_profile

# untuk cepat pergi ke direktori tertentu
cd; nano .bashrc
> shopt -s cdable_vars
> export websites="/Users/mac/Documents/websites"

source .bashrc
cd $websites

##############################################################################
# DEBUGGING PROGRAM SHELL
##############################################################################

bash -n scriptname  # jangan jalankan perintah; hanya periksa kesalahan sintaks
set -o noexec       # alternatif (set opsi dalam skrip)

bash -v scriptname  # echo perintah sebelum menjalankannya
set -o verbose      # alternatif (set opsi dalam skrip)

bash -x scriptname  # echo perintah setelah pemrosesan baris perintah
set -o xtrace       # alternatif (set opsi dalam skrip)

trap 'echo $varname' EXIT  # berguna ketika Anda ingin mencetak nilai variabel saat skrip Anda keluar

function errtrap {
  es=$?
  echo "ERROR baris $1: Perintah keluar dengan status $es."
}

trap 'errtrap $LINENO' ERR  # dijalankan setiap kali perintah dalam skrip atau fungsi yang mengelilingi keluar dengan status tidak nol

function dbgtrap {
  echo "badvar adalah $badvar"
}

trap dbgtrap DEBUG  # menyebabkan kode trap dieksekusi sebelum setiap pernyataan dalam fungsi atau skrip
# ...bagian kode di mana masalah terjadi...
trap - DEBUG  # matikan trap DEBUG

function returntrap {
  echo "Sebuah pengembalian terjadi"
}

trap returntrap RETURN  # dijalankan setiap kali fungsi shell atau skrip yang dijalankan dengan perintah . atau source selesai dieksekusi

##############################################################################
# WARNA DAN LATAR BELAKANG
##############################################################################
# catatan: \e atau \x1B juga berfungsi sebagai pengganti \033
# Reset
Color_Off='\033[0m' # Reset Teks

# Warna Reguler
Black='\033[0;30m'  # Hitam
Red='\033[0;31m'    # Merah
Green='\033[0;32m'  # Hijau
Yellow='\033[0;33m' # Kuning
Blue='\033[0;34m'   # Biru
Purple='\033[0;35m' # Ungu
Cyan='\033[0;36m'   # Cyan
White='\033[0;97m'  # Putih

# Warna tambahan
LGrey='\033[0;37m'  # Abu-abu Muda
DGrey='\033[0;90m'  # Abu-abu Gelap
LRed='\033[0;91m'   # Merah Muda
LGreen='\033[0;92m' # Hijau Muda
LYellow='\033[0;93m'# Kuning Muda
LBlue='\033[0;94m'  # Biru Muda
LPurple='\033[0;95m'# Ungu Muda
LCyan='\033[0;96m'  # Cyan Muda

# Tebal
BBlack='\033[1;30m' # Hitam
BRed='\033[1;31m'   # Merah
BGreen='\033[1;32m' # Hijau
BYellow='\033[1;33m'# Kuning
BBlue='\033[1;34m'  # Biru
BPurple='\033[1;35m'# Ungu
BCyan='\033[1;36m'  # Cyan
BWhite='\033[1;37m' # Putih

# Garis Bawah
UBlack='\033[4;30m' # Hitam
URed='\033[4;31m'   # Merah
UGreen='\033[4;32m' # Hijau
UYellow='\033[4;33m'# Kuning
UBlue='\033[4;34m'  # Biru
UPurple='\033[4;35m'# Ungu
UCyan='\033[4;36m'  # Cyan
UWhite='\033[4;37m' # Putih

# Latar Belakang
On_Black='\033[40m' # Hitam
On_Red='\033[41m'   # Merah
On_Green='\033[42m' # Hijau
On_Yellow='\033[43m'# Kuning
On_Blue='\033[44m'  # Biru
On_Purple='\033[45m'# Ungu
On_Cyan='\033[46m'  # Cyan
On_White='\033[47m' # Putih

# Contoh penggunaan
echo -e "${Green}Ini adalah teks HIJAU${Color_Off} dan teks normal"
echo -e "${Red}${On_White}Ini adalah teks Merah di latar belakang Putih${Color_Off}"
# opsi -e adalah wajib, ini mengaktifkan interpretasi escape backslash
printf "${Red} Ini adalah merah \n"


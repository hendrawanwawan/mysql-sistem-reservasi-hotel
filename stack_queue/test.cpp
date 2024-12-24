//create database UAS_BDII_13020230309_Hendrawan;
//
//use UAS_BDII_13020230309_Hendrawan;
//
//CREATE TABLE tamu (
//        id_tamu INT PRIMARY KEY,
//nama_lengkap VARCHAR(100) NOT NULL,
//        telepon VARCHAR(20) NOT NULL,
//        email VARCHAR(50) NOT NULL
//);
//
//
//
//
//
//-- Tabel Reservasi
//CREATE TABLE reservasi (
//        id_reservasi INT PRIMARY KEY,
//id_tamu INT NOT NULL,
//        id_kamar INT NOT NULL,
//id_karyawan INT NOT NULL,
//        status_reservasi VARCHAR(20) NOT NULL,
//        tanggal_check_in DATE NOT NULL,
//tanggal_check_out DATE NOT NULL,
//        FOREIGN KEY (id_tamu) REFERENCES tamu(id_tamu),
//        FOREIGN KEY (id_kamar) REFERENCES kamar(id_kamar),
//        FOREIGN KEY (id_karyawan) REFERENCES karyawan(id_karyawan)
//);
//
//-- Tabel Transaksi
//CREATE TABLE transaksi (
//        id_transaksi INT PRIMARY KEY,
//id_reservasi INT NOT NULL,
//        tanggal_transaksi DATETIME NOT NULL,
//metode_pembayaran VARCHAR(50) NOT NULL,
//        FOREIGN KEY (id_reservasi) REFERENCES reservasi(id_reservasi)
//
//);
//alter table transaksi add
//id_tamu int not null;
//alter table transaksi add foreign key (id_tamu) references tamu(id_tamu);
//
//-- Tabel Kamar
//CREATE TABLE kamar (
//        id_kamar INT PRIMARY KEY,
//tipe_kamar VARCHAR(50) NOT NULL,
//        status_kamar VARCHAR(20) NOT NULL,
//        nama_tipe VARCHAR(50) NOT NULL,
//        kapasitas INT NOT NULL,
//harga_permalam DECIMAL(10,2) NOT NULL
//);
//
//alter table kamar add id_karyawan int not null;
//-- alter table kamar add
//-- foreign key(id_karyawan) references karyawan(id_karyawan);
//
//
//
//alter table kamar add
//id_tamu int not null;
//alter table kamar add foreign key (id_tamu) references tamu(id_tamu);
//
//
//-- Tabel Karyawan
//CREATE TABLE karyawan (
//        id_karyawan INT PRIMARY KEY,
//nama VARCHAR(100) NOT NULL,
//        nomor_telepon VARCHAR(20) NOT NULL,
//        posisi VARCHAR(50) NOT NULL
//);
//
//
//
//select *from tamu;
//insert into tamu (id_tamu,nama_lengkap,telepon,email) values
//(1,'asep','082258198781','asep@gmail.com'),
//(2,'bibi','082258198782','bibi@gmail.com'),
//(3,'caca','082258198783','caca@gmail.com'),
//(4,'dede','082258198784','dede@gmail.com'),
//(5,'ela','082258198785','ela@gmail.com'),
//(6,'fahmi','082258198786','fahmi@gmail.com'),
//(7,'gali','082258198787','gali@gmail.com'),
//(8,'halima','082258198788','halima@gmail.com'),
//(9,'ila','082258198789','ila@gmail.com'),
//(10,'jojo','082258198790','jojo@gmail.com');
//
//select *from tamu;
//select *from karyawan;
//insert into karyawan (id_karyawan,nama,nomor_telepon,posisi) values
//(101,'lala','082258198881','general manager'),
//(102,'moana','082258198882','assistant general manager'),
//(103,'nana','082258198883','room division manager'),
//(104,'ola','082258198884','food&BeverageManager'),
//(105,'pariz','082258198885','humanCapital'),
//(106,'ani','082258198886','marketing&sales'),
//(107,'bobi','082258198887','finance Manager'),
//(108,'cantika','082258198888','engineer'),
//(109,'dodi','082258198889','security director'),
//(110,'emi','082258198890','OB');
//
//
//desc kamar;
//select *from kamar;
//insert into kamar (id_kamar,tipe_kamar,status_kamar,nama_tipe,kapasitas,harga_permalam,id_tamu,id_karyawan) values
//(501,'standar room','occupied','single room','1','150000.00',1,110),
//(502,'standar room','occupied','double room','2','200000.00',2,110),
//(503,'deluxe room','occupied','triple room','3','300000.00',3,110),
//(504,'suite','Occupied clean','single room','1','250000.00',4,110),
//(505,'suite','Occupied clean','single room','1','250000.00',5,110),
//(506,'junior suite','Occupied ','single room','2','260000.00',6,110),
//(507,'standar room','Occupied ','single room','1','150000.00',7,110),
//(508,'standar room','Occupied clean','single room','1','150000.00',8,110),
//(509,'deluxe room','Occupied clean','double room','2','200000.00',9,110),
//(510,'deluxe room','Occupied ','double room','2','200000.00',10,110);
//
//
//desc reservasi;
//select *from reservasi;
//insert into reservasi values
//        (601,1,501,101,'terisi','2024/12/11','2024/12/14'),
//(602,2,502,102,'terisi','2024/12/12','2024/12/13'),
//(603,3,503,103,'terisi','2024/12/10','2024/12/15'),
//(604,4,504,104,'terisi','2024/12/10','2024/12/13'),
//(605,5,505,105,'terisi','2024/12/11','2024/12/14'),
//(606,6,506,106,'terisi','2024/12/12','2024/12/16'),
//(607,7,507,107,'terisi','2024/12/12','2024/12/14'),
//(608,8,508,108,'terisi','2024/12/12','2024/12/13'),
//(609,9,509,109,'terisi','2024/12/10','2024/12/14'),
//(610,9,510,110,'terisi','2024/12/10','2024/12/12');
//
//
//desc transaksi;
//select *from transaksi;
//insert into transaksi values
//        (701,601,'2024/12/11','cash',1),
//(702,602,'2024/12/12','cash',2),
//(703,603,'2024/12/10','cash',3),
//(704,604,'2024/12/10','cash',4),
//(705,605,'2024/12/11','debit',5),
//(706,606,'2024/12/12','debit',6),
//(707,607,'2024/12/12','debit',7),
//(708,608,'2024/12/12','cash',8),
//(709,609,'2024/12/10','cash',9),
//(710,610,'2024/12/10','debit',10);
//
//-- show create table kamar;
//
//-- 'kamar', 'CREATE TABLE `kamar` (\n  `id_kamar` int NOT NULL,\n  `tipe_kamar` varchar(50) NOT NULL,\n  `status_kamar` varchar(20) NOT NULL,\n  `nama_tipe` varchar(50) NOT NULL,\n  `kapasitas` int NOT NULL,\n  `harga_permalam` decimal(10,2) NOT NULL,\n  `id_karyawan` int NOT NULL,\n  PRIMARY KEY (`id_kamar`),\n  KEY `id_karyawan` (`id_karyawan`),\n  CONSTRAINT `kamar_ibfk_1` FOREIGN KEY (`id_karyawan`) REFERENCES `karyawan` (`id_karyawan`),\n  CONSTRAINT `kamar_ibfk_2` FOREIGN KEY (`id_karyawan`) REFERENCES `karyawan` (`id_karyawan`)\n) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci'
//
//
//-- alter table kamar drop foreign key kamar_ibfk_1;
//
//-- ALTER TABLE kamar DROP FOREIGN KEY kamar_ibfk_1;
//
//
//SELECT t.id_tamu, t.nama_lengkap, t.telepon, t.email
//        FROM tamu t
//JOIN reservasi r ON t.id_tamu = r.id_tamu;
//
//select tamu.id_tamu, tamu.nama_lengkap, tamu.telepon, tamu.email from tamu join reservasi ON tamu.id_tamu=reservasi.id_tamu;
//
//
//select k.tipe_kamar, sum(k.harga_permalam) AS total_pendapatan from kamar k
//        join reservasi r on k.id_kamar = r.id_kamar group by k.tipe_kamar;
//
//SELECT k.tipe_kamar, SUM(k.harga_permalam) AS total_pendapatan
//FROM kamar k
//        JOIN reservasi r ON k.id_kamar = r.id_kamar
//GROUP BY k.tipe_kamar;
//
//SELECT * FROM reservasi
//        WHERE id_tamu = 3;
//
//SELECT status_kamar, COUNT(*) AS jumlah_kamar FROM
//        kamar GROUP BY status_kamar;
//
//Select *from kamar;
//
//SELECT status_kamar, COUNT(*) AS jumlah_kamar
//FROM kamar
//GROUP BY status_kamar;
//
//
//SELECT k.id_karyawan, k.nama, k.posisi FROM karyawan k
//JOIN kamar ka ON k.id_karyawan = ka.id_karyawan
//where ka.id_kamar = 'suite';
//
//SELECT metode_pembayaran, COUNT(*) AS jumlah_transaksi
//FROM transaksi
//GROUP BY metode_pembayaran;
//
//SELECT t.nama_lengkap, t.telepon, t.email FROM tamu t
//JOIN reservasi r ON t.id_tamu = r.id_tamu
//JOIN kamar k ON r.id_kamar = k.id_kamar
//WHERE k.kapasitas = 2;
//
//SELECT r.tanggal_check_in, r.tanggal_check_out FROM tamu t
//JOIN reservasi r ON t.id_tamu = r.id_tamu
//WHERE t.email = 'asep@gmail.com';
//
//SELECT k.nama FROM karyawan k
//JOIN reservasi r ON k.id_karyawan = r.id_karyawan
//WHERE r.tanggal_check_in = '2024-12-12';
//
//SELECT k.nama
//        FROM karyawan k
//JOIN reservasi r ON k.id_karyawan = r.id_karyawan
//WHERE r.tanggal_check_in = '2024-12-12';
//
//SELECT id_kamar, COUNT(*) AS jumlah_reservasi
//FROM reservasi
//group by id_kamar
//        HAVING COUNT(*) >= 1;
//
//SELECT SUM(k.harga_permalam) AS total_pendapatan FROM kamar k
//        JOIN reservasi r ON k.id_kamar = r.id_kamar;
//
//SELECT *FROM kamar;
//
//SELECT AVG(harga_permalam) AS rata_rata_harga FROM KAMAR;
//
//SELECT COUNT(*) AS jumlah_deluxe_room FROM kamar
//WHERE tipe_kamar = 'deluxe room';
//
//
//SELECT MAX(harga_permalam) AS harga_termahal, MIN(harga_permalam) AS harga_termurah FROM KAMAR;
//
//SELECT AVG(datediff(tanggal_check_out, tanggal_check_in)) AS rata_rata_durasi
//FROM reservasi;
//
//SELECT *FROM reservasi;
//
//SELECT metode_pembayaran, COUNT(*) AS jumlah_transaksi FROM transaksi
//GROUP BY metode_pembayaran;
//
//SELECT COUNT(DISTINCT id_tamu) AS jumlah_tamu FROM reservasi;
//
//SELECT tipe_kamar, AVG(harga_permalam) AS rata_rata_harga FROM kamar
//GROUP BY tipe_kamar;
//
//SELECT COUNT(*) AS jumlah_kamar_occupied FROM kamar
//WHERE status_kamar = 'Occupied';
//
//SELECT COUNT(*) AS jumlah_transaksi_desember FROM transaksi
//WHERE month(tanggal_transaksi) = 12 and year(tanggal_transaksi) = 2024;
//
//SELECT SUM(k.harga_permalam) AS total_pendapatan_debit FROM kamar k
//        join reservasi r ON k.id_kamar = r.id_kamar
//JOIN transaksi t ON r.id_kamar = t.id_reservasi
//WHERE t.metode_pembayaran = 'cash';
//SELECT *FROM TRANSAKSI;
//
//
//SELECT *from TAMU
//        ORDER BY nama_lengkap ASC;
//SELECT *from TAMU;
//
//SELECT *FROM KAMAR
//        ORDER BY harga_permalam DESC;
//
//SELECT *FROM reservasi
//        ORDER BY tanggal_check_in ASC;
//
//SELECT *
//        FROM transaksi
//        ORDER BY tanggal_transaksi DESC;
//
//SELECT *
//        FROM reservasi
//        ORDER BY status_reservasi ASC, tanggal_check_in ASC;
//
//SELECT distinct t.nama_lengkap FROM tamu t
//JOIN reservasi r ON t.id_tamu = r.id_tamu
//ORDER BY t.nama_lengkap ASC;
//
//SELECT metode_pembayaran, COUNT(*) AS jumlah_transaksi
//FROM transaksi
//GROUP BY metode_pembayaran
//        ORDER BY jumlah_transaksi DESC;
//
//SELECT *
//        FROM kamar
//        WHERE status_kamar = 'occupied'
//ORDER BY kapasitas DESC;
//SELECT *FROM kamar;
//
//SELECT t.nama_lengkap, k.tipe_kamar, r.tanggal_check_in
//        FROM tamu t
//JOIN reservasi r ON t.id_tamu = r.id_tamu
//JOIN kamar k ON r.id_kamar = k.id_kamar
//ORDER BY t.nama_lengkap ASC;
//
//SELECT k.nama, COUNT(c.id_kamar) AS jumlah_kamar FROM karyawan k
//        JOIN kamar c ON k.id_karyawan = c.id_karyawan
//GROUP BY k.nama
//        ORDER BY jumlah_kamar DESC;
//
//SELECT * from kamar
//        WHERE harga_permalam BETWEEN 150000 AND 250000;
//
//SELECT *
//        FROM tamu
//        WHERE telepon BETWEEN '082258198782' AND '082258198785';
//
//
//SELECT *FROM kamar
//        WHERE tipe_kamar IN('deluxe room', 'suite', 'junior suite');
//
//SELECT *
//        FROM karyawan
//        WHERE posisi IN ('general manager', 'assistant general manager', 'room division manager');
//
//SELECT *FROM TAMU
//        WHERE email LIKE '%@gmail.com';
//
//SELECT *
//        FROM kamar
//        WHERE tipe_kamar LIKE '%suite%' OR nama_tipe LIKE '%suite%';
//
//SELECT *
//        FROM karyawan
//        WHERE nama LIKE 'C%';
//
//
//SELECT *
//        FROM reservasi
//        WHERE status_reservasi LIKE '%terisi%';
//
//SELECT *
//        FROM tamu
//        WHERE nama_lengkap LIKE '____';
//
//SELECT *
//        FROM kamar
//        WHERE kapasitas BETWEEN 2 AND 4;
//
//SELECT *
//        FROM tamu
//        WHERE nama_lengkap LIKE 'A%' OR nama_lengkap LIKE 'B%';
//
//select substring(nama_lengkap, 1, 3) As nama_pendek, telepon from tamu;
//
//Select nama, char_length(nama) As panjang_nama from karyawan;
//
//SELECT SUM(kamar.harga_permalam) AS total_pendapatan
//FROM transaksi
//JOIN reservasi ON transaksi.id_reservasi = reservasi.id_reservasi
//JOIN kamar ON reservasi.id_kamar = kamar.id_kamar;
//
//SELECT id_kamar, CONCAT('Rp', FORMAT(harga_permalam, 0)) AS harga_format
//FROM kamar;
//
//SELECT UPPER(nama_lengkap) AS nama_besar, telepon, email
//FROM tamu;
//
//SELECT id_kamar, CONCAT(status_kamar, ' - Clean') AS status_modifikasi
//FROM kamar;
//
//SELECT id_reservasi, DATEDIFF(tanggal_check_out, tanggal_check_in) AS durasi_menginap From reservasi;
//
//SELECT nama_lengkap, SUBSTRING_INDEX(email, '@', 1) AS email_tanpa_domain
//FROM tamu;
//SELECT AVG(harga_permalam) AS rata_rata_harga
//FROM kamar;
//
//SELECT id_transaksi, DATE_FORMAT(tanggal_transaksi, '%H:%i') AS waktu_transaksi
//FROM transaksi;
//
//select id_kamar, harga_permalam, (harga_permalam * 3) As harga_3_malam from kamar;
//
//SELECT id_reservasi, CONCAT(status_reservasi, ' (Confirmed)') AS status_konfirmasi
//FROM reservasi
//WHERE status_reservasi = 'terisi';
//select *from reservasi;
//
//SELECT nama_lengkap
//FROM tamu
//WHERE (LENGTH(nama_lengkap) - LENGTH(REPLACE(nama_lengkap, 'a', ''))) > 1;
//
//SELECT id_transaksi, DATE_FORMAT(tanggal_transaksi, '%M %Y') AS bulan_tahun
//FROM transaksi;
//
//
//SELECT
//        tamu.nama_lengkap,
//tamu.telepon,
//kamar.tipe_kamar,
//kamar.status_kamar
//        FROM
//reservasi
//        JOIN
//tamu ON reservasi.id_tamu = tamu.id_tamu
//JOIN
//        kamar ON reservasi.id_kamar = kamar.id_kamar;
//
//SELECT
//        karyawan.nama AS nama_karyawan,
//tamu.nama_lengkap AS nama_tamu
//        FROM
//reservasi
//        JOIN
//karyawan ON reservasi.id_karyawan = karyawan.id_karyawan
//JOIN
//        tamu ON reservasi.id_tamu = tamu.id_tamu;
//
//SELECT
//        reservasi.id_reservasi,
//tamu.nama_lengkap,
//kamar.tipe_kamar,
//DATEDIFF(reservasi.tanggal_check_out, reservasi.tanggal_check_in) AS durasi_menginap
//FROM
//        reservasi
//JOIN
//        tamu ON reservasi.id_tamu = tamu.id_tamu
//JOIN
//        kamar ON reservasi.id_kamar = kamar.id_kamar;
//
//
//SELECT
//        transaksi.id_transaksi,
//tamu.nama_lengkap AS nama_tamu,
//karyawan.nama AS nama_karyawan,
//transaksi.metode_pembayaran
//        FROM
//transaksi
//        JOIN
//reservasi ON transaksi.id_reservasi = reservasi.id_reservasi
//JOIN
//        tamu ON reservasi.id_tamu = tamu.id_tamu
//JOIN
//        karyawan ON reservasi.id_karyawan = karyawan.id_karyawan;
//
//
//
//Berikut adalah beberapa soal tentang selection data dengan JOIN table menggunakan database sistem reservasi hotel yang telah Anda buat.
//
//SOAL DAN PENYELESAIAN MENGGUNAKAN JOIN TABLE
//1. Tampilkan nama tamu, nomor telepon, tipe kamar, dan status kamar dari reservasi mereka.
//Soal: Gunakan JOIN untuk menggabungkan tabel tamu, reservasi, dan kamar.
//
//SQL Query:
//
//sql
//        Copy code
//        SELECT
//tamu.nama_lengkap,
//tamu.telepon,
//kamar.tipe_kamar,
//kamar.status_kamar
//        FROM
//reservasi
//        JOIN
//tamu ON reservasi.id_tamu = tamu.id_tamu
//JOIN
//        kamar ON reservasi.id_kamar = kamar.id_kamar;
//Penjelasan:
//
//JOIN menggabungkan tabel berdasarkan relasi foreign key.
//Data yang diambil berasal dari tabel tamu, reservasi, dan kamar.
//2. Tampilkan nama karyawan yang melayani tamu beserta nama tamu yang dilayani.
//Soal: Gabungkan tabel karyawan dan tamu melalui tabel reservasi.
//
//SQL Query:
//
//sql
//        Copy code
//        SELECT
//karyawan.nama AS nama_karyawan,
//tamu.nama_lengkap AS nama_tamu
//        FROM
//reservasi
//        JOIN
//karyawan ON reservasi.id_karyawan = karyawan.id_karyawan
//JOIN
//        tamu ON reservasi.id_tamu = tamu.id_tamu;
//Penjelasan:
//
//Data tamu dan karyawan dihubungkan melalui tabel reservasi.
//3. Tampilkan ID reservasi, nama tamu, tipe kamar, dan durasi menginap.
//Soal: Hitung durasi menginap menggunakan data dari tabel reservasi dan tampilkan tipe kamar.
//
//SQL Query:
//
//sql
//        Copy code
//        SELECT
//reservasi.id_reservasi,
//tamu.nama_lengkap,
//kamar.tipe_kamar,
//DATEDIFF(reservasi.tanggal_check_out, reservasi.tanggal_check_in) AS durasi_menginap
//FROM
//        reservasi
//JOIN
//        tamu ON reservasi.id_tamu = tamu.id_tamu
//JOIN
//        kamar ON reservasi.id_kamar = kamar.id_kamar;
//Penjelasan:
//
//DATEDIFF() digunakan untuk menghitung durasi menginap.
//4. Tampilkan semua transaksi, termasuk nama tamu, nama karyawan, dan metode pembayaran.
//Soal: Gunakan JOIN untuk menggabungkan tabel transaksi, reservasi, tamu, dan karyawan.
//
//SQL Query:
//
//sql
//        Copy code
//        SELECT
//transaksi.id_transaksi,
//tamu.nama_lengkap AS nama_tamu,
//karyawan.nama AS nama_karyawan,
//transaksi.metode_pembayaran
//        FROM
//transaksi
//        JOIN
//reservasi ON transaksi.id_reservasi = reservasi.id_reservasi
//JOIN
//        tamu ON reservasi.id_tamu = tamu.id_tamu
//JOIN
//        karyawan ON reservasi.id_karyawan = karyawan.id_karyawan;
//
//SELECT
//        kamar.id_kamar,
//kamar.tipe_kamar,
//kamar.status_kamar,
//tamu.nama_lengkap AS nama_tamu
//        FROM
//kamar
//        JOIN
//reservasi ON kamar.id_kamar = reservasi.id_kamar
//JOIN
//        tamu ON reservasi.id_tamu = tamu.id_tamu
//WHERE
//        kamar.status_kamar LIKE '%Occupied%';
//
//
//
//SELECT
//        karyawan.nama AS nama_karyawan,
//SUM(kamar.harga_permalam) AS total_pendapatan
//FROM
//        reservasi
//JOIN
//        transaksi ON reservasi.id_reservasi = transaksi.id_reservasi
//JOIN
//        kamar ON reservasi.id_kamar = kamar.id_kamar
//JOIN
//        karyawan ON reservasi.id_karyawan = karyawan.id_karyawan
//GROUP BY
//karyawan.nama;
//
//SELECT
//        reservasi.id_reservasi,
//reservasi.tanggal_check_in,
//reservasi.tanggal_check_out,
//transaksi.tanggal_transaksi,
//transaksi.metode_pembayaran
//        FROM
//reservasi
//        JOIN
//transaksi ON reservasi.id_reservasi = transaksi.id_reservasi;
//
//
//SELECT
//        kamar.id_kamar,
//kamar.tipe_kamar,
//kamar.status_kamar
//        FROM
//kamar
//        LEFT JOIN
//        reservasi ON kamar.id_kamar = reservasi.id_kamar
//WHERE
//        reservasi.id_kamar IS NULL;
//
//
//SELECT
//        tamu.nama_lengkap,
//COUNT(reservasi.id_reservasi) AS jumlah_reservasi
//FROM
//        tamu
//JOIN
//        reservasi ON tamu.id_tamu = reservasi.id_tamu
//GROUP BY
//tamu.nama_lengkap;
//
//
//SELECT
//        transaksi.id_transaksi,
//tamu.nama_lengkap,
//(DATEDIFF(reservasi.tanggal_check_out, reservasi.tanggal_check_in) * kamar.harga_permalam) AS total_biaya
//FROM
//        transaksi
//JOIN
//        reservasi ON transaksi.id_reservasi = reservasi.id_reservasi
//JOIN
//        kamar ON reservasi.id_kamar = kamar.id_kamar
//JOIN
//        tamu ON reservasi.id_tamu = tamu.id_tamu;
//
//
//DELIMITER //
//
//CREATE PROCEDURE TambahTamu(
//        IN p_nama_lengkap varchar(100),
//        IN p_telepon varchar(20),
//        IN p_email varchar(50))
//
//BEGIN
//        INSERT INTO tamu (nama_lengkap, telepon, email)
//VALUES (p_nama_lengkap, p_telepoon, p_email);
//END //
//
//DELIMITER ;
//DROP PROCEDURE IF EXISTS tambah_tamu;
//
//SELECT *FROM tamu;
//CALL TambahTamu('Hendra', '082123456789', 'hendra@gmail.com');
//
//DELIMITER //
//
//CREATE PROCEDURE Tambah(
//        IN p_nama_lengkap VARCHAR(100),
//        IN p_telepon VARCHAR(20),
//        IN p_email VARCHAR(50)
//)
//BEGIN
//        INSERT INTO tamu (nama_lengkap, telepon, email)
//VALUES (p_nama_lengkap, p_telepon, p_email);
//END //
//
//DELIMITER ;
//
//CALL Tambah('Hendra', '082123456789', 'hendra@gmail.com');
//
//
//DELIMITER //
//
//CREATE PROCEDURE HitungPendapatan(
//        IN p_id_karyawan INT,
//        OUT total_pendapatan DECIMAL(10,2)
//)
//BEGIN
//        SELECT SUM(kamar.harga_permalam)
//INTO total_pendapatan
//FROM reservasi
//JOIN kamar ON reservasi.id_kamar = kamar.id_kamar
//WHERE reservasi.id_karyawan = p_id_karyawan;
//END //
//
//DELIMITER ;
//
//CALL HitungPendapatan(101, @pendapatan);
//SELECT @pendapatan AS TotalPendapatan;
//
//DELIMITER //
//
//CREATE PROCEDURE PerbaruiStatusKamar(
//        INOUT p_id_kamar INT,
//        IN p_status_kamar VARCHAR(20)
//)
//BEGIN
//        UPDATE kamar
//        SET status_kamar = p_status_kamar
//WHERE id_kamar = p_id_kamar;
//END //
//
//DELIMITER ;
//
//SET @id_kamar = 501;
//CALL PerbaruiStatusKamar(@id_kamar, 'Vacant Clean');
//select *FROM kamar;
//
//
//DELIMITER //
//create function HitungDurasiNginap(
//        p_tanggal_check_in DATE,
//        p_tanggal_check_out DATE
//)
//
//RETURNS int
//        deterministic
//BEGIN
//        RETURN DATEDIFF(p_tanggal_check_out, p_tanggal_check_in);
//END //
//
//DELIMITER ;
//SELECT HitungDurasiNginap('2024-12-10', '2024-12-14') AS DurasiMenginap;
//
//
//
//DELIMITER //
//CREATE FUNCTION HITUNGTOTALBIAYA(
//        p_harga_permalam DECIMAL(10,2),
//p_durasi INT
//)
//
//RETURNS DECIMAL(10,2)
//deterministic
//        BEGIN
//RETURN p_harga_permalam * p_durasi;
//END //
//DELIMITER ;
//SELECT HITUNGTOTALBIAYA(150000.00, 4) AS TOTALBiaya;
//
//
//DELIMITER //
//
//CREATE PROCEDURE DetailReservasi(
//        IN p_id_reservasi INT
//)
//BEGIN
//        SELECT
//reservasi.id_reservasi,
//tamu.nama_lengkap AS nama_tamu,
//kamar.tipe_kamar,
//reservasi.tanggal_check_in,
//reservasi.tanggal_check_out
//        FROM
//reservasi
//        JOIN
//tamu ON reservasi.id_tamu = tamu.id_tamu
//JOIN
//        kamar ON reservasi.id_kamar = kamar.id_kamar
//WHERE
//        reservasi.id_reservasi = p_id_reservasi;
//END //
//
//DELIMITER ;
//
//CALL DetailReservasi(601);
//
//
//DELIMITER //
//CREATE PROCEDURE cariTamu(
//        IN p_nama_lengkap varchar(100)
//)
//
//BEGIN
//        SELECT id_tamu, nama_lengkap, telepon, email
//        from TAMU
//        WHERE nama_lengkap LIKE CONCAT('%', p_nama_lengkap, '%');
//
//END //
//DELIMITER ;
//
//CALL CariTamu('a');
//
//
//DELIMITER //
//
//CREATE FUNCTION CekStatusKamar(
//        p_id_kamar INT
//)
//RETURNS VARCHAR(20)
//DETERMINISTIC
//        BEGIN
//DECLARE status_kamar VARCHAR(20);
//SELECT
//        status_kamar
//INTO
//        status_kamar
//FROM
//        kamar
//WHERE
//        id_kamar = p_id_kamar;
//RETURN status_kamar;
//END //
//
//DELIMITER ;
//
//SELECT CekStatusKamar(501) AS StatusKamar;
//
//DELIMITER //
//
//CREATE TRIGGER updateStatusKamar
//AFTER DELETE ON reservasi
//for each row
//BEGIN
//        UPDATE kamar
//        SET status_kamar = 'vacant Dirty'
//Where id_kamar = OLD.id_kamar;
//END //
//DELIMITER ;
//
//DELETE FROM reservasi WHERE id_reservasi = 601;
//SELECT * FROM kamar WHERE id_kamar = 501;
//
//CREATE TABLE summary_transaksi (
//        total_transaksi DECIMAL(10,2)
//);
//
//INSERT INTO summary_transaksi (total_transaksi) VALUES (0);
//
//DELIMITER //
//
//CREATE TRIGGER HitungTotalTransaksi
//AFTER INSERT ON transaksi
//FOR EACH ROW
//        BEGIN
//UPDATE summary_transaksi
//SET total_transaksi = total_transaksi + NEW.metode_pembayaran;
//END //
//
//DELIMITER ;
//
//INSERT INTO transaksi (id_transaksi, id_reservasi, tanggal_transaksi, metode_pembayaran, id_tamu)
//VALUES (711, 603, '2024-12-11', 200000.00, 3);
//select *from transaksi;
//SELECT * FROM summary_transaksi;



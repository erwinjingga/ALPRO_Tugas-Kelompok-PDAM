#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define admin 1000
#define BPM_R 2000
#define BPM_U 5000
#define denda 2000
#define jatuh_tempo 20

//deklarasi
float checkinput();
void menupilih();
void header();
void restart();
void menu_RT();
void menu_U();
void tl_RT1();
void tl_RT2();
void tl_RT3();
void tl_RT4();
void tl_RT5();
void tl_U1();
void tl_U2();
void tl_U3();
void rek_RT11();
void rek_RT12();
void rek_RT13();
void rek_RT14();
void rek_RT21();
void rek_RT22();
void rek_RT23();
void rek_RT24();
void rek_RT31();
void rek_RT32();
void rek_RT33();
void rek_RT34();
void rek_RT41();
void rek_RT42();
void rek_RT43();
void rek_RT44();
void rek_RT51();
void rek_RT52();
void rek_RT53();
void rek_RT54();
void rek_U11();
void rek_U12();
void rek_U13();
void rek_U14();
void rek_U21();
void rek_U22();
void rek_U23();
void rek_U24();
void rek_U31();
void rek_U32();
void rek_U33();
void rek_U34();

//header
void header(){
    printf("\t\t\t|==================================================================|\n");
    printf("\t\t\t|-----------------------------KELOMPOK 25--------------------------|\n");
    printf("\t\t\t|==================================================================|\n");
    printf("\t\t\t|  Anggota Kelompok:                      |  NIM:                  |\n");
    printf("\t\t\t|  >> Athaya Juliant Purnama              |  >> 2205551027         |\n");
    printf("\t\t\t|  >> I Gede Erwan Widi Separsa           |  >> 2205551044         |\n");
    printf("\t\t\t|==================================================================|\n");
}

//menu kelompok pelanggan
void menupilih(){
    printf("\n\t\t\t====================================================================\n");
    printf("\t\t\t|                       KELOMPOK PELANGGAN                         |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                        1. Rumah Tangga                           |\n");
    printf("\t\t\t|                        2. Usaha                                  |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Pilih Kelompok : ");
    int KP=checkinput();
    switch(KP){
        case 1:
        menu_RT();
        break;

        case 2:
        menu_U();
        break;

        default:
        printf("\t\t\t====================================================================\n");
    	printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
		printf("\t\t\t====================================================================\n\n");
        menupilih();
    }
}

//validasi
float checkinput(){
    char ngcek;
    float cek;
    
    if(ngcek=scanf("%f%c", &cek, &ngcek) !=2){
        fflush(stdin);
        printf("Input Angka! : ");
        return checkinput(); 
    }
    else{
        if(cek >=0){
            return cek;
        }
        else{
            fflush(stdin);
            printf("Masukkan Bilangan Positif! : ");
            return checkinput();
        }
    }
    return cek;
}

//restart menu
void restart(){
    int pil, menu;
    printf("\n\t\t\t====================================================================\n");
    printf("\t\t\t|                        ULANG KEMBALI PROGRAM                     |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                        1. Lakukan Ulang                          |\n");
    printf("\t\t\t|                        2. Keluar Program                         |\n");
    printf("\t\t\t====================================================================\n\n");
    pil=checkinput();
    switch(pil){
        case 1:
        system("clear");
        menupilih();
        
        case 2:
        system("clear");
        break;
        
        default:
        printf("\t\t\t====================================================================\n");
    	printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
		printf("\t\t\t====================================================================\n\n");
        restart();
    }
}

//main program
int main(){
    header();
    menupilih();;
    return 0;
}

//menu kelompok pelanggan >> kategori rumah tangga
void menu_RT()
{
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                REKENING AIR KATEGORI RUMAH TANGGA                |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan pilih lebar jalan Anda:                 |\n");
    printf("\t\t\t|                1. Lebar jalan 0 meter - 3,99 meter               |\n");
    printf("\t\t\t|                2. Lebar jalan 4 meter - 6,99 meter               |\n");
    printf("\t\t\t|                3. Lebar jalan 7 meter - 10 meter                 |\n");
    printf("\t\t\t|                4. Lebar jalan lebih dari 10 meter                |\n");
    printf("\t\t\t|                5. Rumah sekaligus toko atau kios                 |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Anda memilih kategori nomor: ");
    int KP = checkinput();
    

    switch(KP){
        case 1:
            tl_RT1();
            break;
        case 2:
            tl_RT2();
            break;
        case 3:
            tl_RT3();
            break;
        case 4:
            tl_RT4();
            break;
        case 5:
            tl_RT5();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            menu_RT();
    }

}

//menu kelompok pelanggan >> kategori usaha
void menu_U()
{
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                   REKENING AIR KATEGORI USAHA                    |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan pilih lebar jalan Anda:                 |\n");
    printf("\t\t\t|                1. Lebar jalan 0 meter - 6,99 meter               |\n");
    printf("\t\t\t|                2. Lebar jalan 7 meter - 10 meter                 |\n");
    printf("\t\t\t|                3. Lebar jalan lebih dari 10 meter                |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t                   Anda memilih kategori nomor:");
    int KP = checkinput();

    switch(KP)
    {
        case 1:
            tl_U1();
            break;
        case 2:
            tl_U2();
            break;
        case 3:
            tl_U3();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            menu_U();
    }
}


//kategori rumah tangga >> lebar jalan 1. Lebar jalan 0 meter - 3,99 meter
void tl_RT1(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|          Silahkan pilih kapasitas tegangan listrik Anda:         |\n");
    printf("\t\t\t|                    1. 450 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    2. 900 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    3. 1300 Volt Ampere (Watt)                    |\n");
    printf("\t\t\t|               4. lebih dari 1300 Volt Ampere (Watt)              |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t                   Anda memilih kategori nomor:");
    int KP = checkinput();
    switch (KP){
        case 1:
            rek_RT11();
            break;
        case 2:
            rek_RT12();
            break;
        case 3:
            rek_RT31();
            break;
        case 4:
            rek_RT32();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            tl_RT1();
        }
}
//kategori rumah tangga >> lebar jalan 2. Lebar jalan 4 meter - 6,99 meter
void tl_RT2(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|          Silahkan pilih kapasitas tegangan listrik Anda:         |\n");
    printf("\t\t\t|                    1. 450 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    2. 900 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    3. 1300 Volt Ampere (Watt)                    |\n");
    printf("\t\t\t|               4. lebih dari 1300 Volt Ampere (Watt)              |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t                   Anda memilih kategori nomor:");
    int KP = checkinput();
    switch (KP){
        case 1:
            rek_RT13();
            break;
        case 2:
            rek_RT14();
            break;
        case 3:
            rek_RT33();
            break;
        case 4:
            rek_RT34();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            tl_RT2();
        }
}
//kategori rumah tangga >> lebar jalan 3. Lebar jalan 7 meter - 10 meter
void tl_RT3(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|          Silahkan pilih kapasitas tegangan listrik Anda:         |\n");
    printf("\t\t\t|                    1. 450 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    2. 900 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    3. 1300 Volt Ampere (Watt)                    |\n");
    printf("\t\t\t|               4. lebih dari 1300 Volt Ampere (Watt)              |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t                   Anda memilih kategori nomor:");
    int KP = checkinput();
    switch (KP){
        case 1:
            rek_RT21();
            break;
        case 2:
            rek_RT22();
            break;
        case 3:
            rek_RT41();
            break;
        case 4:
            rek_RT42();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            tl_RT3();
        }
}
//kategori rumah tangga >> lebar jalan 4. Lebar jalan lebih dari 10 meter
void tl_RT4(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|          Silahkan pilih kapasitas tegangan listrik Anda:         |\n");
    printf("\t\t\t|                    1. 450 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    2. 900 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    3. 1300 Volt Ampere (Watt)                    |\n");
    printf("\t\t\t|               4. lebih dari 1300 Volt Ampere (Watt)              |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t                   Anda memilih kategori nomor:");
    int KP = checkinput();
    switch (KP){
        case 1:
            rek_RT23();
            break;
        case 2:
            rek_RT24();
            break;
        case 3:
            rek_RT43();
            break;
        case 4:
            rek_RT44();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            tl_RT4();
        }
}
//kategori rumah tangga >> lebar jalan 5. Rumah sekaligus toko atau kios
void tl_RT5(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|          Silahkan pilih kapasitas tegangan listrik Anda:         |\n");
    printf("\t\t\t|                    1. 450 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    2. 900 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    3. 1300 Volt Ampere (Watt)                    |\n");
    printf("\t\t\t|               4. lebih dari 1300 Volt Ampere (Watt)              |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t                   Anda memilih kategori nomor:");
    int KP = checkinput();
    switch (KP){
        case 1:
            rek_RT51();
            break;
        case 2:
            rek_RT52();
            break;
        case 3:
            rek_RT53();
            break;
        case 4:
            rek_RT54();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            tl_RT5();
        }
}

//lebar jalan 1 >> rekening 1, 2, 3, 4
void rek_RT11(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=1780*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=2060*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=5880*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT11();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D1 - 1\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT12(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=2060*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=2340*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=5940*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT12();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D1 - 2\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT13(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=2340*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=2620*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=6000*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT13();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D2 - 1\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT14(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=2620*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=2900*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=6060*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT14();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D2 - 2\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

//lebar jalan 2 >> rekening 1, 2, 3, 4
void rek_RT21(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=2900*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=3180*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=6120*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT21();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D3 - 1\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT22(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=3180*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=3460*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=6180*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT22();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D3 - 2\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT23(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=3460*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=3740*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=6240*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT23();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D4 - 1\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT24(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6570*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=9650*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=9950*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT24();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D4 - 2\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

//lebar jalan 3 >> rekening 1, 2, 3, 4
void rek_RT31(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6340*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=9200*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=9600*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT31();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D1 - 3\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT32(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6420*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=9350*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=9650*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT32();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D1 - 4\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT33(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6490*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=9500*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=9800*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT33();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D2 - 3\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT34(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6570*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=9650*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=9950*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT34();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D2 - 4\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

//lebar jalan 4 >> rekening 1, 2, 3, 4
void rek_RT41(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6640*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=9800*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=10100*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT41();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D3 - 3\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT42(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6720*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=9950*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=10250*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT42();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D3 - 4\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT43(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6790*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=10100*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=10400*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT43();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D4 - 3\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT44(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6870*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=10250*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=10550*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT44();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D4 - 4\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

//lebar jalan 5 >> rekening 1, 2, 3, 4
void rek_RT51(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=6940*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=10400*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=10700*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT51();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D5 - 1\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT52(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=7020*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=10550*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=10850*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT52();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D5 - 2\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT53(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=7090*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=10700*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=11000*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT53();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D5 - 3\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_RT54(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=7170*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=10850*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=11150*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_RT54();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_r = BPM_R;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Rumah Tangga\n");
    printf("\t\t\t| Golongan Meter | D5 - 4\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_r);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_R + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void tl_U1() 
{
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|          Silahkan pilih kapasitas tegangan listrik Anda:         |\n");
    printf("\t\t\t|                    1. 450 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    2. 900 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    3. 1300 Volt Ampere (Watt)                    |\n");
    printf("\t\t\t|               4. lebih dari 1300 Volt Ampere (Watt)              |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t                   Anda memilih kategori nomor:");
    int KP = checkinput();

    switch (KP)
    {
        case 1:
            rek_U11();
            break;
        case 2:
            rek_U12();
            break;
        case 3:
            rek_U13();
            break;
        case 4:
            rek_U14();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            tl_U1();
    }
}

void tl_U2() 
{
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|          Silahkan pilih kapasitas tegangan listrik Anda:         |\n");
    printf("\t\t\t|                    1. 450 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    2. 900 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    3. 1300 Volt Ampere (Watt)                    |\n");
    printf("\t\t\t|               4. lebih dari 1300 Volt Ampere (Watt)              |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t                   Anda memilih kategori nomor:");
    int KP = checkinput();

    switch (KP)
    {
        case 1:
            rek_U21();
            break;
        case 2:
            rek_U22();
            break;
        case 3:
            rek_U23();
            break;
        case 4:
            rek_U24();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            tl_U2();
    }
}

void tl_U3() 
{
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|          Silahkan pilih kapasitas tegangan listrik Anda:         |\n");
    printf("\t\t\t|                    1. 450 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    2. 900 Volt Ampere (Watt)                     |\n");
	printf("\t\t\t|                    3. 1300 Volt Ampere (Watt)                    |\n");
    printf("\t\t\t|               4. lebih dari 1300 Volt Ampere (Watt)              |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t                   Anda memilih kategori nomor:");
    int KP = checkinput();

    switch (KP)
    {
        case 1:
            rek_U31();
            break;
        case 2:
            rek_U32();
            break;
        case 3:
            rek_U33();
            break;
        case 4:
            rek_U34();
            break;
        default:
            system("clear");
            printf("\t\t\t====================================================================\n");
    		printf("\t\t\t|                Input yang Anda pilih tidak valid!                |\n");
			printf("\t\t\t====================================================================\n\n");
            tl_U3();
    }
}

//lebar jalan 1 >> rekening 1, 2, 3, 4
void rek_U11(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=9200*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=9850*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=10950*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U11();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E1 - 1\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_U12(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=9500*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=10150*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=11250*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U12();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E1 - 2\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_U13(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=9800*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=10450*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=11550*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U13();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E1 - 3\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_U14(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=10100*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=10750*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=11850*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U14();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E1 - 4\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

//lebar jalan 2 >> rekening 1, 2, 3, 4
void rek_U21(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=10400*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=11050*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=12150*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U21();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E2 - 1\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_U22(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=10700*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=11350*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=12550*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U22();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E2 - 2\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_U23(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=11000*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=11650*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=13150*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U23();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E2 - 3\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_U24(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=11300*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=11950*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=13950*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U24();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E2 - 4\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

//lebar jalan 3 >> rekening 1, 2, 3, 4
void rek_U31(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=11600*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=12250*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=14750*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U31();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E3 - 1\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_U32(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=11900*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=12550*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=15050*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U32();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E3 - 2\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_U33(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=12200*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=12850*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=15850*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U33();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E3 - 3\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

void rek_U34(){
    system("clear");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                           REGISTRASI                             |\n");
    printf("\t\t\t|                                                                  |\n");
    printf("\t\t\t|                 Silahkan Masukan Username Anda:                  |\n");
    printf("\t\t\t====================================================================\n\n");
    printf("\t\t\t| Username : ");
    char username[100];
    scanf("%[^\n]", username);
    getchar();
    printf("\t\t\t| bulan lalu M^3 : ");
    float pemakaian_bulan_lalu = checkinput();
    printf("\t\t\t| saat ini M^3 : ");
    float pemakaian_saat_ini = checkinput();
    system("clear");
    float besar_pemakaian = pemakaian_saat_ini - pemakaian_bulan_lalu;
    float biaya_air;
    if(besar_pemakaian>0 && besar_pemakaian<=10) biaya_air=12500*10;//10 = minimum pemakaian
    else if(besar_pemakaian>10 && besar_pemakaian<=20) biaya_air=13150*besar_pemakaian;
    else if(besar_pemakaian>20) biaya_air=16650*besar_pemakaian;
    else{
        system("clear");
        printf("\t\t\t====================================================================\n");
        printf("\t\t\t|                        INPUT SALAH                               |\n");
        printf("\t\t\t====================================================================\n\n");
        rek_U34();
    }
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    float biaya_denda;
    if ((tm.tm_mday - jatuh_tempo) <= 0) biaya_denda = 0;
    else biaya_denda = denda;
    float bpm_u = BPM_U;
    float ADMIN = admin;
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t|                        BUKTI PEMBAYARAN                          |\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t====================================================================\n");
    printf("\t\t\t| Tanggal Bayar  | %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t| Jatuh Tempo    | %d-%d-%d\n", jatuh_tempo, tm.tm_mon+1, tm.tm_year+1900);
    printf("\t\t\t|                |                                                  \n");
    printf("\t\t\t| Username       | %s\n", username);                  
    printf("\t\t\t| Kelompok       | Usaha\n");
    printf("\t\t\t| Golongan Meter | E3 - 4\n");
    printf("\t\t\t| Pemakaian      | %.2f M^3\n", besar_pemakaian);
    printf("\t\t\t| Biaya Pakai    | %.2f\n", biaya_air);
    printf("\t\t\t| BPM            | %.2f\n", bpm_u);
    printf("\t\t\t| Denda          | %.2f\n", biaya_denda);
    printf("\t\t\t| Administrasi   | %.2f\n", ADMIN);
    printf("\t\t\t_________________|__________________________________________________\n\n");
    printf("\t\t\t                 | TOTAL | %.2f\n", (biaya_air + BPM_U + biaya_denda + admin));
    printf("\t\t\t                 ===================================================");
    getchar();
	restart();
}

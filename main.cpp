#include <bits/stdc++.h>
using namespace std;

char buffer[256];

void invalidInput(){
    puts("Input salah!");
    puts("Press Enter to continue!");
}

void invalidInput1(){
    puts("Input salah! Silahkan coba lagi!");
}

void clearScreen(){
    printf("\e[1;1H\e[2J");
}

void clearBuff(){ 
    int c; while ((c = getchar()) != '\n' && c != EOF){} 
}

// bool isNumber(string s)
// {
//     for (int i = 0; i < s.length(); i++)
//         if (isdigit(s[i]) == false)
//             return false;
 
//     return true;
// }

bool isNumber(const string& str)
{
    return str.find_first_not_of("0123456789") == string::npos;
}


void delay(){ 
    for (int i=0; i<1.5e8; i++){} 
    }

void introkeren(){
   puts("  #####                                                                                   #######                               "); delay();
   puts(" #     #   ##   #       ####  #    # #        ##   #####  ####  #####     #####  #   #    #         ##   #####  #   ##   #    # "); delay();
   puts(" #        #  #  #      #    # #    # #       #  #    #   #    # #    #    #    #  # #     #        #  #  #    # #  #  #  ##   # "); delay();
   puts(" #       #    # #      #      #    # #      #    #   #   #    # #    #    #####    #      #####   #    # #####  # #    # # #  # "); delay();
   puts(" #       ###### #      #      #    # #      ######   #   #    # #####     #    #   #      #       ###### #    # # ###### #  # # "); delay();
   puts(" #     # #    # #      #    # #    # #      #    #   #   #    # #   #     #    #   #      #       #    # #    # # #    # #   ## "); delay();
   puts("  #####  #    # ######  ####   ####  ###### #    #   #    ####  #    #    #####    #      #       #    # #####  # #    # #    # "); delay();
   puts("                                                                                                                                "); delay();
   puts("Press Enter to Start!");
}

void kalkulatordasar(){
    long long int angka, hasil = 0;
    string asd;
    string asd2;
    string operasibilangan;
    // clearScreen();
    printf("\nSelamat datang di Kalkulator Dasar\n");
    printf("Masukkan Angka Pertama : ");
    bool flag1 = false;
    cin >> asd; clearBuff();
    stringstream kenomber(asd);
    if(isNumber(asd) == true){
        kenomber >> angka;
        flag1 = true;
    }
    else{
        invalidInput();
    }
    hasil = angka;
    while(flag1){
        printf("Operasi bilangan? (+ atau / atau - atau * atau = untuk hasil akhir) (satu karakter) ");
        cin >> operasibilangan;
        long long int angka2 = 0;
        if(operasibilangan == "+" || operasibilangan == "-" || operasibilangan == "*" || operasibilangan == "/"){
            bool flag2 = true;
            while(flag2){
                if(operasibilangan == "+"){
                        printf("\nSilahkan masukkan angka bilangan bulat : ");
                        cin >> asd2;
                        stringstream kenomberlagi(asd2);
                    if(isNumber(asd2) == true){
                        kenomberlagi >> angka2;
                        hasil = hasil + angka2;
                    break;
                    }
                    else{
                        invalidInput1();
                    }
                }
                else if(operasibilangan == "-"){
                        printf("\nSilahkan masukkan angka bilangan bulat : ");
                        cin >> asd2;
                        stringstream kenomberlagi(asd2);
                    if(isNumber(asd2) == true){
                        kenomberlagi >> angka2;
                        hasil = hasil - angka2;
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
                else if(operasibilangan == "/"){
                        printf("\nSilahkan masukkan angka bilangan bulat : ");
                        cin >> asd2;
                        stringstream kenomberlagi(asd2);
                    if(isNumber(asd2) == true){
                        kenomberlagi >> angka2;
                        hasil = hasil / angka2;
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
                else if(operasibilangan == "*"){
                        printf("\nSilahkan masukkan angka bilangan bulat : ");
                        cin >> asd2;
                        stringstream kenomberlagi(asd2);
                    if(isNumber(asd2) == true){
                        kenomberlagi >> angka2;
                        hasil = hasil * angka2;
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
        }
        else if(operasibilangan == "="){
            cout << "Hasil akhirnya nya adalah : " << hasil << endl;
            break;
        }
        else{
            printf("\nOperasi bilangan Salah!\n");
            printf("Silahkan coba lagi\n");
        }
    cout << "\nHasil nya adalah : " << hasil << endl;
    }
    flag1 = false;
    clearBuff();
}


bool isitprime(long long int x){
    int count = 0;
    for(int i = 1; i<=sqrt(x); i++){
        if(x % i == 0){
            if(i*i != x){
                count += 2;
            }
            else count++;
        }
    }
    if (count == 2) return true;
    else return false;
}

long long int jumlahDigit(long long int angka){
    int lastdigit; int jumlah = 0;
    while(angka > 0){
    lastdigit = angka % 10;
    jumlah  = jumlah + lastdigit;
    angka = angka / 10;
    }
    return jumlah;
}


void menu2(){
    clearScreen();
    string asd;
    unsigned long long int angka = 0;
    printf("Apakah angka yang anda masukkan prima?\n");
    printf("Silahkan Masukkan Angka : ");
    cin >> asd; clearBuff();
    stringstream kenomber(asd);
    if(isNumber(asd) == true){
        kenomber >> angka;
        if(isitprime(angka)){
        cout << angka << " adalah angka Prima!" << endl;
        }

        else{
        cout << angka << " bukan angka Prima!" << endl;
        }
    }
    else{
        invalidInput1();
    }
}

void menu3(){
    clearScreen();
    string asd;
    unsigned long long int angka = 0;
    printf("Selamat datang di Kalkulator Digit Angka\n");
    while(1){
    printf("Silahkan Masukkan Angka : ");
    cin >> asd; clearBuff();
    stringstream kenomber(asd);
    if(isNumber(asd) == true){
        kenomber >> angka;
        cout << "Hasilnya Adalah : " << jumlahDigit(angka) << endl;
        break;
    }
    else{
        invalidInput1();
    }
    }
}

void menu4(){
    string menu;
    while(1){
        printf("Selamat datang di Kalkulator Luas Bangun Datar\n");
        puts("Silahkan pilih Bangun Datar yang akan dihitung (gunakan nomber)");
        puts("1. Persegi"); 
        puts("2. Persegi Panjang");
        puts("3. Segitiga");
        puts("4. Lingkaran");
        puts("5. Jajar Genjang");
        puts("6. Trapesium");
        puts("7. Layang - Layang");
        puts("8. Belah Ketupat");
        puts("9. Exit\n");
        printf("Pilih yang mana : "); cin >> menu; clearBuff();
        if(menu == "1" || menu == "2" || menu == "3" || menu == "4" || menu == "5" || menu == "6" || menu == "7" || menu == "8" || menu == "9"){
            if(menu == "1"){
                string asd1; unsigned long long int sisi = 0, hasilpersegi = 1;
                while(1){
                printf("Silahkan masukkan sisi persegi : ");
                cin >> asd1; clearBuff();
                stringstream kenomber(asd1);
                if(isNumber(asd1) == true){
                    kenomber >> sisi;
                    hasilpersegi = sisi * sisi;
                    cout << "Luas persegi anda adalah : " << hasilpersegi << " satuan" << endl;
                    break;
                }
                else{
                    invalidInput1();
                }
                break;
                }
            }
            else if(menu == "2"){
                string asd1, asd2; unsigned long long int panjang = 0, lebar = 0, hasilpp = 1;
                while(1){
                    printf("Silahkan masukkan panjang : "); 
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> panjang;
                        while(1){
                        printf("Silahkan masukkan lebar : "); 
                        cin >> asd2; clearBuff();
                        stringstream kenomber2 (asd2);
                        if(isNumber(asd2) == true){
                            kenomber2 >> lebar;
                            hasilpp = panjang * lebar;
                            cout << "Luas Persegi Panjang anda adalah : " << hasilpp << " satuan" << endl;
                            break;
                        }
                        else{
                            invalidInput1();
                        }
                        }
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "3"){
                string asd1, asd2; unsigned long long int alas = 0, tinggi = 0, hasils = 0;
                while(1){
                    printf("Silahkan masukkan alas : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> alas;
                        while(1){
                        printf("Silahkan masukkan tinggi : ");
                        cin >> asd2; clearBuff();
                        stringstream kenomber2(asd2);
                        if(isNumber(asd2) == true){
                            kenomber2 >> tinggi;
                            hasils = (alas * tinggi) / 2;
                            cout << "Luas Segitiga anda adalah : " << hasils << " satuan" << endl;
                            break;
                        }
                        else{
                            invalidInput1();
                        }
                        }
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "4"){
                string asd1; unsigned long long int jari2 = 0, hasillingkaran = 0;
                while(1){
                    printf("Silahkan masukkan jari - jari lingkaran : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> jari2;
                        hasillingkaran = 22 * jari2 * jari2 / 7;
                        cout << "Luas Lingkaran anda adalah : " << hasillingkaran << " satuan" << endl;
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "5"){
                string asd1, asd2; unsigned long long int alas = 0, tinggi = 0, hasiljg = 0;
                while(1){
                    printf("Silahkan masukkan alas : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> alas;
                        while(1){
                        printf("Silahkan masukkan tinggi : ");
                        cin >> asd2; clearBuff();
                        stringstream kenomber2(asd2);
                        if(isNumber(asd2) == true){
                            kenomber2 >> tinggi;
                            hasiljg = alas * tinggi;
                            cout << "Luas Jajar Genjang anda adalah : " << hasiljg << " satuan" << endl;
                            break;
                        }
                        else{
                            invalidInput1();
                        }
                        }
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "6"){
                string asd1, asd2, asd3; unsigned long long int a = 0, b = 0, t = 0, hasilt = 0;
                while(1){
                    printf("Silahkan masukkan panjang atas : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> a;
                        while(1){
                            printf("Silahkan masukkan panjang bawah : ");
                            cin >> asd2; clearBuff();
                            stringstream kenomber2(asd2);
                            if(isNumber(asd2) == true){
                                kenomber2 >> b;
                                while(1){
                                printf("Silahkan masukkan tinggi : ");
                                cin >> asd3; clearBuff();
                                stringstream kenomber3(asd3);
                                if(isNumber(asd3) == true){
                                    kenomber3 >> t;
                                    hasilt = (a + b) / 2 * t;
                                    cout << "Luas Trapesium anda adalah : " << hasilt << " satuan" << endl;
                                    break;
                                }
                                else{
                                    invalidInput1();
                                }
                                }
                                break;
                            }
                            else{
                                invalidInput1();
                            }
                        }
                    break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "7"){
                string asd1, asd2; unsigned long long int d1 = 0, d2 = 0, hasilLL = 0;
                while(1){
                    printf("Silahkan masukkan diagonal 1 : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> d1;
                        while(1){
                        printf("Silahkan masukkan diagonal 2 : ");
                        cin >> asd2; clearBuff();
                        stringstream kenomber2(asd2);
                        if(isNumber(asd2) == true){
                            kenomber2 >> d2;
                            hasilLL = d1 * d2 / 2;
                            cout << "Luas Layang - Layang anda adalah : " << hasilLL << " satuan" << endl;
                            break;
                        }
                        else{
                            invalidInput1();
                        }
                        }
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "8"){
                string asd1, asd2; unsigned long long int d1 = 0, d2 = 0, hasilLL = 0;
                while(1){
                    printf("Silahkan masukkan diagonal 1 : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> d1;
                        while(1){
                        printf("Silahkan masukkan diagonal 2 : ");
                        cin >> asd2; clearBuff();
                        stringstream kenomber2(asd2);
                        if(isNumber(asd2) == true){
                            kenomber2 >> d2;
                            hasilLL = d1 * d2 / 2;
                            cout << "Luas Belah Ketupat anda adalah : " << hasilLL << " satuan" << endl;
                            break;
                        }
                        else{
                            invalidInput1();
                        }
                        }
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "9"){
                break;
            }
        }
        else{
            invalidInput1();
            break;
        }
        break;
    }
}

void menu5(){
    string menu;
    while(1){
        puts("Selamat datang di Kalkulator Volume Bangun Ruang");
        puts("1. Kubus");
        puts("2. Balok");
        puts("3. Prisma Segitiga");
        puts("4. Limas Segiempat");
        puts("5. Limas Segitiga");
        puts("6. Tabung");
        puts("7. Bola");
        puts("8. Exit");
        printf("Pilih yang mana : "); cin >> menu; clearBuff();
        if(menu == "1" || menu == "2" || menu == "3" || menu == "4" || menu == "5" || menu == "6" || menu == "7" || menu == "8"){
            if(menu == "1"){
                string asd1; unsigned long long int rusuk = 0, hasilkubus = 1;
                while(1){
                    printf("Silahkan masukkan rusuk kubus : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber(asd1);
                    if(isNumber(asd1) == true){
                        kenomber >> rusuk;
                        hasilkubus = rusuk * rusuk * rusuk;
                        cout << "Volume kubus anda adalah : " << hasilkubus << " satuan" << endl;
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "2"){
                string asd1, asd2, asd3; unsigned long long int panjang = 0, lebar = 0, tinggi = 0, hasilbalok = 1;
                while(1){
                    printf("Silahkan masukkan panjang : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> panjang;
                        printf("Silahkan masukkan lebar : ");
                        cin >> asd2; clearBuff();
                        stringstream kenomber2(asd2);
                        if(isNumber(asd2) == true){
                            kenomber2 >> lebar;
                            printf("Silahkan masukkan tinggi : ");
                            cin >> asd3; clearBuff();
                            stringstream kenomber3(asd3);
                            if(isNumber(asd3) == true){
                                kenomber3 >> tinggi;
                                hasilbalok = panjang*lebar*tinggi;
                                cout << "Volume balok anda adalah : " << hasilbalok << " satuan" << endl;
                                break;
                            }
                            else{
                                invalidInput1();
                            }
                        }
                        else{
                            invalidInput1();
                        }
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "3"){
                string asd1, asd2, asd3; unsigned long long int alass = 0, tinggis = 0, tinggi = 0, hasilprismas = 0;
                while(1){
                    printf("Silahkan masukkan alas segitiga : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> tinggis;
                        while(1){
                            printf("Silahkan masukkan tinggi segitiga : ");
                            cin >> asd2; clearBuff();
                            stringstream kenomber2(asd2);
                            if(isNumber(asd2) == true){
                                kenomber2 >> alass;
                                while(1){
                                    printf("Silahkan masukkan tinggi prisma : ");
                                    cin >> asd3; clearBuff();
                                    stringstream kenomber3(asd3);
                                    if(isNumber(asd3) == true){
                                        kenomber3 >> tinggi;
                                        hasilprismas = (alass * tinggis) / 2 * tinggi;
                                        cout << "Volume Prisma Segitiga anda adalah : " << hasilprismas << " satuan" << endl;
                                        break;
                                    }
                                    else{
                                        invalidInput1();
                                    }
                                }
                                break;
                            }
                            else{
                                invalidInput1();
                            }
                        }
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                    break;
                }
            }
            else if(menu == "4"){
                string asd1, asd2, asd3; unsigned long long int panjang = 0, lebar = 0, tinggi = 0, hasillimas4 = 1;
                while(1){
                    printf("Silahkan masukkan panjang alas : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> panjang;
                        while(1){
                            printf("Silahkan masukkan lebar alas : ");
                            cin >> asd2; clearBuff();
                            stringstream kenomber2(asd2);
                            if(isNumber(asd2) == true){
                                kenomber2 >> lebar;
                                while(1){
                                    printf("Silahkan masukkan tinggi limas : ");
                                    cin >> asd3; clearBuff();
                                    stringstream kenomber3(asd3);
                                    if(isNumber(asd3) == true){
                                        kenomber3 >> tinggi;
                                        hasillimas4 = (panjang * lebar) * tinggi / 3;
                                        cout << "Volume Limas Segi Empat anda adalah : " << hasillimas4 << " satuan" << endl;
                                        break;
                                    }
                                    else{
                                        invalidInput1();
                                    }
                                }
                                break;
                            }
                            else{
                                invalidInput1();
                            }
                        }
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                    break;
                }
            }
            else if(menu == "5"){
                string asd1, asd2, asd3; unsigned long long int alas = 0, tinggi = 0, tinggip = 0, hasillimas3 = 1;
                while(1){
                    printf("Silahkan masukkan alas segitiga : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> alas;
                        while(1){
                            printf("Silahkan masukkan tinggi segitiga : ");
                            cin >> asd2; clearBuff();
                            stringstream kenomber2(asd2);
                            if(isNumber(asd2) == true){
                                kenomber2 >> tinggi;
                                while(1){
                                    printf("Silahkan masukkan tinggi limas : ");
                                    cin >> asd3; clearBuff();
                                    stringstream kenomber3(asd3);
                                    if(isNumber(asd3) == true){
                                        kenomber3 >> tinggip;
                                        hasillimas3 = alas * tinggi * tinggip / 2 / 3;
                                        cout << "Volume Limas Segi Tiga anda adalah : " << hasillimas3 << " satuan" << endl;
                                        break;
                                    }
                                    else{
                                        invalidInput1();
                                    }
                                }
                                break;
                            }
                            else{
                                invalidInput1();
                            }
                        }
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                    break;
                }
            }
            else if(menu == "6"){
                string asd1, asd2; unsigned long long int jari = 0, tinggi = 0, hasiltabung = 1;
                while(1){
                    printf("Silahkan masukkan jari - jari alas : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> jari;
                        while(1){
                            printf("Silahkan masukkan tinggi tabung : ");
                            cin >> asd2; clearBuff();
                            stringstream kenomber2(asd2);
                            if(isNumber(asd2) == true){
                                kenomber2 >> tinggi;
                                hasiltabung = (22 * jari * jari * tinggi) / 7;
                                cout << "Volume Tabung anda adalah : " << hasiltabung << " satuan" << endl;
                                break;
                            }
                            else{
                                invalidInput1();
                            }
                        }
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "7"){
                string asd1; unsigned long long int jari = 0, hasilbola = 1;
                while(1){
                    printf("Silahkan masukkan jari - jari bola : ");
                    cin >> asd1; clearBuff();
                    stringstream kenomber1(asd1);
                    if(isNumber(asd1) == true){
                        kenomber1 >> jari;
                        hasilbola = (22 * jari * jari * jari * 4) / 3 / 7;
                        cout << "Volume Bola anda adalah : " << hasilbola << " satuan" << endl;
                        break;
                    }
                    else{
                        invalidInput1();
                    }
                }
            }
            else if(menu == "8"){
                break;
            }
        }
        else{
            invalidInput1();
        }
        break;
    }
}

void menuUtama();
void menu6();
   
void menuUtamaOption(unsigned short x){
    switch(x){
        case 1:
            kalkulatordasar();
            break;
        case 2:
            menu2();
            break;
        case 3:
            menu3();
            break;
        case 4:
            menu4();
            break;
        case 5:
            menu5();
            break;
        case 6:
            menu6();
            break;
        case 8:
            menuUtama();
            break;
        default:
            invalidInput();
            break;
    }
}

void menu6(){
    clearScreen();
    puts("Halo semuanya, calculator simple ini dibuat oleh Fabian Habil - 2501976503"); delay();
    puts("Calculator ini dibuat untuk saya memenuhi Quest Backend BNCC untuk mendaftarkan diri menjadi aktivis di BNCC.");delay();
    puts("Mohon maaf jika masih banyak kesalahan dan kekurangan di Calculator yang saya buat ini.");delay();
    puts("Di Project kedepannya yang akan saya bikin saya akan berusaha untuk lebih baik lagi dari sebelumnya."); delay();
    puts("Terima Kasih untuk kaka kaka BNCC sudah memberikan quest secara tidak langsung membuat saya belajar,"); delay();
    puts("Maupun itu time management, pengetahuan, dan banyak lainnya dari quest yang kaka kaka kasih ke saya,"); delay();
    puts("Terima kasih banyak BNCC!\n");
}

void menuUtama(){
    clearBuff();
    unsigned short option;
    bool exit = false;
    do {
        puts("--------------------------------------"); delay();
        puts("|        MAIN MENU CALCULATOR        |"); delay();
        puts("|1. Kalkulator Dasar                 |"); delay();
        puts("|2. Check apakah Bilangan prima?     |"); delay();
        puts("|3. Kalkulator Jumlah Digit Angka    |"); delay();
        puts("|4. Kalkulator Luas Bangun Datar     |"); delay();
        puts("|5. Kalkulator Bangun Ruang          |"); delay();
        puts("|6. About                            |"); delay();
        puts("|7. Exit                             |"); delay();
        puts("--------------------------------------"); delay();
        printf("Masukkan pilihan anda : "); delay();
      fgets(buffer, 256, stdin);
      if(sscanf(buffer, "%d", &option) != 1){
          invalidInput();
          option = 8;
      }
      else if(option >= 8 || option < 1){
          invalidInput();
          option = 8;
      }
      if(option == 7){
          cout << "Selamat jumpa! xo from Fabian!" << endl;
          cout << "Enter untuk Exit!";
          exit = true;
      }
      else menuUtamaOption(option);
      
    } while(!exit);
    clearBuff();
}

int main(){
    clearScreen();
    introkeren();
    menuUtama();
}
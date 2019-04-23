#include<iostream.h>
#include<conio.h>

void main () {
	char kode;
   char *hari;
   clrscr();
   cout<<"          MENENTUKAN NAMA HARI        \n";
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   cout<<"input kode hari A-G/ a-g:  ";  cin>>kode;
   clrscr();
   if((kode== 'a')||(kode== 'A')){
    hari = "senin";
    }
   else if ((kode== 'b')|| (kode== 'B')){
    hari = "selasa";
    }
   else if ((kode=='c')|| (kode== 'C')){
    hari = "Rabu";
    }
   else if ((kode=='d')|| (kode== 'D')){
    hari = "Kamis";
    }
    else if ((kode=='e')|| (kode== 'E')){
    hari = "jumat";
    }
    else if ((kode=='f')|| (kode== 'F')){
    hari = "sabtu";
    }
    else if ((kode=='g')|| (kode== 'G')){
    hari = "minggu";
    }
   else{
    cout<<"tidak ada hari yang sesuai";
    }
   cout<<"         TAMPILAN PILIHAN ANDA       \n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"Kode Hari        : "<<kode<<"\n";
    cout<<"Nama Hari        : "<<hari<<"\n";
    getch();
    }

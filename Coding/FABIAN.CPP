/*
Nama     : Fabian Syauqi
Kelas    : X-PPLG
Username : SMKN1
Password : sekolah
*/
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <process.h>
#include <fstream.h>
#include "akun.h"
main()
{
char tum,nm[100],pw[15]="sekolah";
int i,a=0;
akun("akun");
Login:
cout<<"Username  = ";gets(nm);
cout<<"Password  = ";
 for(i=0;i<=7;i++){
 tum = getch();
 cout<<"*";
 if (tum==pw[i])
 {
 a=a+1;
 }
 }
if((strcmp(nm,"SMKN1")==0) && a==7)
{
clrscr();
cout<<nm<<" Berhasil Login"<<endl;
}
else
{
clrscr();
cout<<"     ANDA PENYUSUP !!!!"<<endl;
cout<<"=========================="<<endl;
a=0;
goto Login;
}
getch();
}






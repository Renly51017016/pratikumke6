#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode;
cout<<"masukan kode barang[a..c]:";
cin>>kode;
switch(kode)
{
case'A':
case'a':
cout<<"alat olah raga";
break;
case'B':
case'b':
cout<<"alat elektronik";
break;
case'C':
case'c':
cout<<"anda salah memasukan kode";
break;
}
getch();
return 0;
}

#include <iostream.h>
#include <conio.h>
void main()
{
int bil;
clrscr();
cout <<"masukan bilangan:";
cin >> bil;
switch (bil)
{
case 1 : cout<<"anda memasukan bil. satu";
break;
case 2 : cout<<"anda memasukan bil. dua";
break;
case 3 : cout<<"anda memasukan bil. tiga";
break;
default:cout<<"anda masukan bil selain 1,2,dan 3";
break;
}
getch();
}
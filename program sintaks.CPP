#include <conio.h>
#include <iostream.h>

main() {
int a, b, c,maks;
cout << "a : :";
cin >> a;
cout << "a : ";
cin >> b;
cout <<  "c : ";
cin >> c;
if ((a>b) && (a>c))
maks =a;
else if ((b>a) && (b>c))
maks =b;
else
maks = c;
cout <<"bilangan terbesar adalah " << maks;
getch();
return 0;
}

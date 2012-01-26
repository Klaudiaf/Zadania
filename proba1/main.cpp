/*
Losowac liczby ca�kowite az do momentu, gdy dwie kolejne liczby beda r�wne odpowiednio dw�m
pierwszym. Wydrukowac sume parzystych liczb tego ciagu (wliczajac w to dwie ostatnie). Przyjac dla
uproszczenia, ze w ciagu sa co najmniej 4 liczby. Program napisac bez uzycia tablic.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int x, y, przedost, ost;
    int sumap=0;

    srand(time(0));

    x = 0+(5-0)*(rand())/double(RAND_MAX);
    cout << x << endl;
    y = 0+(5-0)*(rand())/double(RAND_MAX);
    cout << y << endl;
    ost = 0+(5-0)*(rand())/double(RAND_MAX);
    cout << ost << endl;

    if (x%2==0)
    sumap = sumap + x;

    if (y%2==0)
    sumap = sumap + y;

    if (ost%2==0)
    sumap = sumap +ost;

   do {
       przedost = ost;
       ost =0+(5-0)*(rand())/double(RAND_MAX);
       cout << ost;
       cout << endl;

       if (ost%2==0)
       sumap = sumap + ost;
   }
   while ( !(przedost == x && ost == y));

   cout << endl << "Suma liczb parzystych = " << sumap << endl;

    return 0;
}

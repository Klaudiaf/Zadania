/*
Losowac liczby ca³kowite az do momentu, gdy dwie kolejne liczby beda równe odpowiednio dwóm
pierwszym. Wydrukowac sume parzystych liczb tego ciagu (wliczajac w to dwie ostatnie). Przyjac dla
uproszczenia, ze w ciagu sa co najmniej 4 liczby. Program napisac bez uzycia tablic.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int x, y, a, przedost, ost;
    int sumap=0;

    srand(time(0));

    x = 0+(5-0)*(rand())/double(RAND_MAX);
    cout << x << endl;
    y = 0+(5-0)*(rand())/double(RAND_MAX);
    cout << y << endl;
    a = 0+(5-0)*(rand())/double(RAND_MAX);
    cout << a << endl;
    ost = a;

    if (x%2==0)
    sumap = sumap + x;

    if (y%2==0)
    sumap = sumap + y;

    if (a%2==0)
    sumap = sumap +a;

   do {
       przedost = a;
       a =0+(5-0)*(rand())/double(RAND_MAX);
       cout << a;
       ost = a;
       cout << endl;

       if (a%2==0)
       sumap = sumap + a;
   }
   while ( !(przedost == x && ost == y));

   cout << endl << "Suma liczb parzystych = " << sumap << endl;

    return 0;
}

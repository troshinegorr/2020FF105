// PQP<P5QP>P2P0 P$P$-105 P;P0P1P0 b5 P2P0Q P8P0P=Q 3
#include <iostream>
#include <string>
#include <algorithm>
#include <conio.h>
#include<stdio.h>
int number = 0;
int
main ()
{
  using namespace std;

  string a, b;
  cin >> a >> b;
  bool result =
    find_first_of (a.begin (), a.end (), b.begin (), b.end ()) != a.end ();
  cout << boolalpha << result << endl;



  printf ("Enter number:");
  scanf ("%d", &number);
  printf ("Back:");
  while (number > 0)
    {
      printf ("%d", number % 10);
      number /= 10;
    };
  getch ();




  int num = 0, t = 0, d = 1;
  cout << "Enter number:" << endl;
  cin >> num;
  cout << "==> ";
  while (num)
    {
      t += (num % 2) * d;
      //cout<<t;
      num = num / 2;
      d = d * 10;		// razryad
    }
  cout << t;
  //  cout<<num;
  cout << endl;
  system ("pause");
  return 0;
}

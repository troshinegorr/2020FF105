// Ахметова ФФ—105 Экзамен лаба №7 b 30
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main() {
    int n; //количество людей
    cout << "Enter n" << endl;
    cin >> n;
 const int limit = 100; //предельный возраст
 int decs = limit / 10 + 1; //сколько будет десятков лет
 int people[n];
 int *count = new int [decs];
 for (int i = 0; i<decs; i++) count[i] = 0;
 srand(time(0));
 for (int i=0; i<n; i++) {
  people[i] = rand()%limit;
  cout << people[i] << " ";
  count[people[i]/10]++;
 }
 cout << endl;
 for (int i = 0; i<decs; i++) cout << (i*10) << "-" << ((i+1)*10-1) << ": " << count[i] << endl;
 cin.get();
 return 0;
}

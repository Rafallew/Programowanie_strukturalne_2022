#include <iostream>

using namespace std;
int main()
{
    int tab[3], pomocniczy;
    cout << "Podaj trzy liczby, a posortuje je malej¹co. \n";
    cin >>tab[0];
    cin >>tab[1];
    cin >>tab[2];


for (int i = 0; i < 3; i++){
  for (int j = i + 1; j < 3; j++){
    if (tab[i] < tab[j])
    {
      pomocniczy = tab[i];
      tab[i] = tab[j];
      tab[j] = pomocniczy;
    }}}

    cout << "Liczba najwieksza to: "<< tab[0] << "\n";
    cout << "Liczba pomiedzy to: "<< tab[1] << "\n";
    cout << "Liczba najmniejsza to: "<< tab[2] << "\n";

}

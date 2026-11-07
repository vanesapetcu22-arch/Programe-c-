/******************************************************************************

Preluați de la tastatură valorile a două variabile întregi. Interschimbați valorile
variabilelor: 
• folosind o variabilă auxiliară; 
• fără a folosi o variabilă auxiliară; 
• folosind funcția swap din librăria utility .
Afișați pe ecran valorile variabilelor după interschimbare. 
Pentru a putea utiliza funcția, includeți librăria utility.

*******************************************************************************/
#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<' '<<b;
}

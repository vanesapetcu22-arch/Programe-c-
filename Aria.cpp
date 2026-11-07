/******************************************************************************

De la tastatură se preiau trei valori reale care reprezintă lungimile laturilor 
unui triunghi. Calculați și afișați pe ecran aria triunghiului.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,p,aria;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	aria= sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<aria;
}

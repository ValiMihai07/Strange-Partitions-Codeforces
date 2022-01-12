#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>


using namespace std;



int main()
{
	int t; //numarul de cazuri
	float x[1000]; //numarul cu care se imparte
	int n[1000]; //numarul de elemente
	int i, j;
	float rez[1000];
	float y[1000]; // sirul de elemente n
	int rez_plus[1000];
	int rez_minus[1000];
	float w[1000]; // stringul unde salvez numerele impartite
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> n[i];
		cin >> x[i];
		for (j = 0; j < n[i]; j++)
		{
			cin >> y[j];
		}
		
	}
	
	for (i = 0; i < t; i++)
	{
		rez_plus[i] = 0;
		rez_minus[i] = 0;
		for (j = 0; j < n[i]; j++)
		{
			w[j] = y[j] / x[i];
			rez_plus[i] = rez_plus[i] + llround(w[j]);
			rez_minus[i] = rez_minus[i] + static_cast<int>(w[j]);
		}
	}

	for (i = 0; i < t; i++)
	{
		cout << rez_minus[i] << " " << rez_plus[i] << endl;
	}


	return 0;
}
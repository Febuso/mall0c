#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#define VALUES_SIZE 3

using namespace std;

float* tab;

float* wpisuj()
{
	float* tab;
	tab = (float *)malloc(sizeof(float)*VALUES_SIZE);

	for (int i = 0; i < VALUES_SIZE; i++)
	{
		cout << "Podaj " << i + 1 << ". element: ";
		cin >> tab[i];
		/**(tab + i) += 3;*/
	}
	cout << endl;
	return tab;
}

void wypisz()
{
	float* tab = wpisuj();
	for (int i = 0; i < VALUES_SIZE; i++)
	{
		cout << "Element nr " << i+1 << ": " << tab[i] << endl;
		/*free(tab[i]);*/
	}
	cout << endl;
	free(tab);
}

//float suma(int N, float tab[15])
//{
//	float s = 0;
//	for (int i = 0; i < N; i++)
//	{
//		s = s + tab[i];
//	}
//	return s;
//}
//
//float srednia(int N, float tab[15])
//{
//	return suma(N, tab) / N;
//}
//
//
//float min(int N, float tab[15])
//{
//	float min;
//	min = tab[0];
//	for (int i = 1; i < N; i++)
//	{
//		if(min > tab[i])
//			min = tab[i];
//	}
//	return min;
//}
//
//float max(int N, float tab[15])
//{
//	float max;
//	max = tab[0];
//	for (int i = 1; i < N; i++)
//	{
//		if (max < tab[i])
//			max = tab[i];
//	}
//	return max;
//}
//
//float* addtab(int N, float* tab, float* tab2, float* tabr)
//{
//
//	for (int i = 0; i < N; i++)
//	{
//		tabr[i] = tab[i] + tab2[i];
//	}
//	return tabr;
//}

int main()
{
	/*float tab2[15]{ 6, 3, 17, 2, 1, 23, 13, 19, 25, 11, 2, 6, 4, 7, 13 };
	float tab3[15];

	float tab[15] = { 6, 3, 17, 2, 1, 23, 13, 19, 25, 11, 2, 6, 4, 7, 13 };*/

	wpisuj();
	wypisz();
	/*cout << "Suma: " << suma(15, tab) << endl;
	cout << "Srednia: " << srednia(15, tab) << endl;
	cout << "Wartosc minimalna: " << min(15, tab) << endl;
	cout << "Wartosc maksymalna: " << max(15, tab) << endl;
	float *tabr = addtab(15, tab, tab2, tab3);
	wypisz(15, tabr);*/
}

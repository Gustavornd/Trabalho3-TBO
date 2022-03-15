#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "ListaEstatica.h"


using namespace std;

/*
* Fun��o usada para criar o arquivo de entrada de dados;
*/
void CreateInputFile();

/*
* Fun��o usada para criar um aquivo de entrada com dados
* aleat�rios, mas n�o foi utilizado;
*/
void CreateRandomInputFile();


/*
* Fun��o que realiza a ordena��o da lista pelo m�todo
* Bubble Sort, ordenando a lista ordem crescente.
*
* @param le					Lista encadeada est�tica que ser� ordenada
* @param imprime_lista		Indica se deve ser printada cada execu��o
*							da ordena��o ou apenas a lista ordenada no
*							final da execu��o.
*/
int BubbleSort(ListaEstatica &Le, bool imprime_lista);


/*
* Fun��o que realiza a ordena��o da lista pelo m�todo
* Bubble Sort, ordenando a lista ordem crescente.
*
* @param le					Lista encadeada est�tica que ser� ordenada
* @param imprime_lista		Indica se deve ser printada cada execu��o
*							da ordena��o ou apenas a lista ordenada no
*							final da execu��o.
*/
int InsertionSort(ListaEstatica &le, bool imprime_lista);

#endif // !FUNCTIONS_H


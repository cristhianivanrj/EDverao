/*
 * main.c
 *
 *  Created on: 21/01/2019
 *      Author: cristhian
 */

#include <stdio.h>
#include "lista00.h"

int main(int argc, char* argv[])
{
	Lista01* li;
	li = criarLista();
	li = inserirLista(li, 10);
	li = inserirLista(li, 20);
	li = inserirLista(li, 30);
	li = inserirLista(li, 40);
	li = inserirLista(li, 50);
	imprimirLista(li);
	if(testarVazia(li))
		printf("Lista Vazia !\n");
	else
		printf("Lista Nao Vazia \n");

	int elemento = 100;
	if( busca(li, elemento) == NULL)
		printf("Não encontrou o elemento %d\n", elemento);
	else
		printf("Encontrou o elemento %d\n", elemento);

	li = excluirLista(li,10);
		imprimirLista(li);
	liberar(li);
	li = inserirLista(li, 50);


	return 0;
}


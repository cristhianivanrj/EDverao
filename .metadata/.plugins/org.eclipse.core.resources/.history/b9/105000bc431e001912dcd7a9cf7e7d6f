/*
 * pilha01.c
 *
 *  Created on: 21/01/2019
 *      Author: cristhian
 */


#include <stdio.h>
#include <stdlib.h>
#include "pilha01.h"

struct lista
{
	float info;
	struct lista* Link;
};

//Representada como uma lista siempre apuntado para o ultimo elemento
struct pilha
{
	Lista* LinkTopo;
};

Pilha* criar_pilha()
{
	Pilha* argPilha = (Pilha*)malloc(sizeof(Pilha));
	argPilha->LinkTopo = NULL;
	return argPilha;
}

void push(Pilha* argPilha, float Valor)
{
	Lista* novoElemento = (Lista*)malloc(sizeof(Lista));
	novoElemento->info = Valor;
	novoElemento->Link = argPilha-> LinkTopo;
	argPilha->LinkTopo = novoElemento;
}

float pop(Pilha* argPilha) //Retorna o elemento que foi removido
{
	Lista* t;
	float Valor;
	if(vazia(argPilha))
	{
		printf("Pilha vazia\n");
		exit(1);
	}
	t = argPilha->LinkTopo;
	Valor = t->info;
	argPilha->LinkTopo = t->Link;
	free(t);
	return Valor;
}

int vazia(Pilha* argPilha)
{
	return (argPilha->LinkTopo == NULL);
}

void liberar(Pilha* argPilha)
{
	Lista* q = argPilha->LinkTopo;
	while(q != NULL)
	{
		Lista* t = q->Link;
		free(q);
		q = t;
	}
	free(argPilha);
}

float topo(Pilha* argPilha)
{
	if(vazia(argPilha))
	{
		printf("Pilha vazia\n");
		exit(1);
	}
	return argPilha->LinkTopo->info;
}

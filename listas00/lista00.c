/*
 * lista00.c
 *
 *  Created on: 21/01/2019
 *      Author: cristhian
 */
#include <stdio.h>
#include <stdlib.h>
#include "lista00.h"
struct lista
{
	// Criamos estrutura do nó
	int info;
	struct lista* ptrProx; //Ponteiro para o próximo nó da lista
};
//Vamos a criar uma função que vai criar uma lista
//Criamos uma lista vazia
Lista01* criarLista (){
	return NULL;
}

/*A função recebe dos parâmetros de entrada, uma lista sobre
  a qual será inserido o novo elemento, como também a informação
  do novo elemento.
  Ela tem como valor retorno a nova lista */
Lista01* inserirLista(Lista01* argLista, int argInfo){
	Lista01* novo =(Lista01* )malloc(sizeof(Lista01));
	novo-> info =argInfo;
	novo-> ptrProx =argLista;
	return novo;
}
//imprimir os elementos da lista
void imprimirLista(Lista01* argLista){
	Lista01* ptrTrb;
	for(ptrTrb=argLista; ptrTrb != NULL; ptrTrb= ptrTrb -> ptrProx )
		printf("%d\n", ptrTrb -> info);
}
//Função para verificar se a lista está vazia
int testarVazia(Lista01* argLista){
	if(argLista == NULL)
		return 1;
	return 0;
}

//Buscar Conteudo nos elementos da lista
Lista01* busca(Lista01* argLista, int infoBusca){
	Lista01* ptrTrb;
	for(ptrTrb=argLista; ptrTrb!= NULL; ptrTrb=ptrTrb->ptrProx ){
		if(ptrTrb-> info == infoBusca)
			return ptrTrb;
	}
	return NULL;
}


//Função para excluir elementos da lista
Lista01* excluirLista(Lista01* argLista, int infoBusca){
	Lista01* ptrAnt=NULL;
	Lista01* ptrTrb =argLista;
	while (ptrTrb!=NULL && ptrTrb-> info != infoBusca ){
		ptrAnt = ptrTrb;
		ptrTrb = ptrTrb->ptrProx;
		}
		if (ptrTrb == NULL)
			return argLista;
		if (ptrAnt == NULL){
			//remove do inicio da lista
			argLista = ptrTrb -> ptrProx;
					}
		else
		{
			ptrAnt-> ptrProx = ptrTrb-> ptrProx;
		}
		free(ptrTrb);
		return argLista;
}

//Função para Liberar a lista
void liberar(Lista01* argLista){
	Lista01* ptrTrb;
	while(ptrTrb !=NULL ){
		Lista01* ptrTemp = ptrTrb-> ptrProx;
		free(ptrTrb);
		ptrTrb=ptrTemp;
	}

}



/*
 * lista01.c
 *
 *  Created on: 21/01/2019
 *      Author: cristhian
 */
#include <stdio.h>
#include <stdlib.h>
#include "lista01.h"


int insereIndIniLstLst(int valor, FormatoLst* argLista){
    FormatoNo * novoElemento = (FormatoNo *)malloc(sizeof(FormatoNo));
    novoElemento->Info = valor;
    novoElemento->Link = argLista->IndIniLst;
    argLista->IndIniLst = novoElemento;
     if(argLista->IndIndFimLstLst == NULL){ //l->IndIniLst->Link == NULL ou novoElemento->Link == NULL
    	 argLista->IndIndFimLstLst = argLista->IndIniLst;
    	 printf("insereIndIniLstLst: Condição dada quando a lista está vazia antes de inserir um elemento. \n");
     }
     return 0;
}


void insereFinalLst(int valor, FormatoLst * argLista){
   FormatoNo * novoElemento = (FormatoNo *)malloc(sizeof(FormatoNo));
   novoElemento->Info = valor;
   novoElemento->Link = NULL;
   if(argLista->IndIniLst == NULL){
	   argLista->IndIniLst = novoElemento;
	   printf("insereFinalLst: Condição dada quando a lista está vazia antes de inserir um elemento \n");
   }
   else{
      argLista->IndIndFimLstLst->Link = novoElemento;
   }
   argLista->IndIndFimLstLst = novoElemento;
}

int removeInLst(FormatoLst * argLista){
    if(argLista->IndIniLst == NULL){
       return -1;
    }
    int tmp = argLista->IndIniLst->Info;
    FormatoNo * removido = argLista->IndIniLst;
    argLista->IndIniLst = argLista->IndIniLst->Link;
    free(removido);
    if(argLista->IndIniLst == NULL){
    	argLista->IndIndFimLstLst = NULL;
    }
    return tmp;
}

int estaVazia(FormatoLst * argLista){
    if(argLista->IndIniLst == NULL){
       return 1;
    }
    return 0;
}

int removeFinal(FormatoLst * argLista){
    if(argLista->IndIniLst == NULL){
       return -1;
    }
    int tmp = argLista->IndIndFimLstLst->Info;
    FormatoNo * ultimo = argLista->IndIniLst;
    FormatoNo * penultimo = NULL;
    while(ultimo->Link != NULL){
         penultimo = ultimo;
         ultimo = ultimo->Link;
    }
    if(penultimo != NULL){
       penultimo->Link = NULL;
       argLista->IndIndFimLstLst = penultimo;

    }else{//lista possui apenas um elemento
    	argLista->IndIniLst = NULL;
    	argLista->IndIndFimLstLst = NULL;
    }
    free(ultimo);
    return tmp;

}

void inserir(int pos, int valor, FormatoLst * argLista){
     if( pos <= 0){
        insereIndIniLstLst(valor,argLista);
     }else{
         FormatoNo * atual = argLista->IndIniLst;
         int i = 0;
         for(i = 0; i < (pos-1) && atual != NULL ;i++){
               atual = atual->Link;
         }
         if(atual == NULL || atual == argLista->IndIndFimLstLst){
              insereFinalLst(valor,argLista);
         } else{
              FormatoNo * novo = (FormatoNo *)malloc(sizeof(FormatoNo));
              novo->Info = valor;
              novo->Link = atual->Link;
              atual->Link = novo;
         }
     }
}


int remover(int pos, FormatoLst * argLista){
	if(estaVazia(argLista)){
		return -1;
	}
	if(pos < 0){
		return -1;
	}
	FormatoNo * removido = argLista->IndIniLst;
	FormatoNo * ant_removido = NULL;
	int i = 0;
	for (i = 0; i < pos && removido != NULL; i++) {
		ant_removido = removido;
		removido = removido->Link;
	}
	if(removido != NULL){
		if(removido == argLista->IndIniLst){
			argLista->IndIniLst = removido->Link;
		}else{
			ant_removido->Link = removido->Link;
		}
		if(removido == argLista->IndIndFimLstLst){
			argLista->IndIndFimLstLst = ant_removido;
		}
		int tmp = removido->Info;
		free(removido);
		return tmp;
	}
	return -1;
}


int busca(int valor, FormatoLst * argLista){
    FormatoNo * atual = argLista->IndIniLst;
    FormatoNo * anterior = NULL;
    while(atual != NULL && atual->Info != valor){
       anterior = atual;
       atual = atual->Link;
    }
    if(atual == NULL){
        return -1;
    }else if (atual == argLista->IndIniLst){
        return atual->Info;
    }else if (atual == argLista->IndIndFimLstLst){
    	argLista->IndIndFimLstLst = anterior;
    }
    anterior->Link = atual->Link;
    atual->Link = argLista->IndIniLst;
    argLista->IndIniLst = atual;
    return atual->Info;
}

int busca1(int valor, FormatoLst * argLista){
    FormatoNo * atual = argLista->IndIniLst;
    int cont = 0;
    while(atual != NULL && atual->Info != valor){

       atual = atual->Link;
       cont++;
    }
    if(atual == NULL){
        return -1;
    }
    int ret = remover(cont,argLista);
    insereIndIniLstLst(ret,argLista);
    return ret;

}


void imprimeLista(FormatoLst * argLista){
   FormatoNo * atual = argLista->IndIniLst;
    printf("Lista:");
    while(atual != NULL){
  	printf(" %d",atual->Info);
        atual = atual->Link;
    }
    printf("\n");

}


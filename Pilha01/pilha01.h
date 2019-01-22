/*
 * pilha01.h
 *
 *  Created on: 21/01/2019
 *      Author: cristhian
 */

typedef struct lista Lista;
typedef struct pilha Pilha;

Pilha* criar_pilha();
void push(Pilha* p, float v);
float pop(Pilha* p);
int vazia(Pilha* p);
void liberar(Pilha* p);
float topo(Pilha* p);

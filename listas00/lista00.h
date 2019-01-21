/*
 * lista00.h
 *
 *  Created on: 21/01/2019
 *      Author: cristhian
 */

typedef struct lista Lista01; // Representa um nó da lista
//Função de criação de lista
Lista01* criarLista();

//Função que inseri no inicio da lista

/*A função recebe dos parâmetros de entrada, uma lista sobre
  a qual será inserido o novo elemento, como também a informação
  do novo elemento.
  Ela tem como valor retorno a nova lista */

Lista01* inserirLista(Lista01* argLista, int argInfo);

//Função para imprimir os elementos da lista
void imprimirLista(Lista01* argLista);

//Função para verificar se a lista está vazia
int testarVazia(Lista01* argLista);

//Buscar elementos na lista
Lista01* busca(Lista01* argLista, int infoBusca);

//Função para excluir elementos da lista
Lista01* excluirLista(Lista01* argLista, int infoBusca);

//Função para Liberar a lista
void liberar(Lista01* argLista);

//Inserir no Inicio da Lista
//Lista01* insereInicio(Lista01* argLista, int valor, t_lista * l  )

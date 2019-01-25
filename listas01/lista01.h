typedef struct elemento{int Info; struct elemento * Link;} FormatoNo; // Representa um nó da lista
typedef struct lista{FormatoNo * IndIniLst;	FormatoNo * IndFimLst; }FormatoLst; // Representa uma lista

//Função para inserir elemento no inicio da lista
int insereInicio(int valor, FormatoLst* argLista);
//Função para inserir elemento no final da lista
void insereFinal(int valor, FormatoLst * argLista);

int removeInicio(FormatoLst * argLista);
int estaVazia(FormatoLst * argLista);
int removeFinal(FormatoLst * argLista);
void inserir(int pos, int valor, FormatoLst * argLista);
int remover(int pos, FormatoLst * argLista);
int busca(int valor, FormatoLst * argLista);
int busca1(int valor, FormatoLst * argLista);
void imprimeLista(FormatoLst * argLista);

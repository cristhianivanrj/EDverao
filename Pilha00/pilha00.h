typedef struct elemento{
	int info;
	struct elemento * link;
	}FormatoNo;


typedef struct lista{
	FormatoNo * IndIniLst;
	FormatoNo * IndFimLst;
}FormatoLst;


typedef struct pilha{
	FormatoLst * argLista;
}FormatoPlha;


FormatoLst * criarLista();
FormatoPlha * criarPilha();
int insereIndIniLst(int valor, FormatoLst * argLista);
void insereFinal(int valor, FormatoLst * argLista);
int removeIndIniLst(FormatoLst * argLista);
int estaVazia(FormatoLst * argLista);
int removeFinal(FormatoLst * argLista);
void inserir(int pos, int valor, FormatoLst * argLista);
int remover(int pos, FormatoLst * argLista);
void empilhar(int valor, FormatoPlha * p);
int desempilhar(FormatoPlha * p);
int estaVaziaPilha(FormatoPlha * p);
int main (int argc, char *argv[]);




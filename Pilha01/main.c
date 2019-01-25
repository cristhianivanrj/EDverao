#include <stdio.h>
#include "pilha01.h"

int main(int argc, char *argv[])
{
	Pilha* p;

	p = criar_pilha();
	push(p, 10);
	push(p, 20);
	push(p, 30);
	push(p, 1.5);
	push(p, 40);
	printf("Topo: %.2f\n", topo(p));
	pop(p);
	printf("Topo: %.2f\n", topo(p));
	pop(p);
	printf("Topo: %.2f\n", topo(p));
	pop(p);
	printf("Topo: %.2f\n", topo(p));
	pop(p);
	printf("Topo: %.2f\n", topo(p));
	pop(p);
	printf("Topo: %.2f\n", topo(p));
	return 0;
}

#include "pilha.h"

int main()
{
	Pilha p;
	Item aux;

	FPVazia(&p);

	aux.val = 10;
	Push(&p, aux);
	aux.val = 20;
	Push(&p, aux);
	aux.val = 30;
	Push(&p, aux);

	PImprime(&p);

	Pop(&p, &aux);
	printf("Valor desempilhado:%d\n", aux.val);
	
	PImprime(&p);

	return 0;
}

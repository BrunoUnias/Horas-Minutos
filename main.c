#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct hm{
	int horas;
	int minutos;
	
};

struct hm myHm;

int main(int argc, char *argv[]) {
	int tempo;
	int horas_segundo = 60;
	
	printf("informe o tempo\n");
	scanf("%d",&tempo);
	myHm.horas = tempo/horas_segundo;
	myHm.minutos = tempo % horas_segundo;
	printf("Horas|Minutos\n");
	printf("%d : %d",myHm.horas,myHm.minutos);
	
	return 0;
}

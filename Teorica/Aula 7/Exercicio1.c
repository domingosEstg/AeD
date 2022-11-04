#include <stdio.h>
#include <string.h>
#include <locale.h>
	 
int main(){
	setlocale(LC_ALL, "portuguese");
	char nome1[200] = {'\0'};
	char nome2[200] = {'\0'};
	char nome3[200] = {'\0'};
char strtrocar[200] = {'\0'};
		
printf("\nInsira o primeiro nome: ");
gets(nome1);
printf("\nInsira o segundo nome: ");
gets(nome2);
printf("\nInsira o terceiro nome: ");
gets(nome3);
for(int x = 0; x < 3; x++){
	if(strcmp(nome1, nome2) > 0){
		strcpy(strtrocar, nome1);
		strcpy(nome1, nome2);
		strcpy(nome2, strtrocar);
	}
	
	if(strcmp(nome2, nome3) > 0){
		strcpy(strtrocar, nome2);
		strcpy(nome2, nome3);
		strcpy(nome3, strtrocar);
	}

}
	
printf("\n\nOrdenação final: %s - %s - %s ", nome1, nome2, nome3);
		
return 0;
}

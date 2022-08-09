
//QUESTÃO 01
#include <stdio.h>
#include <stdlib.h>
void resursiva (int num){
if (num %2 == 0)num-=1;
for (int i = num; i >0; i-=2){
printf("%i ,",i);
}
}
int main(){
puts("Digite um valor:");
int num ;
scanf("%i",&num);
resursiva(num);
return 0;
}
//QUESTÃO 02
#include <stdio.h>
#define MAX 1000
int invertido (int i, int tamanho){
char frase[MAX],imprime[MAX];
fgets(frase,1000,stdin);
for(tamanho=0; frase[tamanho]; tamanho++);
for(i=0;frase[i];i++){
imprime[i]=frase[tamanho-i-1];
}
imprime[i]='\0';
printf("Frase Invertida: %s\n",imprime);
return 0;
}
int main(){
puts("Digite uma frase:");
int i, tamanho;
scanf ("%i %i", &i,&tamanho);
int frase = invertido(i, tamanho);
}
//QUESTÃO 03
#include <stdio.h>
int fatorar (int fat, int valor){
for(fat = 1; valor > 1; valor = valor - 1)
fat = fat * valor;
printf("O fatorial de 5 é:%d\n", fat);
return fat;
}
int main(){
puts("Digite um valor:");
int fat,valor;
scanf("%i",&valor);
int fatorial = fatorar(fat, valor);
}
//QUESTÃO 04
#include <stdio.h>
void hanoi(int n,char origem,char destino,char auxiliar){
if(n==1){
printf("\nMova o disco 1 da base %c para a base 
%c",origem ,destino);
return;
}
hanoi(n-1,origem,auxiliar,destino);
printf("\nMova o disco %d da base %c para a base 
%c",n,origem,destino);
hanoi(n-1,auxiliar,destino,origem);
}
int main(){
int n;
printf("Digite o numero de discos : ");
scanf("%d",&n);
printf("Para resolver a torre de Hanois faça :\n\n");
hanoi(n,'A','C','B');
printf("\n");
return 0;
}

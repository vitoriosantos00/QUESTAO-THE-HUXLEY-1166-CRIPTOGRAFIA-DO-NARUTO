#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char *alfa[28];
void minusculo(char string[]);

int posicao(char string);

int main() {
  
  int i=0;
  char frase[1000];
  
  //PREENCHER UM VETOR COM O ALFABETO
  
  for(char a='a'; a<='z';a++){
    alfa[i]=a;
    i++;
  }
  
  //GARANTIR QUE A POSIÇÃO 26 DO VETOR SEJA VAZIA
  
  alfa[26]=' ';
  
  //LER A FRASE DO USUÁRIO
  
  scanf("%[^\n]", frase);
  
  minusculo(frase);
  
  //IMPRIMIR O VETOR CHAMANDO A FUNÇÃO PARA REALIZAR A CRIPTOGRAFIA
  
  for(int i=0; i<strlen(frase);i++){
    printf("%c", alfa[posicao(frase[i])]);
  }
  return 0;
}

//FUNÇÃO PARA TORNAR TODOS OS CARACTERES DO VETOR EM CARACTERES MINÚSCULOS

void minusculo(char string[]){
  for(int i=0;i<strlen(string);i++){
    string[i]=tolower(string[i]);
  }
}

//FUNÇÃO PARA RETORNAR A POSIÇAO DA LETRA SELECIONADA NA ORDEM INVERSA DO ALFABETO

int posicao(char string){
  for(int j=0;j<28;j++){
    if(j==26 && string==alfa[j]){
      return 26;
    } else if(string==alfa[j]){
      return (25-j);
    }
  } 
}
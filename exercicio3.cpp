# include <iostream>

int main(){
    int num;

    printf("Digite um número:   ");
    scanf("%d", &num);

    if(num >= 0){
        printf("O número  é positivo ou igual a zero \n");
    } else{
        printf("O número  é negativo \n");
    }

    return 0;
}
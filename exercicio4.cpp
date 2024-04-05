# include <iostream>

int main(){
    int num;

    printf("Digite um número:   ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O número é par.\n");
    } else{
        printf("O número é impar \n");
    }

    return 0;
}
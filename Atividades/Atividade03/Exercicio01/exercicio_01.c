
int main(void) {
int x = 100;
  
   printf("Digite a pontuação total do jogador: ");
   scanf("%d" , &x);

    if (x >= 0 && x <= 9)
      printf("a pontuação obtida é insuficiente");
  else 
      if (x >= 10 && x <= 39)
        printf("a pontuação obtida é regular");
  else
        if (x >= 40 && x <= 69)
            printf("a pontuação obtida é bom");
  else
          if (x >= 70 && x <= 89)
            printf("a pontuação obtida é ótimo");
  else
            if (x >= 90 && x <= 100)
              printf("a pontuação obtida é excelente");
     
    
  return 0;
}

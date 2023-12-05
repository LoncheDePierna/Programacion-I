#include<stdio.h>

int main(){
    
int a[4][3],i;

    printf("Dame los valores del vector 1 \n");
for(i=0 ; i<4 ; i++ ){
printf("valor %d: ", i + 1);
    scanf("%d",&a[i][0]);
}
    
    printf("\nDame los valores del vector 2 \n");
for(i=0 ; i<4 ; i++ ){
printf("valor %d: ", i + 1);
    scanf("%d",&a[i][1]);
}

printf("\nResultado de la operacion de vectores\n");
  i = 0;
  while(i<4){
    a[i][2] = a[i][0] + a[i][1];
     printf("Operacion %d =  %d \n",i + 1,a[i][2]);
    i++;
  }
}

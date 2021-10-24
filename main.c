#include <stdio.h>
#include <stdlib.h>

int main(){
  int choices, price, payment,change;
  printf("please pick your order");
  printf("\n[1].NOVA (36.00)\n[2].ICE CREAM(25.00)\n[3].COKE ZERO(67.00)\nChoice:");
  scanf("%d",&choices);

  switch(choices){

   case 1:
       price =36;
       printf("please input payment:");
       scanf("%d", &payment);
       if(payment >= price){
       printf("purchase complete! heres your NOVA...THANK YOU PLEASE COME AGAIN^\n");
       change = payment-price;
       printf("\nChange: %d\n", change);
}
else{
    printf("not enough funds! please try again");
}
    break;

   case 2:
       price=25;
       printf("please input payment:");
       scanf("%d",&payment);
       if(payment >= price){
       printf("purchase complete! heres your ICE CREAM...THANK YOU PLEASE COME AGAIN^\n");
       change = payment-price;
       printf("\nChange: %d\n", change);
}
else{
    printf("not enough funds! please try again");
}
    break;

   case 3:
       price=67;
       printf("please input payment:");
       scanf("%d",&payment);
       if(payment >= price){
       printf("purchase complete! heres your COKE ZERO...THANK YOU PLEASE COME AGAIN^\n");
       change = payment-price;
       printf("\nChange: %d\n", change);
}
else{
    printf("not enough funds! please try again");
}
   break;
}
    return 0;
}

#include <stdio.h>

int main(){
    int choices, price, payment, change;
    printf("please pick your order");
    printf("\n[1].Coca Cola (Php45.00)\n[2].Nova Multigrain snack (Php15.00)\n[3].Nissin Cup Noodles (Php27.00)\nChoices");
    scanf("%d",&choices);

    switch(choices){

        case 1:
                price = 45.00;
                printf("please input payment :");
                scanf("%d",&payment);
                if(payment >= price){
                printf("you have purchased Coca cola successfully\n");
                change = payment-price;
                printf("\nChange: %d\n", change);
}
        else{
            printf("you dont have enough funds");
        }
            break;

        case 2:
                price = 15.00;
                printf("please input payment :");
                scanf("%d",&payment);
                if(payment >= price){
                printf("you have purchased Nova Multigrain Snack successfully\n");
                change = payment-price;
                printf("\nChange: %d\n", change);
}
        else{
            printf("you dont have enough funds");
        }
            break;

         case 3:
                price = 27.00;
                printf("please input payment :");
                scanf("%d",&payment);
                if(payment >= price){
                printf("you have purchased Nissin Cup Noodles successfully\n");
                change = payment-price;
                printf("\nChange: %d\n", change);
}
        else{
            printf("you dont have enough funds");
        }

            break;
                }
return 0;








}

#include <stdio.h>
#include <stdlib.h>

struct prod{
    int code;
    char name[20];
    int quantity;
    float price ;
    float price_ttc;
};

    struct prod arr[100];
        int index=0;

void addproduct(){

   printf("\n__________________________________________________\n");
        printf("\nentre the name: ");
        scanf("%s",&arr[index].name);

        printf("\nentre the code: ");
        scanf("%d",&arr[index].code);

        printf("\nentre the countity: ");
        scanf("%d",&arr[index].quantity);

        printf("\nentre the price: ");
        scanf("%f",&arr[index].price);

        arr[index].price_ttc =arr[index].price + (arr[index].price*0.15);
        printf("peice TTC :%.2f",arr[index].price_ttc);
        index++;
    printf("\n__________________________________________________\n");

    }

void morprod(){
       int i,ch;
         printf("\n________________number od medicine____________________\n");
         printf("\n>>please enter how many medicine you want to add: ");
         scanf("%d",&ch);
         for(i=0;i<ch;i++){

                addproduct();
}}

void display(){

    printf("\t \t \t \t ALL PRODUCTS  \n");
    printf("-----------------------------------------------------------------------------------\n");
    printf("   Code |  Name  |  Quantity  |  Price |  Price TTC |\n");
    printf("-----------------------------------------------------------------------------------\n");
       for( int i = 0 ; i<= index; i++)
    printf("   %d       %s         %d       %.2f          %.2f      \n", arr[i].code, arr[i].name, arr[i].quantity, arr[i].price,arr[i].price_ttc);



}




void sortbyprice(){
    	int i,j;
   	for(i=0;i<index;i++){
   		for (j=i+1;j<index;j++){
   			if (arr[i].price<arr[j].price){
   			   struct prod swap=arr[i];
   				arr[i]=arr[j];
   				arr[j]=swap;
			   }}}
			    display();
         }


void buying(){
    int code,quantity;
    printf("\nplease enter the code of medicine:");
    scanf("%d",&code);
    printf("\nplease enter the quantity you whanted:");
    scanf("%d",&quantity);
         for(int i=0;i<index;i++)
         if(code == arr[i].code){
            if(quantity <= arr[i].quantity )
            arr[i].quantity-=quantity;
            printf("****done!!****");
           }else{
                printf("there is just %d products avalible ",arr[i].quantity );
                }
  }


void searching(){
     int corq ;//code or quantity
     int i;

        printf("\n==================choosing way of searching ====================\n");

        printf("\  enter the code or quantity of the medicine :");
        scanf("%d",&corq);
        printf("\n================================================================\n");

    printf("-----------------------------------------------------------------------------------\n");
    printf("|number|  code  |  Name  |  Quantity  |  Price  |  Price TTC |\n");
    printf("-----------------------------------------------------------------------------------\n");
          for(i=0; i <index; i++)
          {
                 if(arr[i].quantity==corq || arr[i].code==corq){
   printf("   %d        %d       %s         %d       %.2f           %.2f      \n", i+1, arr[i].code, arr[i].name, arr[i].quantity, arr[i].price,arr[i].price_ttc);

			}else{
			    printf("sorry element  not  founded");

			               }}}

void stockstatus(){
     int i;
        printf("\nthe product that are equal or ander three are:\n");
printf("\n|  code  |  Name  |  Quantity  |  Price  |  Price TTC |\n");
    for( i=0;i<index;i++){
        if(arr[i].quantity<=3)

printf("\n    %d      %s         %d         %.2f       %.2f     \n",arr[i].code,arr[i].name,arr[i].quantity,arr[i].price,arr[i].price_ttc);}

}

void suplystock(){
    int code,quantity;
    printf("\n enter the code of the product: ");
    scanf("%d",&code);
    printf(" \n enter the quantity of the product that you wanna suply:");
    scanf("%d",&quantity);

         for(int i=0;i<index;i++){
       if(arr[i].code==code){

           arr[i].quantity+=quantity;
    }else{
        printf("***there is no such a product with this code***");  }
 }

}


void deletingproduct(){
    int code;
   /* printf("\nplease enter the code of the medicine that you wanna delete\n");
    scanf(">>%d",&code);
         for(int i=0;i<index;i++){
            if(arr[i]==code){

            }
         }*/

}


void menu(){
     printf("\n____________________MENU_____________________\n");

           printf("\n\t.1.adding a new medicine");
           printf("\n\t.2.adding multipule medicines");
           printf("\n\t.3.medicine list");
           printf("\n\t.4.medicine sells ");
           printf("\n\t.5.searching for a medicine");
           printf("\n\t.6.stock status");
           printf("\n\t.7.Supply the stock");
           printf("\n\t.7.deleting a medicine");
           printf("\n\t.8.Sales statistics");
           printf("\n\t.9.EXITE");
     printf("\n____________________________________________\n");


}



int main(){

    int choice,i;


        do{
                menu();

             sleep(1);
       printf("\n********************************************\n");
       printf("\n >> please enter your choice:");
       scanf("%d",&choice);
       printf("\n********************************************\n");


    switch(choice){

    case 1:
        addproduct();

         break ;
     case 2:
        morprod();

        break;

    case 3:
        sortbyprice();


        break;
    case 4:
        buying();
    break;

    case 5:
        searching();
        break;
    case 6:
        stockstatus();
         break;
    case 7:
        suplystock();
        break;

    case 8:
        deletingproduct();
        break;
    case 9:
        printf("\nthe programe is cosled");
        break;
    default:
        printf("\nthere is no comand with this number");
        sleep(3);
        system("cls");}




    }while(choice!=10);
    return 0;}

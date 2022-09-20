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
        printf("entre the name ");
        scanf("%s",&arr[index].name);
        printf("entre the code ");
        scanf("%s",&arr[index].code);
        printf("entre the countity ");
        scanf("%s",&arr[index].quantity);
        printf("entre the price ");
        scanf("%s",&arr[index].price);
    }

void morprod(){
       int i,ch;
         printf("\n>>please enter how many medicine you want to add: ");
         scanf("%d",&ch);
         for(i=0;i<ch;i++){

            addproduct();
}}

void display(){

        for(int i=0;i<index;i++){

    printf("name:%s",arr[index].name);
    printf("code:%d",arr[index].code);
    printf("price:%f",&arr[index].price);
    printf("price TTC:%f",&arr[index].price_ttc);
}}

void sortbyprice(){
    struct prod swap;
    int j,i ;
    for(int i=0;i<index;i++)
        for(j=i+1;j<index;j++){
                if (arr[i].price>arr[j].price){
           swap=arr[i];
           arr[i]=arr[j];
           arr[i]=swap;
           display();
}}}

void buying(){
    int code,quantity;
    printf("please enter the code of medicine");
    scanf("%d",&code);
    printf("please enter the quantity you whanted");
    scanf("%d",&quantity);
         for(int i=0;i<index;i++){
         if(code == arr[index].code){
         if( quantity <= arr[index].quantity )
            arr[index].quantity-=quantity;
            printf("****done!!****");
           }else{
                printf("there is just %d products avalible ",arr[index].quantity );
                }
  }
 }

void searching(){
     int corq ;//code or quantity
     int i;

        printf("\n==================choosing way of searching ====================\n");

        printf("\t \t \t \t enter the code or quantity of the medicine :");
        scanf("%d",&corq);
        printf("\n================================================================\n");

              system("cls");
    printf("-----------------------------------------------------------------------------------\n");
    printf(" |  code  |  Name  |  Quantity  |  Price  |\n");
    printf("-----------------------------------------------------------------------------------\n");
          for(i=0; i <index; i++)
          {
                 if(arr[index].quantity==corq || arr[index].code==corq){
    printf("    %d       %s          %d         %f     \n", arr[index].code,arr[index].name,arr[index].quantity,arr[index].price);

			}else{
			    printf("sorry element  not  founded");

			               }}}

void stockstatus(){

    for(int i=0;i<index;i++){
        if(index<=3){
            printf("\nthe product that are equal or ander three are:");

            printf("\n    %d       %s          %d         %f     \n", arr[index].code,arr[index].name,arr[index].quantity,arr[index].price);

        }
    }

}

void suplystock(){
    int code,quantity;
    printf("\n enter the code of the product: ");
    scanf("%d",&code);
    printf(" \n enter the quantity of the product that you wanna suply:");
    scanf("%d",&quantity);

         for(int i=0;i<index;i++){
       if(arr[index].code==code){

           arr[index].quantity+=quantity;
    }else{
        printf("***there is no such a product with this code***");  }
 }

}


void deletingproduct(){
    int code;
    printf("\nplease enter the code of the medicine that you wanna delete\n")
    scanf(">>%d",&code);
         for(int i=0;i<index;i++){
            if(arr[index]==code){

            }
         }






}










































int main()
{
    printf("Hello world!\n");
    return 0;
    }

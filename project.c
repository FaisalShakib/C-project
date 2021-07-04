#include<stdio.h>
int main()

    int product_pricePerUnit[] = {48, 50, 100, 28, 40, 100, 20, 50, 16, 80};
    char product_name[] = {"Rice","Milkvita","Rupchada Soyabin Oil 1 ltr","Flour","Sugar","Butter","Soap","Pepsodent","Biscuit","7 Up 2 ltr"};

  float t, price;
  int q;
 // float total;
  char product;
  int x;


  printf("\n\n\n\t\tWelcome to supershop.");
  printf("\n\n\t\tOur available products are: ");
  printf("\n\t1.Rice 1 KG,            Price: 48 Taka");
  printf("\n\t2.Milkvita 1 Liter,     Price: 50 Taka");
  printf("\n\t3.Rupcada Oil 1 Liter,  Price: 100 Taka");
  printf("\n\t4.Flour 1 KG,           Price: 28 Taka");
  printf("\n\t5.Sugar 1 KG,           Price: 40 Taka");
  printf("\n\t6.Butter,               Price: 100 Taka");
  printf("\n\t7.Soap,                 Price: 20 Taka");
  printf("\n\t8.Pepsodent,            Price: 50 Taka");
  printf("\n\t9.Biscuit,              Price: 16 Taka");
  printf("\n\t10. Seven up 2 liter,   Price: 80 Taka");



int total = 0;
  printf("\n\n\tEnter the digit for products: ");
  scanf("%d", &x);

  printf("\n\tEnter quantity: ");
  scanf("%d", &q );
  int itemPrice = q * product_pricePerUnit[x-1];
  printf("\nItem Price: %d", itemPrice);
/*
  switch(x)
  {
   case 1:
         printf("\n\tEnter quantity: ");
         scanf("%d", &q );
         t = q*48;
         printf("Price of Rice: %f", t);
         break;
   case 2:
         printf("\n\tEnter quantity: ");
         scanf("%d", &q);
         t = q*50;
         printf("Price of Milkvita: %f", t);
         break;
   case 3:
         printf("\n\tEnter quantity: ");
         scanf("%d", &q);
         t = q*495;
         printf("Price of Rupcada Oil: %f", t);
         break;
   case 4:
         printf("\n\tEnter quantity: ");
         scanf("%d", &q);
         t = q*28;
         printf("Price of Flour: %f", t);
         break;
   case 5:
         printf("\n\tEnter quantity: ");
         scanf("%d", &q);
         t = q*40;
         printf("Price of Sugar: %f", t);
         break;
   case 6:
         printf("\n\tEnter quantity: ");
         scanf("%d", &q);
         t = q*100;
         printf("Price of Butter: %f", t);
         break;
   case 7:
         printf("\n\tEnter quantity: ");
         scanf("%d", &q);
         t = q*20;
         printf("Price of Soap: %f", t);
         break;
   case 8:
         printf("\n\tEnter quantity: ");
         scanf("%d", &q);
         t = q*50;
         printf("Price of Pepsodent: %f", t);
         break;
   case 9:
         printf("\n\tEnter quantity: ");
         scanf("%d", &q);
         t = q*16;
         printf("Price of Biscuit: %f", t);
         break;
   case 10:
          printf("\n\tEnter quantity: ");
         scanf("%d", &q);
         t = q*80;
         printf("Price of Seven up: %f", t);
         break;
   dauflt:
         printf("Done!");
         break;
  }

*/
}


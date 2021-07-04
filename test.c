#include<stdio.h>
int main()
{
    int product_pricePerUnit[] = {48, 50, 495, 28, 40, 100, 20, 50, 16, 80};

  //  char product_name[] = {"Rice, Milkvita, Rupchada Soyabin Oil 1 ltr, Flour, Sugar, Butter, Soap, Pepsodent, Biscuit, 7Up 2 ltr"};

  float price,grandTotal,v,sum[100];
  int x,quantity,n,i,j,total1[n];  // i,j is for loop, n= number of products, x= price per unit
  float per_total;
  char product;



  printf("\n\n\n\t\tWelcome to supershop.");
  printf("\n\n\t\tOur available products are: ");
  printf("\n\t1.Rice 1 KG,            Price: 48 Taka");
  printf("\n\t2.Milkvita 1 Liter,     Price: 50 Taka");
  printf("\n\t3.Rupcada Oil 5 Liter,  Price: 495 Taka");
  printf("\n\t4.Flour 1 KG,           Price: 28 Taka");
  printf("\n\t5.Sugar 1 KG,           Price: 40 Taka");
  printf("\n\t6.Butter,               Price: 100 Taka");
  printf("\n\t7.Soap,                 Price: 20 Taka");
  printf("\n\t8.Pepsodent,            Price: 50 Taka");
  printf("\n\t9.Biscuit,              Price: 16 Taka");
  printf("\n\t10. Seven up 2 liter,   Price: 80 Taka");



    printf("\n\nEnter total type of bought products: ");
    scanf("%d",&n);


    for(i=0;i<n;i++){
        printf("\n\n\tItem no: ");
        scanf("%d", &x);
        printf("Price: %d",product_pricePerUnit[x-1]);
        printf("       Quantity: ");
        scanf("%d",&quantity );
        int itemPrice = quantity * product_pricePerUnit[x-1];

        v = itemPrice*(7.5/100);
        printf("VAT =%.2f",v);
        per_total = itemPrice + v;
        printf("\t\t\t\tTotal: %.2f",per_total);

        sum[i]=per_total;   // this may work to store all per_total in a array, have to check.
    }
    printf("\n\n");
return 0;
}


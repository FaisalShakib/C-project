#include<stdio.h>
#include<string.h>
void screenheader();
void features();

void screenheader()
{
    printf("\n                       :::::::::::::::::::::::::::::::::::::");
    printf("\n                       ::                                 ::");
    printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
    printf("\n                       ::     @                     @     ::");
    printf("\n                       ::     @      WELCOME TO     @     ::");
    printf("\n                       ::     @                     @     ::");
    printf("\n                       ::     @      SUPERSHOP!     @     ::");
    printf("\n                       ::     @                     @     ::");
    printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
    printf("\n                       ::                                 ::");
    printf("\n                       :::::::::::::::::::::::::::::::::::::\n\n");

    printf("Press any key to continue: ");
    getch();
}
void features()
{
  printf("\n\n\t\tOur available products are: ");
  printf("\n\t1.Rice 1 KG,            Price: 48 Taka");
  printf("\n\t2.Milkvita 1 Liter,     Price: 50 Taka");
  printf("\n\t3.Rupcada Oil 1 Liter,  Price: 80 Taka");
  printf("\n\t4.Flour 1 KG,           Price: 28 Taka");
  printf("\n\t5.Sugar 1 KG,           Price: 40 Taka");
  printf("\n\t6.Butter,               Price: 100 Taka");
  printf("\n\t7.Soap,                 Price: 20 Taka");
  printf("\n\t8.Pepsodent,            Price: 50 Taka");
  printf("\n\t9.Biscuit,              Price: 16 Taka");
  printf("\n\t10.Seven up 2 liter,    Price: 80 Taka");
  printf("\n\t11.Jam,                 Price: 90 Taka");
  printf("\n\t12.XYZ Shampoo,         Price: 120 Taka");
  printf("\n\t13.Bread,               Price: 30 Taka");
  printf("\n\t14.1 dozen Eggs,        Price: 100 Taka");
  printf("\n\t15.Shaving cream,       Price: 80 Taka");
  printf("\n\t16.Coffee,              Price: 270 Taka");
  printf("\n\t17.Coffee mate,         Price: 200 Taka");
  printf("\n\t18.Salt 1 KG,           Price: 50 Taka");
  printf("\n\t19.Noodles 1 packet,    Price: 15 Taka");
  printf("\n\t20.Savlon 500 ml,       Price: 150 Taka");
  }


int main()


{
    screenheader();
    features();

    int product_pricePerUnit[20] = {48, 50, 80, 28, 40, 100, 20, 50, 16, 80, 90, 120, 30, 100, 80, 270, 200, 50, 15, 150};
    char product_name[20][50] =    {     "Rice","Milkvita","Rupchada Soyabin Oil 1 Liter",
                                         "Flour","Sugar","Butter","Soap","Pepsodent",
                                         "Biscuit","7 Up 2 Liter", "Jam",
                                         "Shampoo", "Bread", "Eggs", "Shaving cream",
                                         "Coffee", "Coffee mate", "Salt",
                                         "Noodles", "Savlon"  };



    float price,grandTotal,sum=0.00;
    int x,quantity,n,i;  // i,j is for loop, n= number of products, x= price per unit
    float vat, per_total, discount, itemPrice,back,paidMoney;
    char product,ch;


    printf("\n\nEnter how many products do you want to buy: ");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        printf("\n\nItem no: ");
        scanf("%d", &x);
        if(x<0 || x>20)
        {
         printf("Wrong choice or product is not available. \nPlease see within 1 to 20");
         getch();
         continue;
        }

        printf("Price of %s is : %d", product_name[x-1], product_pricePerUnit[x-1]);

        printf("\t\t\tQuantity: ");
        scanf("%d",&quantity );

        itemPrice = quantity *(float) product_pricePerUnit[x-1];

        printf("Price of item is: %.2f\n", itemPrice);

        vat = itemPrice*(7.5/100);
        scanf(".2f", &vat);

        printf("VAT is: %.2f", vat);



        per_total = itemPrice + vat;
        printf("\t\t\tTotal: %.2f",per_total);

        sum = sum + per_total;    // this works to store all per_total .
    }
    printf("\n\n\n\t\t            Total bill: %.2f\n\n",sum);
     if (sum>400){
            printf("\nVIP customer: Y/N? ");

            getch();

            if(ch=='y' || ch=='Y'){
                printf("Discount: 5%");
                discount = sum * (5/100);
        //scanf("%.2f", &discount);
                grandTotal = sum - discount;
       // scanf("%.2f", &grandTotal);
                printf("\t\t\tGrand Total: %.2f",grandTotal);
                printf("\n\n\t\t\tPaid money: ");
                scanf("%f",&paidMoney);

                back = paidMoney - sum;

                printf("\n\t\t\tChange: %.2f",back);


             }
            else{
                printf("\n\n\t\t\tGrand Total: %.2f\n",sum);
                printf("\n\n\t\t\tPaid money: ");
                scanf("%f",&paidMoney);

                back = paidMoney - sum;

                printf("\t\t\t\tChange: %.2f",back);
            }
    }


    else{
        printf("\n\n\t\t\tGrand Total: %.2f\n",sum);
        printf("\n\n\t\t\tPaid money: ");
        scanf("%f",&paidMoney);

        back = paidMoney - sum;

        printf("\n\t\t\t        Change: %.2f",back);

    }


return 0;
}



#include<stdio.h>
int main(){
    int price,n,quantity,i,j;
    int total1[100];
    printf("enter the total type of products: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("Enter price: ");
    scanf("%d",&price);

    printf("Enter quantity: ");
    scanf("%d",&quantity);

    total1[i] = price*quantity;
    }

    for(j=0;j<n;j++){

        printf("%d ",total1[j]);
    }
    return 0;




}

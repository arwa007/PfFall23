/*
* Programmer: Arwa Feroze
* Date: 24/10/2023
* Description: Use calculateDiscount() to calculate the discount and output the discounted price for a customer based on the count of their total visits and purchase amount.
*/
#include <stdio.h>
float calculateDiscount(int visists, float cost);
int main(){
	
	float total_purchase, after_discount;
	int times_visited;

	printf("How many times have you visited this store?\n");
	scanf("%d", &times_visited);

	printf("Enter the total cost of your purchases today: ");
	scanf("%f", &total_purchase);

	after_discount = calculateDiscount(times_visited, total_purchase);
	
	printf("You have to pay: %f", after_discount);

	return 0;
}//end main

float calculateDiscount(int visits, float cost){

	float new_cost=0;

	if (visits > 10 && cost >= 50){
		new_cost = cost*0.85;
	}else if(visits > 5 && cost >= 30){
		new_cost = cost*0.9;
	}else{
		new_cost = cost;
	}//end if

	return new_cost;

}//end calculateDiscount
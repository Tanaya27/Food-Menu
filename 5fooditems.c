#include<stdio.h>
main()
{
	//1. Display the menu
	printf("Pick a food item : \n1. Pizza- Rs239/-\n2. Burger- Rs129/-\n3. Pasta- Rs179/-\n4. French Fries- Rs99/-\n5. Sandwich- Rs149/-");
	//2. Read their choice
	int choice=0;
	scanf("%d", &choice);
	//3. Display based on their choice
	
	switch(choice)
	{
		case 1:
			printf( "FOOD ITEM - Pizza\n.PRICE - Rs.239/-");
			break;
		case 2:
			printf("FOOD ITEM - Burger\n.PRICE - Rs.129/-");
			break;
		case 3:
			printf("FOOD ITEM - Pasta\n.PRICE - Rs.179/-");
			break;
		case 4:
			printf("FOOD ITEM - French Fries\n.PRICE - Rs.99/-");
			break;
		case 5:
		    printf("FOOD ITEM - Sandwich\n.PRICE - Rs.149/-");
			break;	
		default : printf("Invalid choice");	
	}
}

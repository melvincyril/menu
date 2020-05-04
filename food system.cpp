#include<stdio.h>
main()
{
	printf("welcome to byte\n");
	printf("what do you want to eat today?\n 1.pizza\n 2.burger\n 3.pasta\n 4.french fries\n 5.sandwhich\n 6.surprise me\n ");
	int a=0;
	scanf("%d",&a);
	switch(a)
	{
	
		case 1:
			printf("food item-pizza\n price-rs 239\n");
			break;
		case 2:
			printf("food item-burger\n price-rs 129\n");
			break;
		case 3:
			printf("food item-pasta\n price-rs 179\n");
			break;
		case 4:
			printf("food item-french fries\n price-rs 99\n");
			break;
		case 5:
			printf("food item-sandwich\n price-rs 149\n");
			break;
		case 6:
			printf("food item-chole baturai\n price-rs 30 \n");
			break;
	    default:
	    	printf("sorry invalid number not on the list\n");
	    	break;
    }
    printf("thanks you,\n visit again for a bite \n");
	
}

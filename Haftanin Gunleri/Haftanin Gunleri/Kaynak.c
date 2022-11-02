#include<stdio.h>
#include<stdlib.h>

int main() {

	int gun;

	printf("Haftanin Gununu Rakam Olarak Giriniz: ");
	scanf_s("%d", &gun);

	switch (gun)
	{
	case 1: printf("Pazartesi"); 
		break;
	case 2: printf("Sali"); 
		break;
	case 3: printf("Carsamba"); 
		break;
	case 4: printf("Persembe"); 
		break;
	case 5: printf("Cuma"); 
		break;
	case 6: printf("Cumartesi"); 
		break;
	case 7: printf("Pazar"); 
		break;
	default: printf("1 ile 7 Arasinda Bir Rakam Giriniz.");
		
	}


	return 0;
}
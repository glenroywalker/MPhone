#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
		char reName[20],modelNum[20];
		float phoneBalance;

}MPhone;

void readMPhone (MPhone MPhone)
{
	printf("enter the model of the phone\n");
	gets(MPhone.modelNum);
	printf("enter the name of the person who registered the phone\n");
	gets(MPhone.reName);
	printf("enter the phone's balance\n");
	scanf("%f",&MPhone.phoneBalance);
}

float increaseBalance(int amount,MPhone MPhone)
{
	MPhone.phoneBalance+=amount;
	return MPhone.phoneBalance;
}

void readMPhone(MPhone);
float increaseBalance(int,MPhone);

 int main()
 {
 	float amount=0;
 	MPhone phone;

    readMPhone(phone);
 	printf("enter the amount of money to be added\n");
 	scanf("%i",&amount);

 	increaseBalance(amount,phone);

 	return 0;

 }

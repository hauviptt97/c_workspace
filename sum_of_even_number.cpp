#include<stdio.h>

int main(){
	int sum =0;
	for(int i =1; i<=100; i++)
		if(i%2==0)
			sum+=i;
	printf("tong cac so chan tu 1 den 100 la %d",sum);
	return 0;
}

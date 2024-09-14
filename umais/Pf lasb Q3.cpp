#include<stdio.h>
int main(){
	int costprice; float discount=0,newcost=0,amountsaved=0;
	printf("Enter costprice:");
	scanf("%d",&costprice);
	if(costprice<1500){
	discount=discount+7;
}else if(costprice>=1500 && costprice<3000){
discount=discount+12;
}else if(costprice>=3000 && costprice<5000){
	discount=discount+22;
}else if(costprice>5000){
	discount=discount+30;
}else{
printf("wrong Costprice");
}printf("Original price is:%d\n ",costprice);
newcost=costprice-costprice *discount/100;
printf("newcost is :%f\n",newcost);
amountsaved=costprice-newcost;
printf("amount saved is :%f",amountsaved);
}


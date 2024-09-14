#include<stdio.h>
#include<stdio.h>
int main(){
	int units;
	 float total_electricitybill,sum;
	printf("Enter units:");
	scanf("%d",&units);
	if(units>=0 &&units<=30){
	sum=units*0.60;
}	else if(units>30 && units<=110){
	sum=units*0.85;
} else if(units>110 && units<=210){
	sum=units*1.30;
} 
 else{
sum=units*1.60;
}
total_electricitybill=sum+sum*15/100 ;
printf("total electricitybill is : %f",total_electricitybill);

}

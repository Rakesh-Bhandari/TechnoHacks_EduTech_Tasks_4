#include<stdio.h>
int celsius_to_fahrenheit(float celsius)
{
	float fahrenheit = 0;
	fahrenheit = (celsius*(9.0/5.0))+32;
	printf("%0.2f*C in fahrenheit is %0.2f*F\n",celsius,fahrenheit);
	return 0;
}

int fahrenheit_to_celsius(float fahrenheit)
{
	float celsius = 0;
	celsius = (fahrenheit-32)*(5.0/9.0);
	printf("%0.2f*F in celsius is %0.2f*C\n",fahrenheit,celsius);
	return 0;
}
int main()
{
	int ch;
	float temp;
	
	printf("Temperature converter\n");
	while(1)
	{
	    printf("\nEnter your choice:\n1.Celsius to fahrenheit\n2.Fahrenheit to celsius\n3.Exit\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
		    case 1:
		        printf("\nEnter Temperature in *C:\n");
		        scanf("%f",&temp);
		        celsius_to_fahrenheit(temp);
		        break;
		        
		    case 2:
		        printf("\nEnter Temperature in *F:\n");
		        scanf("%f",&temp);
		        fahrenheit_to_celsius(temp);
		        break;
		
		    case 3:
			    printf("ThankYou...");
			    return 0;
			    
		    default:
		    	printf("Invalid choice...");
			    break;
	    }
    }
    return 0;
}

#include <stdio.h>
/*
John Gerega
*/



int main (void)
{
	//Initializes array
	int grades[10];
	int i;
	int counter = 0;
	//For loop for entering numbers
	for (i = 1; i <= 10; i++)
	{
		/*Takes user input and checks to make sure it is not over 100 or less than 0, 
		then adds it to array Grades*/
		int g;
		printf("Enter a number 0-100: ");
		scanf("%d", &g);
		//checks if g is greater than 100 and breaks the loop if true
		if (g > 100)
		{
			printf("Invalid number\n");
			counter++;
			break;
		}
		//checks if g is less than 0 and breaks the loop if true
		if (g < 0)
		{
			printf("Invalid number\n");
			counter++;
			break;
		}
		else
		{
			grades[i] = g;
			counter++;
		}
		
	}
	//Initialize variables for maximum, minimum, and sum
	int max = -1000000;
	int min = 1000000;
	int sum;
	
	//if statement for when there are less than 10 numbers entered.
	if (counter < 10)
	{
		int d;
		//Assigns value of -1 to remaining spots in the array
		for (d = counter; d <= 10; d++)
		{
			grades[d] = -1;
		}
		int l;
		//for loop for less than ten numbers entered
		for (l=1; l <= 10; l++)
		{
			//Every number except -1 is added to the sum
			if (grades[l] != -1)
			{
				sum = grades[l] + sum;
			}
			//Checks if the value at grades[i] is greater than the maximum value
			if (grades[l] > max)
			{
				max = grades[l];
			}
			//Checks if the value at grades[i] is less than the minimum value and checks to make sure the value is not -1
			if (grades[l] < min && grades[l] != -1)
			{
				min = grades[l];
			}
		}

	}
	
	//For loop for ten numbers entered
	if (counter == 10)
	{
		int h;
	//For loop for setting minimum, maximum and sum
		for (h = 1; h <= 10; h++)
		{
			/*Goes through each value in array then adds it to sum variable, 
			then compares it to Maximum and Minimum*/
			sum = grades[h] + sum;
			//Checks if the value at grades[i] is greater than the maximum value
			if (grades[h] > max)
			{
				max = grades[h];
			}
			//Checks if the value at grades[i] is less than the minimum value
			if (grades[h] < min)
			{
				min = grades[h];
			}	
		}
	}
	//Get the average number and Print values of Sum, Counter, Maximum, Minimum and Average
	if (counter <10)
	{
		int fixavg = sum/counter;
		printf("Average is: %d\n", fixavg);
	}
	else
	{
		int avg = sum/10;
		printf("Average is: %d\n", avg);
	}
	printf("Sum is %d\n", sum);
	printf("Count is %d\n", counter-1);
	printf("Max is %d\n", max);
	printf("Minimum is %d\n", min);
	
	
}
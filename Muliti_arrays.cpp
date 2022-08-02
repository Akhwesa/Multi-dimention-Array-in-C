#include<stdio.h>
int main()
{
	const int stud = 4;
	const int subj = 3;
	int sum;
	int marks[stud][subj]; //array of 4:3 elements
	float average;
	sum=0;
	for (int c=0;c<stud;++c)
	{
		for (int i=0;i<subj;++i)
		{
		
		printf("Enter subject %d for student %d:",i+1, c+1);
		scanf("%d", &marks[i][c]); //get marks
		}
	}
	printf("\n\nDisplaying entries\n\n");
	
	for (int c=0;c<stud;++c)
	{
		for (int i=0;i<subj;++i)
		{
		
		printf("subject %d for student %d = %d\n",i+1, c+1, marks[i][c]);
	
	if (marks[i][c]>=0 && marks[i][c]<=39)
	printf("Fail.\n");
	
	else if (marks[i][c]>= 40 && marks[i][c]<=49)
	printf("scored D.\n");
	
	else if (marks[i][c]>=50 && marks[i][c]<= 59)
	printf("scored C.\n");
	
	else if (marks[i][c]>=60 && marks[i][c]<= 69)
	printf("Scored B.\n");
	
	else if(marks[i][c]>= 70 && marks[i][c]<= 100)
	printf("Scored A.\n");
	
	else 
	printf("Invalid Entry \n");
		sum += marks[i][c];//calc sum
	}
	}
	average = sum/12; //get average
	printf("\nThe class sum is:%d\n",sum);
	printf("\nThe class Average is: %.2f\n", average);
	
	if (average>=0 && average<=39)
	printf("\nClass grade is a Fail.\n");
	
	else if (average>= 40 && average<=49)
	printf("\nThe class grade is D.\n");
	
	else if (average>=50 && average<= 59)
	printf("\nThe class grade is C.\n");
	
	else if (average>=60 && average<= 69)
	printf("\nThe class grade is B.\n");
	
	else if(average>= 70 && average<= 100)
	printf("\nThe class grade is A.\n");
	
	else 
	printf("Invalid Entry \n");
	
return 0;
}

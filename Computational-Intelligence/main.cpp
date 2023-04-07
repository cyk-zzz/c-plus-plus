//***********************************************************************************
//Perceptron
//Written by Haza Nuzly, Soft Computing Research Group, Universiti Teknologi Malaysia
//***********************************************************************************

#include <stdio.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

//Set parameters
#define	iteration 	20
#define	sample		4
#define	feature		2
#define	threshold	0.2
#define	learnrate	0.1	

int 	a,b,i=1;
float	sum, testoutput;
float	InputArray[sample][feature],OutputArray[sample],weight [sample],output[sample],testinput[feature];

FILE 	*InputFile;	
FILE 	*OutputFile;
FILE 	*TrainingFile;
void	initialize ();
void	readdata ();
void	training ();
void	test ();

int main ()
{
	srand( time(0));		//Reset random number generator
	TrainingFile = fopen("Training.txt","w");
	
	initialize ();
	readdata();
	training();
	test();
	
	fclose(TrainingFile);
	return 0;
}

void initialize ()		//Initialize weights
{
	for(a=0; a<feature; a++)
	{
		weight[a]=(double)rand()/(double)RAND_MAX;	//Random [0,1]
	}
}

void readdata ()		//Read input output files
{
	InputFile = fopen("input.txt", "r"); 
	OutputFile = fopen("output.txt", "r");
	
	for(a=0; a<sample; a++)
	{
		for(b=0; b<feature; b++)
		{
			fscanf(InputFile, "%f  ", &InputArray[a][b]);
		}
		fscanf(OutputFile, "%f", &OutputArray[a]);
	}
	
	fclose(InputFile);
	fclose(OutputFile);
}

void training ()		//Perceptron training
{
	while (i<=iteration)
	{
		fprintf(TrainingFile, "Iteration %d\n", i);
		
		for(a=0; a<sample; a++)
		{
			//Output sum
			sum=0;
			for(b=0; b<feature; b++)
			{
				fprintf(TrainingFile, " %f ", weight[b]);
				sum+=InputArray[a][b]*weight[b];
			}
			
			//Step function
			if (sum > threshold)
				output[a]=1;
			else
				output[a]=0;	
				
			fprintf(TrainingFile, "\t%f", output[a]);
				
			//Update weight if output != target output.
			if (output[a] != OutputArray[a])
			{
				fprintf(TrainingFile, "(Error-Update Weight)\n");
				for(b=0; b<feature; b++)
				{
					weight[b]+=learnrate*InputArray[a][b]*(OutputArray[a]-output[a]);
				}
			}	
			else
			{
				fprintf(TrainingFile, "\n");
			}
		}
		
		i++;
	}
	printf("\nTraining completed\n\n");
}

void test ()		//Test trained system
{
	printf("Application Test\n");
	
	//Get input
	for(a=0; a<feature; a++)
	{
		printf("Enter input %d\t:",a);
		scanf("%f",&testinput[a]);
	}
	
	//Calculate output using trained weights
	sum=0;
	for(a=0; a<feature; a++)
	{
		sum+=testinput[a]*weight[a];
	}
	
	//Step function
	if (sum > threshold)
		testoutput=1;
	else
		testoutput=0;
		
	printf("Output: %f:\n",testoutput);
}

//Program End - Copyright Haza Nuzly, SCRG UTM

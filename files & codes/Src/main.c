#include <stdio.h>
#include "statstics.h"

stat_type sample; // define a sample of an object for testing 

int main (void)
{
	unsigned int cnt;
	
	for( cnt=0; cnt<10 ; ++cnt)
	{
		Set_Data (&sample, cnt ,cnt);
	}
	Calc_Mean (&sample);
	Calc_Variance (&sample);
	Calc_Standard_dev(&sample);
	
	for( cnt=0; cnt<10 ; ++cnt)
	{
		printf("data[%d] = %d \n",cnt,sample.data[cnt]);
		
	}
	printf ("Mean = %f \n", sample.mean);
	printf ("Variance = %f \n", sample.variance);
	printf ("Standard_Deviation = %f \n", sample.standard_dev);
	
	return 0;
}

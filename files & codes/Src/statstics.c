#include <math.h>
#include "statstics.h"



result_type Set_Data(stat_type *obj, unsigned int index, unsigned char value);
result_type Calc_Mean (stat_type *obj);
result_type Calc_Variance (stat_type *obj);
result_type Calc_Standard_dev(stat_type *obj);


//for user to change the value
result_type Set_Data (stat_type *obj, unsigned int index, unsigned char value)
{
	result_type result=OK;
	if (index>DATA_LENGHTH)
	{
		result=FAIL;
	}
	else
	{
		obj->data[index]=value;
		
		obj-> mean_valid =0;
		obj->var_valid =0;
		
	}
	
	return result;
}

//fuction to calculate mean
result_type Calc_Mean (stat_type *obj)
{
	result_type result=OK;
	register unsigned int cnt;
	float sum=0.0F;
	
	for(cnt= DATA_LENGHTH; cnt>0 ; --cnt)
	{
		sum+=obj ->data [cnt -1];
		
	}
	obj -> mean = sum/DATA_LENGHTH;
	obj ->mean_valid =1;
	
	return result;
}

//function to calculate variance
result_type Calc_Variance (stat_type *obj)
{
		result_type result=OK;
	  register unsigned int cnt;
	  float mean;
	  float dist;
	  float sum;
	
	if(obj->mean_valid ==0)
	{
		Calc_Mean(obj);
	}
	mean = obj -> mean;
	
	sum= 0.0F;
	for(cnt= DATA_LENGHTH; cnt>0 ; --cnt)
	{
		dist = obj -> data [cnt-1] - mean;
		sum+= (dist * dist);
			
	}
	obj->variance = sum /( DATA_LENGHTH -1 );
	
	obj->var_valid=1;
	return result;
}

//function to calculate standard deviation
result_type Calc_Standard_dev(stat_type *obj)
{
	result_type result=OK;
	float var;
	if (obj -> var_valid ==0 )
	{
		Calc_Variance(obj);
		
	}
	var= obj ->variance;
	
	obj -> standard_dev= (float) sqrt (var);
	
	return result;
}




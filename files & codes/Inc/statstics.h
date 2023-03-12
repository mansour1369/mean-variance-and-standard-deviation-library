#ifndef __STATSTICS_H
#define __STATSTICS_H
#define DATA_LENGHTH 10U

typedef enum
{
	FAIL=-1,
	OK =0
}result_type;

//define an object with 10 byte array & variables
typedef struct
{
	
	unsigned char data[DATA_LENGHTH];
	float mean;
	float variance;
	float standard_dev;
	
	/*dont touch this flags */
	unsigned int mean_valid;
	unsigned int var_valid;
	
}stat_type;

//Functions definition  for calculating mean, variance & standard devition

result_type Set_Data(stat_type *obj, unsigned int index, unsigned char value); //for user to change the value
result_type Calc_Mean (stat_type *obj);
result_type Calc_Variance (stat_type *obj);
result_type Calc_Standard_dev(stat_type *obj);


#endif

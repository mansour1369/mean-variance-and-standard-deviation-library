# mean-variance-and-standard-deviation-C library 
this c library is for calculating mean, variance, and standard deviation , you can make a sample to calculate .

# Statistics Library
This library provides statistical functions to calculate mean, variance, and standard deviation for a set of data. It consists of the following functions:
Set_Data: This function is used to set the data for the statistics object. It takes an object pointer, an index, and a value, and returns a result indicating success or failure.

Calc_Mean: This function calculates the mean of the data set. It takes an object pointer and returns a result indicating success or failure.

Calc_Variance: This function calculates the variance of the data set. It takes an object pointer and returns a result indicating success or failure.

Calc_Standard_dev: This function calculates the standard deviation of the data set. It takes an object pointer and returns a result indicating success or failure.

# Getting Started
To use this library, include the "statstics.h" header file in your program. You will also need to create a statistics object using the stat_type structure.

# Usage
# Set_Data
The Set_Data function is used to set the data for the statistics object. It takes an object pointer, an index, and a value, and returns a result indicating success or failure. Here is an example usage:
`stat_type obj;`

`result_type result = Set_Data(&obj, 0, 10);`

# Calc_Mean
The Calc_Mean function calculates the mean of the data set. It takes an object pointer and returns a result indicating success or failure. Here is an example usage:

`stat_type obj;`

`result_type result = Calc_Mean(&obj);`

# Calc_Variance
The Calc_Variance function calculates the variance of the data set. It takes an object pointer and returns a result indicating success or failure. Here is an example usage:
`stat_type obj;`

`result_type result = Calc_Standard_dev(&obj);`

# Calc_Standard_dev
The Calc_Standard_dev function calculates the standard deviation of the data set. It takes an object pointer and returns a result indicating success or failure. Here is an example usage:
`stat_type obj;`

`result_type result = Calc_Standard_dev(&obj);`

 # Contributing
 Contributions to this library are welcome! If you find a bug or have a feature request, please submit an issue. If you would like to contribute code, please fork the repository and submit a pull request.
 
 # License
 This library is licensed under the MIT License. See the LICENSE file for more information.



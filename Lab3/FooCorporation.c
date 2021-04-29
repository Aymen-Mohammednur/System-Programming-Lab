#include <stdio.h>

void main()
{
	//double basePay = 7.50;
	//int hoursWorked = 35;
	
	double basePay = 8.20;
	int hoursWorked = 47;
	
	//double basePay = 10.00;
	//int hoursWorked = 73;
	
	if (hoursWorked > 60) {
		printf("Hours worked exceeds 60! \n");
	}
	else if (basePay < 8) {
		printf("Base pay is less than minimum wage!\n");
	}
	else {
		double totalPay = 0;
		double pay = basePay * hoursWorked;
		double overtime = basePay * 1.5;
		int overtimeHour = hoursWorked - 40;
	
		if (hoursWorked <= 40) {
			totalPay = pay;
		}
		else if (hoursWorked > 40 && hoursWorked <= 60) {
			totalPay = pay + (overtimeHour * overtime);
		}
		printf("The total pay for this employee is %f \n", totalPay);
	}
}

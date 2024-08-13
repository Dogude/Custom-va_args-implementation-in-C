#include <stdioh.h>

typedef char* va_list;

void custom_va_args(int data1 , int data2)
{
	
	va_list args = NULL; /* va_list may be char*  */	
	
	/* accessing address of next element, which is data2 in this case */
	args = (char*)&data1 + 8; // va_start(args, data1);
	
	
	int num = *(int*)args; // int sum = va_arg(args, int);
	args += 8; // move pointer to next element
	
		
}
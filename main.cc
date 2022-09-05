#include <iostream> //I/O Header File
#include "my_math.h"
#include "my_compare.h"
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[]){
	//My Math Function
    
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
	int add_res = my_add(a, b);
	int mul_res = my_mul(a, b);
	char add_check = is_equal(add_res, a+b);
	char mul_check = is_equal(mul_res, a*b);
	char compare = is_big(a, b);
	cout << "2018314814 : " << add_check << " " << mul_check << " " << compare << endl;
	return 0;}

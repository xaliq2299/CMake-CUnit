#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "add.h"
#include "divide.h"
// #include "../include/add.h"
// #include "../include/divide.h"

int setup(){return 0;}
int teardown(){return 0;}

void test_add(){
	CU_ASSERT_DOUBLE_EQUAL(add(5,3),8,0.0000001);
}

int main(){
	if(CU_initialize_registry() != CUE_SUCCESS){
		CU_get_error_msg();
	}
	CU_pSuite s = CU_add_suite("operations", setup, teardown);
	CU_add_test(s,"add", test_add);

	CU_basic_run_tests();
	CU_basic_show_failures(CU_get_failure_list());

	return CU_get_number_of_failures();
}

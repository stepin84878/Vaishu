#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"


void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);


int main() {

 
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);

  
  
  
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);



  
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  
  CU_basic_run_tests();
  
  
  CU_cleanup_registry();
  return 0;
}


void test_add(void) {
  CU_ASSERT(30 == add(10, 20));
  

  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));
  
  
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  
  
  CU_ASSERT(3 == divide(2, 2));
}
#include "../src/addContact.c"
#include "../src/deleteContact.c"
#include"../inc/PhoneBookManagement.h"
#include "../src/searchContact.c"
#include "../src/viewContacts.c"
#include"../unity/unity_internals.h"
#include"../unity/unity.h"

void setUp(){}

void tearDown(){}


void test_addrecord(void){
    TEST_ASSERT_EQUAL(pass,addrecord("John", "America", "Male","john23@cc.com",98743748));
}

void test_viewrecord(void){
    TEST_ASSERT_EQUAL(pass,Viewrecords());
}

void test_searchrecord(void){
    TEST_ASSERT_EQUAL(fail,searchrecord("sat"));
    TEST_ASSERT_EQUAL(pass,searchrecord("John"));
}



void test_deleterecord(void){
    TEST_ASSERT_EQUAL(pass,deleterecord("John"));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_addrecord);
    RUN_TEST(test_viewrecord);
    RUN_TEST(test_searchrecord);
    RUN_TEST(test_deleterecord);

    return UNITY_END();
}

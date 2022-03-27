#ifndef __PhoneBookManagement_H__
#define __PhoneBookManagement_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * @brief structure for Phone Record
 * 
 */
typedef struct phonebook
{
char name[35];
    char address[50];
    long int Mobile_no;
    char sex[8];
    char mail[100];
}phonebook;

/**
 * @brief return type for funtions for unit testing
 * 
 */

typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

/**
 * @brief function to find a contact by its Name
 * @param Name
 * @return test_values 
 */
test_values searchrecord(char name[]);

/**
 * @brief function to add new Contacts to the PhoneBook
 * 
 * @return test_values 
 */
test_values addrecord(char name[],char address[],char sex[],char mail[],long int Mobile_no);

/**
 * @brief function to delete the contacts from PhoneBook
 * 
 * @param name
 * @return test_values 
 */
test_values deleterecord(char name[]);

/**
 * @brief function to view all the Contacts in PhoneBook
 * 
 * @return test_values 
 */

test_values Viewrecords(void);

#endif

#include"../inc/PhoneBookManagement.h"

/**
 * @brief function to add new books to library
 *
 * @return test_values
 */

test_values addrecord(char name[],char address[],char sex[],char mail[],long int Mobile_no)
{



    FILE *fp=NULL;
    fp=fopen("PhoneBook","ab+");

    if(fp == NULL)
    {
        printf("\nError: while opening file\n");
        return fail;
    }
    else{

        phonebook *newcontact = NULL;
        newcontact = malloc(sizeof(phonebook));


        strcpy(newcontact->name,name);
        strcpy(newcontact->address,address);
        strcpy(newcontact->sex,sex);
        strcpy(newcontact->mail,mail);
        newcontact->Mobile_no = Mobile_no;


    fwrite(newcontact,sizeof(phonebook),1,fp);
    fclose(fp);
    free(newcontact);


    return pass;
    }

}

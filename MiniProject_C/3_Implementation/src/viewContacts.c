#include"../inc/PhoneBookManagement.h"

test_values Viewrecords()
{

    FILE *fp=NULL;
    fp=fopen("PhoneBook","rb");

    if(fp==NULL)
    {
        printf("\nERROR:\n");
        return fail;
    }
    else{
    	printf("\nName\t\t\tAddress\t\t\tMobile no\t\t\tSex\t\t\tE-mail");
        phonebook *contact=(phonebook*)malloc(sizeof(phonebook));
    while(fread(contact,sizeof(phonebook),1,fp)==1)
    {
        printf("\n%s\t\t\t%s\t\t\t%ld\t\t\t%s\t\t\t%s",contact->name,contact->address,contact->Mobile_no,contact->sex,contact->mail);
    }
    fclose(fp);
    free(contact);

    return pass;
    }
}

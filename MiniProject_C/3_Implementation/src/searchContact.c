#include"../inc/PhoneBookManagement.h"


test_values searchrecord(char name[])
{

    FILE *fp=NULL;
    fp = fopen("PhoneBook","rb");
    if(fp==NULL)
    {
        printf("\nError while opening file in search area\n");
        return fail;
    }
    else{

    phonebook *contact_to_search=(phonebook*)malloc(sizeof(phonebook));
    while(fread(contact_to_search,sizeof(phonebook),1,fp))
    {
        if(strcmp(contact_to_search->name,name)==0)
        {
        	printf("\n\tDetail Information About %s",name);
        	printf("\nName:%s\nAddress:%s\nMobile no:%ld\nSex:%s\nE-mail:%s",contact_to_search->name,contact_to_search->address,contact_to_search->Mobile_no,contact_to_search->sex,contact_to_search->mail);
        	printf("\n");
        	fclose(fp);
            free(contact_to_search);
            return pass;
        }
    }

    fclose(fp);
    free(contact_to_search);
    printf("\nSpecified Contact is not present\n");

    return fail;
    }
}

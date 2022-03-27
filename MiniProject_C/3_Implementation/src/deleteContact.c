#include"../inc/PhoneBookManagement.h"


test_values deleterecord(char name[])
{



    FILE *fp=NULL;
    FILE *ft=NULL;
    fp = fopen("PhoneBook","rb");
    ft = fopen("TempPhonebook","wb");

    if(fp==NULL || ft==NULL)
        {
            printf("\nError: While opening file:\n");
            return fail;
        }
    else{
        rewind(fp);

        phonebook *discarded_contact = (phonebook*)malloc(sizeof(phonebook));
    while(fread(discarded_contact,sizeof(phonebook),1,fp)==1)
    {
        if(strcmp(name,discarded_contact->name)!=0)
        {

            fwrite(discarded_contact,sizeof(phonebook),1,ft);


        }

    }
    fclose(fp);
    fclose(ft);
    free(discarded_contact);

   remove("PhoneBook");
    rename("TempPhonebook","PhoneBook");

    return pass;


        }

}



#include"inc/PhoneBookManagement.h"

/**
 * @brief main function of the project
 *
 * @return int
 */

int main()
{

    int choice,success;
    long int mobile_no;

    char name[20],address[20],sex[10],email[20];



    printf("\n\t\t\t\t\t\t*************** MAIN MENU ***************\n");
    printf("\n\t\t\t\t\t\t1. Add Contact");
    printf("\n\t\t\t\t\t\t2. Delete Contact");
    printf("\n\t\t\t\t\t\t3. Search Contact");
    printf("\n\t\t\t\t\t\t4. View Contacts");
    printf("\n\t\t\t\t\t\t5. Close Application");
    printf("\n\t\t\t\t\t\t******************************************\n");
    printf("\n\t\t\t\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nEnter Name: ");
        scanf("%19s",name);
        fflush(stdin);
        printf("\nEnter Address:");
        scanf("%19s",address);
        fflush(stdin);
        printf("\nEnter Sex:");
        scanf("%19s",sex);
        fflush(stdin);
        printf("\nEnter Email:");
        scanf("%19s",email);
        fflush(stdin);
        printf("\nEnter Mobile Number:");
        scanf("%ld",&mobile_no);
        success=addrecord(name,address,sex,email,mobile_no);
        break;
        case 2:
        printf("\nEnter The Name Of Contact to be Deleted: ");
        scanf("%19s",name);
        fflush(stdin);
        success=deleterecord(name);
        break;
        case 3:
        printf("\nEnter The Name Of Contact to be Searched: ");
        scanf("%19s",name);
        fflush(stdin);
        success=searchrecord(name);
        break;
        case 4:
        success=Viewrecords();
        break;
        case 5:
        printf("\n\n\n");
        exit(1);
        default:
        printf("\n\t\t\t\t\t\tInvalid input");
        break;
     }
    if(success == pass)
    {
        printf("Successful\n");
        main();
    }
    else if(success==fail)
    {
        printf("Unsuccessful\n");
        main();
    }
    else{
        printf("Error\n");
        main();
    }
return 0;
}

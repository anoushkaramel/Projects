#include <stdio.h>
#include "conio.h"
int main()
{
    int n, nn, nnn;
    char str1[100], str11[100], str12[100];
    char c;
    do
    {
        printf("   Study Time Table for a DAY\n");
        printf("\n");
        printf("+---------------Commands---------------+\n");
        printf("|  For Adding   Press 1                |\n");
        printf("|  For Viewing  Press 2                |\n");
        printf("|  For Reset    Press 3                |\n");
        printf("|  For Exit     Press 4                |\n");
        printf("+--------------------------------------+\n");
        printf("\n");
        /*  printf("+------Subjects Code------+\n");
        printf("|   1. SDF                |\n");
        printf("|   2. English            |\n");
        printf("|   3. Physics            |\n");
        printf("|   4. SDF LAB            |\n");
        printf("|   5. Maths              |\n");
        printf("+-------------------------+\n");*/
        printf("\n");
        printf("+----------------------------TIP TO USE---------------------------------------+\n");
        printf("|  After Adding Values Please Restart the Program                             |\n");
        /*  printf("|  If you Press 3 then Subject.txt will Reset and New one entry is Added      |\n");*/
        printf("+-----------------------------------------------------------------------------+\n");
        printf("\n");
        printf("+--------------------------------------+\n");
        printf("      Enter the Command : ");
        scanf("%d", &n);
        /*    printf("+--------------------------------------+\n");*/

        if (n == 3)
        {
            /*  printf("+--------------------------------------+\n");*/
            printf("+------Subjects Code------+\n");
            printf("|   1. SDF                |\n");
            printf("|   2. English            |\n");
            printf("|   3. Physics            |\n");
            printf("|   4. SDF LAB            |\n");
            printf("|   5. Maths              |\n");
            printf("+-------------------------+\n");
            printf("   Enter the Subject Code :");
            scanf("%d", &nn);
            printf("+--------------------------------------+\n");
            if (nn == 1)
            {
                printf("+--------------------------------------+\n");
                printf("|         ENTRIES Are Resetted         |\n");
                printf("+--------------------------------------+\n");
                printf("+--------------------------------------+\n");
                printf("|         ADD A NEW Entry              |\n");
                printf("+--------------------------------------+\n");
                FILE *ptr1;
                FILE *ptr11;
                ptr1 = fopen("SDF.txt", "w");
                ptr11=fopen("General.txt","a");
                printf("Enter the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");
                fflush(stdin);
                gets(str12);
                fprintf(ptr1, "+--------------------------------------+\n");
                fprintf(ptr1, "%s %s\n", str11, str12);
                fprintf(ptr11, "+--------------------------------------+\n");
                fprintf(ptr11, "%s %s\n", str11, str12);
                printf("\n Operation is Done Successfully\n");
                /*    c=fgetc(ptr1);
                while(c!=EOF)
                {
                    printf("%c",c);
                    c=fgetc(ptr1);
                }*/
            }
            else if (nn == 2)
            {
                printf("+--------------------------------------+\n");
                printf("|         ENTRIES Are Resetted         |\n");
                printf("+--------------------------------------+\n");
                printf("+--------------------------------------+\n");
                printf("|         ADD A NEW Entry              |\n");
                printf("+--------------------------------------+\n");
                FILE *ptr2;
                FILE *ptr21;
                ptr2 = fopen("English.txt", "w");
                ptr21=fopen("General.txt","a");
                printf("Enter the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");
                fflush(stdin);
                gets(str12);
                fprintf(ptr2, "+--------------------------------------+\n");
                fprintf(ptr2, "%s %s\n", str11, str12);
                fprintf(ptr21, "+--------------------------------------+\n");
                fprintf(ptr21, "%s %s\n", str11, str12);
                printf("\n Operation is Done Successfully\n");
                /*    c=fgetc(ptr1);
                while(c!=EOF)
                {
                    printf("%c",c);
                    c=fgetc(ptr1);
                }*/
            }
            else if (nn == 3)
            {
                printf("+--------------------------------------+\n");
                printf("|         ENTRIES Are Resetted         |\n");
                printf("+--------------------------------------+\n");
                printf("+--------------------------------------+\n");
                printf("|         ADD A NEW Entry              |\n");
                printf("+--------------------------------------+\n");
                FILE *ptr3;
                FILE *ptr31;
                ptr3 = fopen("Physics.txt", "w");
                ptr31=fopen("General.txt","a");
                printf("Enter the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");
                fflush(stdin);
                gets(str12);
                fprintf(ptr3, "+--------------------------------------+\n");
                fprintf(ptr3, "%s %s\n", str11, str12);
                fprintf(ptr31, "+--------------------------------------+\n");
                fprintf(ptr31, "%s %s\n", str11, str12);
                printf("\n Operation is Done Successfully\n");
                /*    c=fgetc(ptr1);
                while(c!=EOF)
                {
                    printf("%c",c);
                    c=fgetc(ptr1);
                }*/
            }
            else if (nn == 4)
            {
                printf("+--------------------------------------+\n");
                printf("|         ENTRIES Are Resetted         |\n");
                printf("+--------------------------------------+\n");
                printf("+--------------------------------------+\n");
                printf("|         ADD A NEW Entry              |\n");
                printf("+--------------------------------------+\n");
                FILE *ptr4;
                FILE *ptr41;
                ptr4 = fopen("SDF_LAB.txt", "w");
                ptr41=fopen("General.txt","a");
                printf("Enter the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");
                fflush(stdin);
                gets(str12);
                fprintf(ptr4, "+--------------------------------------+\n");
                fprintf(ptr4, "%s %s\n", str11, str12);
                fprintf(ptr41, "+--------------------------------------+\n");
                fprintf(ptr41, "%s %s\n", str11, str12);
                printf("\n Operation is Done Successfully\n");
                /*    c=fgetc(ptr1);
                while(c!=EOF)
                {
                    printf("%c",c);
                    c=fgetc(ptr1);
                }*/
            }
            else if (nn == 5)
            {
                printf("+--------------------------------------+\n");
                printf("|         ENTRIES Are Resetted         |\n");
                printf("+--------------------------------------+\n");
                printf("+--------------------------------------+\n");
                printf("|         ADD A NEW ENTRY              |\n");
                printf("+--------------------------------------+\n");
                FILE *ptr5;
                FILE *ptr51;
                ptr5 = fopen("Maths.txt", "w");
                ptr51=fopen("General.txt","a");
                printf("Enter the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");
                fflush(stdin);
                gets(str12);
                fprintf(ptr5, "%s %s\n", str11, str12);
                fprintf(ptr51, "+--------------------------------------+\n");
                fprintf(ptr51, "%s %s\n", str11, str12);
                printf("\n Operation is Done Successfully\n");
                /*    c=fgetc(ptr1);
                while(c!=EOF)
                {
                    printf("%c",c);
                    c=fgetc(ptr1);
                }*/
            }
        }
        else if (n == 2)
        {
            printf("+---------------Commands---------------+\n");
            printf("|  For Full Schedule          Press 1  |\n");
            printf("|  For Subject Wise Schedule  Press 2  |\n");
            printf("+--------------------------------------+\n");
            printf("Enter the Command : ");
            scanf("%d", &nnn);
            if (nnn == 1)
            {
                FILE *ptr1;
                ptr1 = fopen("SDF.txt", "r");
                c = fgetc(ptr1);
                while (c != EOF)
                {
                    printf("%c", c);
                    c = fgetc(ptr1);
                }
                printf("\n");
                FILE *ptr2;
                ptr2 = fopen("English.txt", "r");
                c = fgetc(ptr2);
                while (c != EOF)
                {
                    printf("%c", c);
                    c = fgetc(ptr2);
                }
                printf("\n");
                FILE *ptr3;
                ptr3 = fopen("Physics.txt", "r");
                c = fgetc(ptr3);
                while (c != EOF)
                {
                    printf("%c", c);
                    c = fgetc(ptr3);
                }
                printf("\n");
                FILE *ptr4;
                ptr4 = fopen("SDF_LAB.txt", "r");
                c = fgetc(ptr4);
                while (c != EOF)
                {
                    printf("%c", c);
                    c = fgetc(ptr4);
                }
                printf("\n");
                FILE *ptr5;
                ptr5 = fopen("Maths.txt", "r");
                c = fgetc(ptr5);
                while (c != EOF)
                {
                    printf("%c", c);
                    c = fgetc(ptr5);
                }
                printf("\n");
                printf("\n Operation is Done Successfully\n");
            }
            else if (nnn == 2)
            {
                printf("+------Subjects Code------+\n");
                printf("|   1. SDF                |\n");
                printf("|   2. English            |\n");
                printf("|   3. Physics            |\n");
                printf("|   4. SDF LAB            |\n");
                printf("|   5. Maths              |\n");
                printf("+-------------------------+\n");
                printf("   Enter the Subject Code : ");
                scanf("%d", &nn);
                printf("+--------------------------------------+\n");
                if (nn == 1)
                {
                    printf("+--------------------------------------+\n");
                    printf("|         Today's Work For SDF         |\n");
                    printf("+--------------------------------------+\n");
                    FILE *ptr1;
                    ptr1 = fopen("SDF.txt", "r");
                    c = fgetc(ptr1);
                    while (c != EOF)
                    {
                        printf("%c", c);
                        c = fgetc(ptr1);
                    }
                    printf("\n");
                    printf("\n Operation is Done Successfully\n");
                }
                else if (nn == 2)
                {
                    printf("+--------------------------------------+\n");
                    printf("|     Today's Work For English         |\n");
                    printf("+--------------------------------------+\n");
                    FILE *ptr2;
                    ptr2 = fopen("English.txt", "r");
                    c = fgetc(ptr2);
                    while (c != EOF)
                    {
                        printf("%c", c);
                        c = fgetc(ptr2);
                    }
                    printf("\n");
                    printf("\n Operation is Done Successfully\n");
                }
                else if (nn == 3)
                {
                    printf("+--------------------------------------+\n");
                    printf("|      Today's Work For Physics        |\n");
                    printf("+--------------------------------------+\n");
                    FILE *ptr3;
                    ptr3 = fopen("Physics.txt", "r");
                    c = fgetc(ptr3);
                    while (c != EOF)
                    {
                        printf("%c", c);
                        c = fgetc(ptr3);
                    }
                    printf("\n");
                    printf("\n Operation is Done Successfully\n");
                }
                else if (nn == 4)
                {
                    printf("+--------------------------------------+\n");
                    printf("|     Today's Work For SDF LAB         |\n");
                    printf("+--------------------------------------+\n");
                    FILE *ptr4;
                    ptr4 = fopen("SDF_LAB.txt", "r");
                    c = fgetc(ptr4);
                    while (c != EOF)
                    {
                        printf("%c", c);
                        c = fgetc(ptr4);
                    }
                    printf("\n");
                    printf("\n Operation is Done Successfully\n");
                }
                else if (nn == 5)
                {
                    printf("+--------------------------------------+\n");
                    printf("|       Today's Work For MATHS         |\n");
                    printf("+--------------------------------------+\n");
                    FILE *ptr5;
                    ptr5 = fopen("Maths.txt", "r");
                    c = fgetc(ptr5);
                    while (c != EOF)
                    {
                        printf("%c", c);
                        c = fgetc(ptr5);
                    }
                    printf("\n");
                    printf("\n Operation is Done Successfully\n");
                }
            }
            else
            {
                printf("\nEnter the Valid Command\n");
            }
        }
        else if (n == 1)
        {
            printf("+------Subjects Code------+\n");
            printf("|   1. SDF                |\n");
            printf("|   2. English            |\n");
            printf("|   3. Physics            |\n");
            printf("|   4. SDF LAB            |\n");
            printf("|   5. Maths              |\n");
            printf("+-------------------------+\n");
            printf("\n");
            printf("   Enter the Subject Code : ");
            scanf("%d", &nn);
            printf("+--------------------------------------+\n");
            if (nn == 1)
            {
                printf("+--------------------------------------+\n");
                printf("|         ADD A NEW Event              |\n");
                printf("+--------------------------------------+\n");
                FILE *ptr1;
                FILE *ptr11;
                ptr1 = fopen("SDF.txt", "a");
                ptr11=fopen("General.txt","a");
                printf("Add the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");

                gets(str12);
                fprintf(ptr1, "+--------------------------------------+\n");
                fprintf(ptr1, "%s %s\n", str11, str12);
                fprintf(ptr1, "+--------------------------------------+\n");
                fprintf(ptr11, "+--------------------------------------+\n");
                fprintf(ptr11, "%s %s --> SDF\n", str11, str12);
                fprintf(ptr11, "+--------------------------------------+\n");
                fflush(stdin);
                printf("\n Operation is Done Successfully\n");
            }
            else if (nn == 2)
            {
                printf("+--------------------------------------+\n");
                printf("|         ADDING NEW Event             |\n");
                printf("+--------------------------------------+\n");

                FILE *ptr2;
                FILE *ptr21;
                ptr2 = fopen("English.txt", "a");
                ptr21=fopen("General.txt","a");
                printf("Add the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");
                fflush(stdin);
                gets(str12);
                fprintf(ptr2, "+--------------------------------------+\n");
                fprintf(ptr2, "%s %s\n", str11, str12);
                fprintf(ptr2, "+--------------------------------------+\n");
                fprintf(ptr21, "+--------------------------------------+\n");
                fprintf(ptr21, "%s %s --> English\n", str11, str12);
                fprintf(ptr21, "+--------------------------------------+\n");
                printf("\n Operation is Done Successfully\n");
            }
            else if (nn == 3)
            {
                printf("+--------------------------------------+\n");
                printf("|         ADDING NEW Event             |\n");
                printf("+--------------------------------------+\n");
                FILE *ptr3;
                FILE *ptr31;
                ptr3 = fopen("Physics.txt", "a");
                ptr31=fopen("General.txt","a");
                printf("Add the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");
                fflush(stdin);
                gets(str12);
                fprintf(ptr3, "+--------------------------------------+\n");
                fprintf(ptr3, "%s %s\n", str11, str12);
                fprintf(ptr3, "+--------------------------------------+\n");
                fprintf(ptr31, "+--------------------------------------+\n");
                fprintf(ptr31, "%s %s --> Physics\n", str11, str12);
                fprintf(ptr31, "+--------------------------------------+\n");
                printf("\n Operation is Done Successfully\n");
            }
            else if (nn == 4)
            {
                printf("+--------------------------------------+\n");
                printf("|         ADDING NEW Event             |\n");
                printf("+--------------------------------------+\n");
                FILE *ptr4;
                FILE *ptr41;
                ptr4 = fopen("SDF_LAB.txt", "a");
                ptr41=fopen("General.txt","a");
                printf("Add the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");
                fflush(stdin);
                gets(str12);
                fprintf(ptr4, "+--------------------------------------+\n");
                fprintf(ptr4, "%s %s\n", str11, str12);
                fprintf(ptr4, "+--------------------------------------+\n");
                fprintf(ptr41, "+--------------------------------------+\n");
                fprintf(ptr41, "%s %s --> SDF LAB\n", str11, str12);
                fprintf(ptr41, "+--------------------------------------+\n");
                printf("\n Operation is Done Successfully\n");
            }
            else if (nn == 5)
            {
                printf("+--------------------------------------+\n");
                printf("|         ADDING NEW Event             |\n");
                printf("+--------------------------------------+\n");
                FILE *ptr5;
                FILE *ptr51;
                ptr5 = fopen("Maths.txt", "a");
                ptr51=fopen("General.txt","a");
                printf("Add the New Timing : ");
                fflush(stdin);
                gets(str11);
                printf("Enter the Topic : ");
                fflush(stdin);
                gets(str12);
                fprintf(ptr5, "+--------------------------------------+\n");
                fprintf(ptr5, "%s %s\n", str11, str12);
                fprintf(ptr5, "+--------------------------------------+\n");
                fprintf(ptr51, "+--------------------------------------+\n");
                fprintf(ptr51, "%s %s --> Maths\n", str11, str12);
                fprintf(ptr51, "+--------------------------------------+\n");
                printf("\n Operation is Done Successfully\n");
            }
        }
        if (n >= 5 || n <= 0)
            printf("\n\nEnter the Valid Number\n\n\n");
    } while (n != 4);
    getch();
    return 0;
}

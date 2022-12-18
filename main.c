#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

void gotoxy(int,int);

//************ Global variabes for Log-In System of both Student and Teachers
char usernameG[20], passwordG[20];

char teacherUsername[20] = {
    "Sheinn Reyes"
};
char teacherPassword[20] = {
    "PseudosRebelz"
};

//*********** Struct for listing student details (Functionality of Teachers)
struct student_list{

    char lastname[50];
    char firstname[50];
    char studentNumber[30];
    char prelim[30];
    char midterm[30];
    char finals[30];
    char vaccinationStatus[50];
    char contactNumber[15];
    char course[20];
    char section[20];
    char arrivalTime[50];
    char password[50];
};

//*********** Struct for listing student details (Functionality of Students)
struct student{

    char lastname[50];
    char firstname[50];
    char studentNumber[30];
    char prelim[30];
    char midterm[30];
    char finals[30];
    char vaccinationStatus[50];
    char contactNumber[15];
    char course[20];
    char section[20];
    char arrivalTime[50];
    char password[50];

};

//************************************ void function for "View Student List" in Teacher Menu

void viewStudentList(){

    system("cls");

    char course[50], section[50];

    gotoxy(15,7);
    printf("Enter Course: ");
    scanf(" %[^\n]", &course);
    gotoxy(15,8);
    printf("Enter Section: ");
    scanf(" %[^\n]", &section);

//if statements used to segregate the four available course and section
    if(strcmp(strupr(course), "BSCS") == 0){
        if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
            struct student_list student;

            FILE *fp;
            int i=1,j;

            gotoxy(15,5);
            printf("---View Student List---");
            gotoxy(15,7);
            printf("Student No.        Name of Student             Prelim       Midterm     Finals");
            gotoxy(15,8);
            printf("---------------------------------------------------------------------------------");

            fp = fopen("BSCS_1YA1_Student_List.txt","rb+");
            if(fp == NULL){
                gotoxy(15,10);
                printf("Error opening file.");
                getch();
                teacherMenu();
            }
            j=10;
            int a = 20;
            sleep(1);
            while(fread(&student,sizeof(student),1,fp) == 1){
                gotoxy(15,j);
                printf("%s", student.studentNumber);
                gotoxy(15+a-1,j);
                printf("%s, %s", student.lastname, student.firstname);
                gotoxy(15+(a+27),j);
                printf("%s", student.prelim);
                gotoxy(15+(a+40),j);
                printf("%s", student.midterm);
                gotoxy(15+(a+52),j);
                printf("%s", student.finals);
                i++;
                j++;
            }
            fclose(fp);
            gotoxy(15,j+3);

            printf("Press any key to continue...");
            getch();
            system("cls");
            teacherMenu();
        }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
            struct student_list student;

            FILE *fp;
            int i=1,j;

            gotoxy(15,5);
            printf("---View Student List---");
            gotoxy(15,7);
            printf("Student No.        Name of Student             Prelim       Midterm     Finals");
            gotoxy(15,8);
            printf("---------------------------------------------------------------------------------");

            fp = fopen("BSCS_1YA2_Student_List.txt","rb+");
            if(fp == NULL){
                gotoxy(15,10);
                printf("Error opening file.");
                getch();
                teacherMenu();
            }
            j=10;
            int a = 20;
            sleep(1);
            while(fread(&student,sizeof(student),1,fp) == 1){
                gotoxy(15,j);
                printf("%s", student.studentNumber);
                gotoxy(15+a-1,j);
                printf("%s, %s", student.lastname, student.firstname);
                gotoxy(15+(a+27),j);
                printf("%s", student.prelim);
                gotoxy(15+(a+40),j);
                printf("%s", student.midterm);
                gotoxy(15+(a+52),j);
                printf("%s", student.finals);
                i++;
                j++;
            }
            fclose(fp);
            gotoxy(15,j+3);

            printf("Press any key to continue...");
            getch();
            system("cls");
            teacherMenu();
        }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                getch();
                viewStudentList();
        }
    }else if(strcmp(strupr(course), "BSIT") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                struct student_list student;

                FILE *fp;
                int i=1,j;

                gotoxy(15,5);
                printf("---View Student List---");
                gotoxy(15,7);
                printf("Student No.        Name of Student             Prelim       Midterm     Finals");
                gotoxy(15,8);
                printf("---------------------------------------------------------------------------------");

                fp = fopen("BSIT_1YA1_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,10);
                    printf("Error opening file.");
                    getch();
                    teacherMenu();
                }
                j=10;
                int a = 20;
                sleep(1);
                while(fread(&student,sizeof(student),1,fp) == 1){
                    gotoxy(15,j);
                    printf("%s", student.studentNumber);
                    gotoxy(15+a-1,j);
                    printf("%s, %s", student.lastname, student.firstname);
                    gotoxy(15+(a+27),j);
                    printf("%s", student.prelim);
                    gotoxy(15+(a+40),j);
                    printf("%s", student.midterm);
                    gotoxy(15+(a+52),j);
                    printf("%s", student.finals);
                    i++;
                    j++;
                }
                fclose(fp);
                gotoxy(15,j+3);

                printf("Press any key to continue...");
                getch();
                system("cls");
                teacherMenu();
            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
                struct student_list student;

                FILE *fp;
                int i=1,j;

                gotoxy(15,5);
                printf("---View Student List---");
                gotoxy(15,7);
                printf("Student No.        Name of Student             Prelim       Midterm     Finals");
                gotoxy(15,8);
                printf("---------------------------------------------------------------------------------");

                fp = fopen("BSIT_1YA2_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,10);
                    printf("Error opening file.");
                    getch();
                    teacherMenu();
                }
                j=10;
                int a = 20;
                sleep(1);
                while(fread(&student,sizeof(student),1,fp) == 1){
                    gotoxy(15,j);
                    printf("%s", student.studentNumber);
                    gotoxy(15+a-1,j);
                    printf("%s, %s", student.lastname, student.firstname);
                    gotoxy(15+(a+27),j);
                    printf("%s", student.prelim);
                    gotoxy(15+(a+40),j);
                    printf("%s", student.midterm);
                    gotoxy(15+(a+52),j);
                    printf("%s", student.finals);
                    i++;
                    j++;
                }
                fclose(fp);
                gotoxy(15,j+3);

                printf("Press any key to continue...");
                getch();
                system("cls");
                teacherMenu();
            }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                getch();
                viewStudentList();
            }
    }else{
            gotoxy(15,18);
            printf("Error! Invalid Course!");
            getch();
            viewStudentList();
    }
}

//************************************ void function for "Record Student Grade" in Teacher Menu

void recordStudentGrade(){

    system("cls");

    char student_number[20], response, course[50], section[50];
    int status = 1, subStatus = 1;

    //file pointer used for file handling
    FILE *fp;
    //struct for storing details of students
    struct student_list std;

    while(status != 0){
        subStatus = 1;
        gotoxy(15,5);
        printf("---Record Student Grade---");
        gotoxy(15,7);
        printf("Enter Course: ");
        scanf(" %[^\n]", &course);
        gotoxy(15,8);
        printf("Enter Section: ");
        scanf(" %[^\n]", &section);

        gotoxy(15,10);
        printf("---------------------------------------------------------------------------");

        //if statements used to segregate the four available course and section
        if(strcmp(strupr(course), "BSCS") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                gotoxy(15,12);
                printf("Enter Student Number: ");
                fflush(stdin);
                gets(student_number);
                fp = fopen("BSCS_1YA1_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,14);
                    printf("Error opening file");
                    getch();
                    getch();
                    teacherMenu();
                }
                rewind(fp);
                fflush(stdin);
                while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(student_number,std.studentNumber) == 0){
                        gotoxy(15,14);
                        printf("Enter Prelim Grade: ");
                        gets(std.prelim);
                        gotoxy(15,15);
                        printf("Enter Midterm Grade: ");
                        gets(std.midterm);
                        gotoxy(15,16);
                        printf("Enter Finals Grade: ");
                        gets(std.finals);
                        fseek(fp ,-sizeof(std),SEEK_CUR);
                        fwrite(&std,sizeof(std),1,fp);
                        break;
                    }else{
                        gotoxy(15,14);
                        printf("Error! Student Number not found.");
                        getch();
                        teacherMenu();
                    }
                }
            fclose(fp);

                while(subStatus != 0){
                    gotoxy(15,18);
                    printf("---------------------------------------------------------------------------");
                    gotoxy(15,20);
                    printf("Grades have been recorded. Would you like to record again?[Y/N] - ");
                    scanf(" %c", &response);

                    switch(toupper(response)){
                        case 'Y':
                            system("cls");
                            subStatus = 0;
                            break;
                        case 'N':
                            teacherMenu();
                            subStatus = 0;
                            break;
                        default:
                            system("cls");
                            continue;
                    }
                }
            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
                gotoxy(15,12);
                printf("Enter Student Number: ");
                fflush(stdin);
                gets(student_number);
                fp = fopen("BSCS_1YA2_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,14);
                    printf("Error opening file");
                    getch();
                    teacherMenu();
                }
                rewind(fp);
                fflush(stdin);
                while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(student_number,std.studentNumber) == 0){
                        gotoxy(15,14);
                        printf("Enter Prelim Grade: ");
                        gets(std.prelim);
                        gotoxy(15,15);
                        printf("Enter Midterm Grade: ");
                        gets(std.midterm);
                        gotoxy(15,16);
                        printf("Enter Finals Grade: ");
                        gets(std.finals);
                        fseek(fp ,-sizeof(std),SEEK_CUR);
                        fwrite(&std,sizeof(std),1,fp);
                        break;
                    }else{
                        gotoxy(15,14);
                        printf("Error! Student Number not found.");
                        getch();
                        teacherMenu();
                    }
                }
            fclose(fp);

                while(subStatus != 0){
                    gotoxy(15,18);
                    printf("---------------------------------------------------------------------------");
                    gotoxy(15,20);
                    printf("Grades have been recorded. Would you like to record again?[Y/N] - ");
                    scanf(" %c", &response);

                    switch(toupper(response)){
                        case 'Y':
                            system("cls");
                            subStatus = 0;
                            break;
                        case 'N':
                            teacherMenu();
                            subStatus = 0;
                            break;
                        default:
                            system("cls");
                            continue;
                    }
                }
            }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                getch();
                recordStudentGrade();
            }
        }else if(strcmp(strupr(course), "BSIT") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                gotoxy(15,12);
                printf("Enter Student Number: ");
                fflush(stdin);
                gets(student_number);
                fp = fopen("BSIT_1YA1_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,14);
                    printf("Error opening file");
                    getch();
                    teacherMenu();
                }
                rewind(fp);
                fflush(stdin);
                while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(student_number,std.studentNumber) == 0){
                        gotoxy(15,14);
                        printf("Enter Prelim Grade: ");
                        gets(std.prelim);
                        gotoxy(15,15);
                        printf("Enter Midterm Grade: ");
                        gets(std.midterm);
                        gotoxy(15,16);
                        printf("Enter Finals Grade: ");
                        gets(std.finals);
                        fseek(fp ,-sizeof(std),SEEK_CUR);
                        fwrite(&std,sizeof(std),1,fp);
                        break;
                    }else{
                        gotoxy(15,14);
                        printf("Error! Student Number not found.");
                        getch();
                        teacherMenu();
                    }
                }
            fclose(fp);

                while(subStatus != 0){
                    gotoxy(15,18);
                    printf("---------------------------------------------------------------------------");
                    gotoxy(15,20);
                    printf("Grades have been recorded. Would you like to record again?[Y/N] - ");
                    scanf(" %c", &response);

                    switch(toupper(response)){
                        case 'Y':
                            system("cls");
                            subStatus = 0;
                            break;
                        case 'N':
                            teacherMenu();
                            subStatus = 0;
                            break;
                        default:
                            system("cls");
                            continue;
                    }
                }
            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
                gotoxy(15,12);
                printf("Enter Student Number: ");
                fflush(stdin);
                gets(student_number);
                fp = fopen("BSIT_1YA2_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,14);
                    printf("Error opening file");
                    getch();
                    teacherMenu();
                }
                rewind(fp);
                fflush(stdin);
                while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(student_number,std.studentNumber) == 0){
                        gotoxy(15,14);
                        printf("Enter Prelim Grade: ");
                        gets(std.prelim);
                        gotoxy(15,15);
                        printf("Enter Midterm Grade: ");
                        gets(std.midterm);
                        gotoxy(15,16);
                        printf("Enter Finals Grade: ");
                        gets(std.finals);
                        fseek(fp ,-sizeof(std),SEEK_CUR);
                        fwrite(&std,sizeof(std),1,fp);
                        break;
                    }else{
                        gotoxy(15,14);
                        printf("Error! Student Number not found.");
                        getch();
                        teacherMenu();
                    }
                }
            fclose(fp);

                while(subStatus != 0){
                    gotoxy(15,18);
                    printf("---------------------------------------------------------------------------");
                    gotoxy(15,20);
                    printf("Grades have been recorded. Would you like to record again?[Y/N] - ");
                    scanf(" %c", &response);

                    switch(toupper(response)){
                        case 'Y':
                            system("cls");
                            subStatus = 0;
                            break;
                        case 'N':
                            teacherMenu();
                            subStatus = 0;
                            break;
                        default:
                            system("cls");
                            continue;
                    }
                }
            }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                getch();
                recordStudentGrade();
            }
        }else{
                gotoxy(15,18);
                printf("Error! Invalid Course");
                getch();
                recordStudentGrade();
        }
    }
}

//************************************ void function for "Change Username and/or Password" in Teacher Menu

void change(){

    system("cls");

    char currentPassword[50];
    char newPassword[50], newUsername[50];
    char buffer;

    gotoxy(15,5);
    printf("---Change Username and/or Password---");

    gotoxy(15,7);
    printf("------------------------------------------------");

    gotoxy(15,9);
    printf("Enter Current Password: ");
    scanf(" %[^\n]", &currentPassword);

    if(strcmp(currentPassword, teacherPassword) == 0){
        gotoxy(15,11);
        printf("Enter New Username: ");
        scanf(" %[^\n]", &newUsername);
        gotoxy(15,12);
        printf("Enter New Password: ");
        scanf(" %[^\n]", &newPassword);

        strcpy(teacherUsername, newUsername);
        strcpy(teacherPassword, newPassword);

        gotoxy(15,14);
        printf("------------------------------------------------");

        gotoxy(15,16);
        printf("Username and/or Password Successfully Changed.");
        getch();
        teacherSecurity();
    }else{
        gotoxy(15,11);
        printf("Incorrect Password");
        getch();
        teacherMenu();
    }
}

//************************************ void function for "Record Student Profile" in Teacher Menu

void recordStudentProfile(){

    system("cls");

    int status = 1, subStatus = 0;
    char course[50], section[50], name[100], studentNumber[20], vaccinationStatus[30], contactNumber[20];
    char response;
    char buffer;

    struct student_list std;

    //while loop to allow user to record multiple student profiles continuously
    while(status != 0){
        gotoxy(15,5);
        printf("---Record Student Profile---");

        gets(buffer);
        gotoxy(15,7);
        printf("Enter Course: ");
        scanf(" %[^\n]", &course);
        gotoxy(15,8);
        printf("Enter Section: ");
        scanf(" %[^\n]", &section);
        gotoxy(15,10);
        printf("--------------------------------------------------------------");

        //if statements used to segregate the four available course and section
        if(strcmp(strupr(course), "BSCS") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                FILE *fp;

                fp = fopen("BSCS_1YA1_Student_List.txt", "ab+");
                fflush(stdin);
                        gotoxy(15,12);
                        printf("Enter Student Number: ");
                        gets(std.studentNumber);
                        gotoxy(15,13);
                        printf("Enter First Name: ");
                        gets(std.firstname);
                        gotoxy(15,14);
                        printf("Enter Last Name: ");
                        gets(std.lastname);
                        gotoxy(15,15);
                        printf("Enter Vaccination Status: ");
                        gets(std.vaccinationStatus);
                        gotoxy(15,16);
                        printf("Enter Contact Number: ");
                        gets(std.contactNumber);
                        gotoxy(15,17);
                        printf("Assign Student's Password: ");
                        gets(std.password);

                        strcpy(std.course, "BSCS");
                        strcpy(std.section, "1-YA-1");
                        strcpy(std.prelim, "0");
                        strcpy(std.midterm, "0");
                        strcpy(std.finals, "0");

                fwrite(&std,sizeof(std),1,fp);
                fclose(fp);

            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
                FILE *fp;

                fp = fopen("BSCS_1YA2_Student_List.txt", "ab+");
                fflush(stdin);
                        gotoxy(15,12);
                        printf("Enter Student Number: ");
                        gets(std.studentNumber);
                        gotoxy(15,13);
                        printf("Enter First Name: ");
                        gets(std.firstname);
                        gotoxy(15,14);
                        printf("Enter Last Name: ");
                        gets(std.lastname);
                        gotoxy(15,15);
                        printf("Enter Vaccination Status: ");
                        gets(std.vaccinationStatus);
                        gotoxy(15,16);
                        printf("Enter Contact Number: ");
                        gets(std.contactNumber);
                        gotoxy(15,17);
                        printf("Assign Student's Password: ");
                        gets(std.password);

                        strcpy(std.course, "BSCS");
                        strcpy(std.section, "1-YA-2");
                        strcpy(std.prelim, "0");
                        strcpy(std.midterm, "0");
                        strcpy(std.finals, "0");

                fwrite(&std,sizeof(std),1,fp);
                fclose(fp);

            }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                sleep(3);
                system("cls");
            }
        }else if(strcmp(strupr(course), "BSIT") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                FILE *fp;

                fp = fopen("BSIT_1YA1_Student_List.txt", "ab+");
                fflush(stdin);
                        gotoxy(15,12);
                        printf("Enter Student Number: ");
                        gets(std.studentNumber);
                        gotoxy(15,13);
                        printf("Enter First Name: ");
                        gets(std.firstname);
                        gotoxy(15,14);
                        printf("Enter Last Name: ");
                        gets(std.lastname);
                        gotoxy(15,15);
                        printf("Enter Vaccination Status: ");
                        gets(std.vaccinationStatus);
                        gotoxy(15,16);
                        printf("Enter Contact Number: ");
                        gets(std.contactNumber);
                        gotoxy(15,17);
                        printf("Assign Student's Password: ");
                        gets(std.password);

                        strcpy(std.course, "BSIT");
                        strcpy(std.section, "1-YA-1");
                        strcpy(std.prelim, "0");
                        strcpy(std.midterm, "0");
                        strcpy(std.finals, "0");

                fwrite(&std,sizeof(std),1,fp);
                fclose(fp);

            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
                FILE *fp;

                fp = fopen("BSIT_1YA2_Student_List.txt", "ab+");
                fflush(stdin);
                        gotoxy(15,12);
                        printf("Enter Student Number: ");
                        gets(std.studentNumber);
                        gotoxy(15,13);
                        printf("Enter First Name: ");
                        gets(std.firstname);
                        gotoxy(15,14);
                        printf("Enter Last Name: ");
                        gets(std.lastname);
                        gotoxy(15,15);
                        printf("Enter Vaccination Status: ");
                        gets(std.vaccinationStatus);
                        gotoxy(15,16);
                        printf("Enter Contact Number: ");
                        gets(std.contactNumber);
                        gotoxy(15,17);
                        printf("Assign Student's Password: ");
                        gets(std.password);

                        strcpy(std.course, "BSIT");
                        strcpy(std.section, "1-YA-2");
                        strcpy(std.prelim, "0");
                        strcpy(std.midterm, "0");
                        strcpy(std.finals, "0");

                fwrite(&std,sizeof(std),1,fp);
                fclose(fp);

            }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                sleep(3);
                system("cls");
            }
        }else{
            gotoxy(15,18);
            printf("Error! Invalid Course!");
            sleep(3);
            system("cls");
        }

        gotoxy(15,19);
        printf("--------------------------------------------------------------");

        subStatus = 1;

        while(subStatus != 0){
            gotoxy(15,21);
            printf("Student profile has been recorded. Would you like to record again?[Y/N] - ");
            scanf(" %c", &response);

            switch(toupper(response)){
                case 'Y':
                    system("cls");
                    subStatus = 0;
                    break;
                case 'N':
                    teacherMenu();
                    subStatus = 0;
                    break;
                default:
                    system("cls");
                    continue;
            }
        }


    }

}

//************************************ void function for "View Attendance Sheet" in Teacher Menu
void viewAttendanceSheetT(){

    system("cls");

    FILE *fp;
    int i=1,j;
    struct student std;

    char course[50], section[50];

    gotoxy(15,7);
    printf("Enter Course: ");
    scanf(" %[^\n]", &course);
    gotoxy(15,8);
    printf("Enter Section: ");
    scanf(" %[^\n]", &section);

        if(strcmp(strupr(course), "BSCS") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){

                system("cls");

                gotoxy(15,5);
                printf("---View BSCS 1-YA-1 Attendance Sheet---");
                gotoxy(15,7);
                printf("Student No.        Name of Student        Vaccination Status       Time of Arrival");
                gotoxy(15,8);
                printf("------------------------------------------------------------------------------------------------------");
                fp = fopen("BSCS_1YA1_Attendance_Sheet.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,10);
                    printf("Error opening file.");
                    getch();
                    teacherMenu();
                }
                j=10;
                int a = 20;
                sleep(1);
                while(fread(&std,sizeof(std),1,fp) == 1){
                    gotoxy(15,j);
                    printf("%s", std.studentNumber);
                    gotoxy(15+a-1,j);
                    printf("%s, %s", std.lastname, std.firstname);
                    gotoxy(15+(a+23),j);
                    printf("%s", std.vaccinationStatus);
                    gotoxy(15+(a+48),j);
                    printf("%s", std.arrivalTime);
                    i++;
                    j++;
                }
                fclose(fp);
                gotoxy(15,j+3);

                printf("Press any key to continue...");
                getch();
                teacherMenu();

            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){

                system("cls");

                gotoxy(15,5);
                printf("---View BSCS 1-YA-2 Attendance Sheet---");
                gotoxy(15,7);
                printf("Student No.        Name of Student        Vaccination Status       Time of Arrival");
                gotoxy(15,8);
                printf("------------------------------------------------------------------------------------------------------");
                fp = fopen("BSCS_1YA2_Attendance_Sheet.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,10);
                    printf("Error opening file.");
                    getch();
                    teacherMenu();
                }
                j=10;
                int a = 20;
                while(fread(&std,sizeof(std),1,fp) == 1){
                    gotoxy(15,j);
                    printf("%s", std.studentNumber);
                    gotoxy(15+a-1,j);
                    printf("%s, %s", std.lastname, std.firstname);
                    gotoxy(15+(a+23),j);
                    printf("%s", std.vaccinationStatus);
                    gotoxy(15+(a+48),j);
                    printf("%s", std.arrivalTime);
                    i++;
                    j++;
                }
                fclose(fp);
                gotoxy(15,j+3);

                printf("Press any key to continue...");
                getch();
                teacherMenu();

            }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                sleep(3);
                system("cls");
                viewAttendanceSheetT();
            }
        }else if(strcmp(strupr(course), "BSIT") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){

                system("cls");

                gotoxy(15,5);
                printf("---View BSIT 1-YA-1 Attendance Sheet---");
                gotoxy(15,7);
                printf("Student No.        Name of Student        Vaccination Status       Time of Arrival");
                gotoxy(15,8);
                printf("------------------------------------------------------------------------------------------------------");
                fp = fopen("BSIT_1YA1_Attendance_Sheet.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,10);
                    printf("Error opening file.");
                    getch();
                    teacherMenu();
                }
                j=10;
                int a = 20;
                while(fread(&std,sizeof(std),1,fp) == 1){
                    gotoxy(15,j);
                    printf("%s", std.studentNumber);
                    gotoxy(15+a-1,j);
                    printf("%s, %s", std.lastname, std.firstname);
                    gotoxy(15+(a+23),j);
                    printf("%s", std.vaccinationStatus);
                    gotoxy(15+(a+48),j);
                    printf("%s", std.arrivalTime);
                    i++;
                    j++;
                }
                fclose(fp);
                gotoxy(15,j+3);

                printf("Press any key to continue...");
                getch();
                teacherMenu();

            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){

                system("cls");

                gotoxy(15,5);
                printf("---View BSIT 1-YA-2 Attendance Sheet---");
                gotoxy(15,7);
                printf("Student No.        Name of Student        Vaccination Status       Time of Arrival");
                gotoxy(15,8);
                printf("------------------------------------------------------------------------------------------------------");
                fp = fopen("BSIT_1YA2_Attendance_Sheet.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,10);
                    printf("Error opening file.");
                    getch();
                    teacherMenu();
                }
                j=10;
                int a = 20;
                while(fread(&std,sizeof(std),1,fp) == 1){
                    gotoxy(15,j);
                    printf("%s", std.studentNumber);
                    gotoxy(15+a-1,j);
                    printf("%s, %s", std.lastname, std.firstname);
                    gotoxy(15+(a+23),j);
                    printf("%s", std.vaccinationStatus);
                    gotoxy(15+(a+48),j);
                    printf("%s", std.arrivalTime);
                    i++;
                    j++;
                }
                fclose(fp);
                gotoxy(15,j+3);

                printf("Press any key to continue...");
                getch();
                teacherMenu();

            }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                sleep(3);
                system("cls");
                viewAttendanceSheetT();
            }
        }else{
            gotoxy(15,18);
            printf("Error! Invalid Course!");
            sleep(3);
            system("cls");
            viewAttendanceSheetT();
        }


}

//************************************ void function for "Teacher Log-In System"
void teacherSecurity(){

  system("cls");
  int s = 0;
  char username[20], password[20], p, buffer[5];

  gotoxy(15,5);
  printf("---Teacher Log-In System---");

  gotoxy(15,7);
  printf("Username: ");

  gets(buffer);
  gets(username);

  gotoxy(15,8);
  printf("Password: ");

  while (p != 13) {
    p = getch();
    if (p != 13) {
      putch('*');
      password[s] = p;
      s++;
    }
  }
  password[s] = '\0';

    if(strcmp(teacherUsername, username) == 0){
      if(strcmp(teacherPassword, password) == 0){
        gotoxy(15, 9);
        printf("Log-In Succesful.");
        sleep(2);
        loadingScreen();
      }else{
        gotoxy(15, 9);
        printf("Incorrect Password. Try Again.");
        getch();
        teacherSecurity1();
      }
    }else if(strcmp(teacherUsername, username) != 0){
        if(strcmp(teacherPassword, password) == 0){
          gotoxy(15, 9);
          printf("Invalid Username. Try Again.");
          getch();
          teacherSecurity1();
        }else{
          gotoxy(15, 9);
          printf("Invalid Account. Try Again.");
          getch();
          teacherSecurity1();
        }
    }

}

//************************************ copy of void teacherSecurity because of buffer issues
void teacherSecurity1(){

  system("cls");
  int s = 0;
  char username[20], password[20], p, buffer[5];

  gotoxy(15,5);
  printf("---Teacher Log-In System---");

  gotoxy(15,7);
  printf("Username: ");

  gets(username);

  gotoxy(15,8);
  printf("Password: ");

  while (p != 13) {
    p = getch();
    if (p != 13) {
      putch('*');
      password[s] = p;
      s++;
    }
  }
  password[s] = '\0';

    if(strcmp(teacherUsername, username) == 0){
      if(strcmp(teacherPassword, password) == 0){
        gotoxy(15, 9);
        printf("Log-In Succesful.");
        sleep(2);
        loadingScreen();
      }else{
        gotoxy(15, 9);
        printf("Incorrect Password. Try Again.");
        getch();
        teacherSecurity1();
      }
    }else if(strcmp(teacherUsername, username) != 0){
        if(strcmp(teacherPassword, password) == 0){
          gotoxy(15, 9);
          printf("Invalid Username. Try Again.");
          getch();
          teacherSecurity1();
        }else{
          gotoxy(15, 9);
          printf("Invalid Account. Try Again.");
          getch();
          teacherSecurity1();
        }
    }

}


//******* void function for the loading screen after the user succesfully logged in the Teacher Log-In System
void loadingScreen(){
    system("cls");

    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");

    teacherMenu();
}

//************************************ void function for the "Teacher Menu"
void teacherMenu(){

    system("cls");

    char choice;

    //prints the menu available in the program
    gotoxy(15,5);
    printf("---Teacher Menu---");
    gotoxy(15,7);
    printf("Enter a number to perform its corresponding task");
    gotoxy(15,9);
    printf("1. View Attendance Sheet");
    gotoxy(15,10);
    printf("2. View Student List");
    gotoxy(15,11);
    printf("3. Record Student Profile");
    gotoxy(15,12);
    printf("4. Record Student Grade");
    gotoxy(15,13);
    printf("5. Change Username and/or Password");
    gotoxy(15,14);
    printf("6. Back to Home Screen");

    gotoxy(15,16);
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    //switch statement to call the void functions above
    switch(choice){
        case '1':
            viewAttendanceSheetT();
            break;
        case '2':
            viewStudentList();
            break;
        case '3':
            recordStudentProfile();
            break;
        case '4':
            recordStudentGrade();
            break;
        case '5':
            change();
            break;
        case '6':
            main();
            break;
        default:
            gotoxy(15,16);
            printf("Invalid Input. Try Again.");
            getch();
            teacherMenu();
    }
}

//************************************ void function for "Record Attendance" in Student Menu
void recordAttendance(){
    system("cls");

    int status = 1, subStatus = 0;
    char course[50], section[50], credentials[10];
    char response;
    char buffer;


    //while loop to allow the user to record multiple attendance continuously
    while(status != 0){
        struct student_list std;
        struct student holder;
        gotoxy(15,5);
        printf("---Record Attendance---");

        gets(buffer);
        gotoxy(15,7);
        printf("Enter Course: ");
        scanf(" %[^\n]", &course);
        gotoxy(15,8);
        printf("Enter Section: ");
        scanf(" %[^\n]", &section);
        gotoxy(15,10);
        printf("--------------------------------------------------------------");

        int i = 12, j = 14;
        char studentNumber[50];

        //if statements used to segregate the four available course and section
        if(strcmp(strupr(course), "BSCS") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){

                gotoxy(15,12);
                printf("Enter Student Number: ");
                fflush(stdin);
                gets(studentNumber);

                FILE *fp;
                FILE *fpointer;
                FILE *fpoints;

                fp = fopen("BSCS_1YA1_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,14);
                    printf("Error opening file");
                    getch();
                    studentMenu();
                }

                rewind(fp);
                fflush(stdin);

                //reads binary in the "BSCS_1YA1_Student_List.txt" file until it matches the student number inputted
                while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(studentNumber,std.studentNumber) == 0){
                            gotoxy(15,j);
                            printf("Full Name: %s, %s", std.lastname, std.firstname);
                            gotoxy(15,j+1);
                            printf("Course & Section: %s %s", std.course, std.section);
                            gotoxy(15,j+2);
                            printf("Vaccination Status: %s", std.vaccinationStatus);
                            gotoxy(15,j+3);
                            printf("Contact Number: %s", std.contactNumber);

                            gotoxy(15,j+5);
                            printf("--------------------------------------------------------------");

                            strcpy(holder.firstname, std.firstname);
                            strcpy(holder.lastname, std.lastname);
                            strcpy(holder.course, std.course);
                            strcpy(holder.section, std.section);
                            strcpy(holder.vaccinationStatus, std.vaccinationStatus);
                            strcpy(holder.contactNumber, std.contactNumber);

                            sleep(1);

                            time_t arrival = time(NULL);
                            char *arrivalTime = ctime(&arrival);

                            strcpy(holder.arrivalTime, arrivalTime);

                            fpointer = fopen("BSCS_1YA1_Attendance_Sheet.txt", "ab+");

                                if(fpointer == NULL){
                                    fpointer = fopen("BSCS_1YA1_Attendance_Sheet.txt", "w");
                                }
                                fwrite(&holder, sizeof(holder), 1, fpointer);
                            fclose(fpointer);

                            fpoints = fopen("Attendance_Sheet.txt", "ab+");

                                if(fpoints == NULL){
                                    fpointer = fopen("Attendance_Sheet.txt", "w");
                                }
                                fwrite(&holder, sizeof(holder), 1, fpointer);
                            fclose(fpointer);
                        }else{
                            gotoxy(15,j);
                            printf("Error! Student Number not found...");
                            getch();
                            studentMenu();
                        }
                }

            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){

                gotoxy(15,12);
                printf("Enter Student Number: ");
                fflush(stdin);
                gets(studentNumber);

                FILE *fp;
                FILE *fpointer;
                FILE *fpoints;

                fp = fopen("BSCS_1YA2_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,14);
                    printf("Error opening file");
                    getch();
                    studentMenu();
                }

                rewind(fp);
                fflush(stdin);

                while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(studentNumber,std.studentNumber) == 0){
                            gotoxy(15,j);
                            printf("Full Name: %s, %s", std.lastname, std.firstname);
                            gotoxy(15,j+1);
                            printf("Course & Section: %s %s", std.course, std.section);
                            gotoxy(15,j+2);
                            printf("Vaccination Status: %s", std.vaccinationStatus);
                            gotoxy(15,j+3);
                            printf("Contact Number: %s", std.contactNumber);

                            gotoxy(15,j+5);
                            printf("--------------------------------------------------------------");

                            strcpy(holder.firstname, std.firstname);
                            strcpy(holder.lastname, std.lastname);
                            strcpy(holder.course, std.course);
                            strcpy(holder.section, std.section);
                            strcpy(holder.vaccinationStatus, std.vaccinationStatus);
                            strcpy(holder.contactNumber, std.contactNumber);

                            sleep(1);

                            time_t arrival = time(NULL);
                            char *arrivalTime = ctime(&arrival);

                            strcpy(holder.arrivalTime, arrivalTime);

                            fpointer = fopen("BSCS_1YA2_Attendance_Sheet.txt", "ab+");

                                if(fpointer == NULL){
                                    fpointer = fopen("BSCS_1YA1_Attendance_Sheet.txt", "w");
                                }
                                fwrite(&holder, sizeof(holder), 1, fpointer);
                            fclose(fpointer);

                            fpoints = fopen("Attendance_Sheet.txt", "ab+");

                                if(fpoints == NULL){
                                    fpointer = fopen("Attendance_Sheet.txt", "w");
                                }
                                fwrite(&holder, sizeof(holder), 1, fpointer);
                            fclose(fpointer);
                        }else{
                            gotoxy(15,j);
                            printf("Error! Student Number not found...");
                            getch();
                            studentMenu();
                        }
                }

            }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                sleep(3);
                system("cls");
            }
        }else if(strcmp(strupr(course), "BSIT") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                                gotoxy(15,12);
                printf("Enter Student Number: ");
                fflush(stdin);
                gets(studentNumber);

                FILE *fp;
                FILE *fpointer;
                FILE *fpoints;

                fp = fopen("BSIT_1YA1_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,14);
                    printf("Error opening file");
                    getch();
                    studentMenu();
                }

                rewind(fp);
                fflush(stdin);

                while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(studentNumber,std.studentNumber) == 0){
                            gotoxy(15,j);
                            printf("Full Name: %s, %s", std.lastname, std.firstname);
                            gotoxy(15,j+1);
                            printf("Course & Section: %s %s", std.course, std.section);
                            gotoxy(15,j+2);
                            printf("Vaccination Status: %s", std.vaccinationStatus);
                            gotoxy(15,j+3);
                            printf("Contact Number: %s", std.contactNumber);

                            gotoxy(15,j+5);
                            printf("--------------------------------------------------------------");

                            strcpy(holder.firstname, std.firstname);
                            strcpy(holder.lastname, std.lastname);
                            strcpy(holder.course, std.course);
                            strcpy(holder.section, std.section);
                            strcpy(holder.vaccinationStatus, std.vaccinationStatus);
                            strcpy(holder.contactNumber, std.contactNumber);

                            sleep(1);

                            time_t arrival = time(NULL);
                            char *arrivalTime = ctime(&arrival);

                            strcpy(holder.arrivalTime, arrivalTime);

                            fpointer = fopen("BSIT_1YA1_Attendance_Sheet.txt", "ab+");

                                if(fpointer == NULL){
                                    fpointer = fopen("BSIT_1YA1_Attendance_Sheet.txt", "w");
                                }
                                fwrite(&holder, sizeof(holder), 1, fpointer);
                            fclose(fpointer);

                            fpoints = fopen("Attendance_Sheet.txt", "ab+");

                                if(fpoints == NULL){
                                    fpointer = fopen("Attendance_Sheet.txt", "w");
                                }
                                fwrite(&holder, sizeof(holder), 1, fpointer);
                            fclose(fpointer);
                        }else{
                            gotoxy(15,j);
                            printf("Error! Student Number not found...");
                            getch();
                            studentMenu();
                        }
                }

            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){

                gotoxy(15,12);
                printf("Enter Student Number: ");
                fflush(stdin);
                gets(studentNumber);

                FILE *fp;
                FILE *fpointer;
                FILE *fpoints;

                fp = fopen("BSIT_1YA2_Student_List.txt","rb+");
                if(fp == NULL){
                    gotoxy(15,14);
                    printf("Error opening file");
                    getch();
                    studentMenu();
                }

                rewind(fp);
                fflush(stdin);

                while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(studentNumber,std.studentNumber) == 0){
                            gotoxy(15,j);
                            printf("Full Name: %s, %s", std.lastname, std.firstname);
                            gotoxy(15,j+1);
                            printf("Course & Section: %s %s", std.course, std.section);
                            gotoxy(15,j+2);
                            printf("Vaccination Status: %s", std.vaccinationStatus);
                            gotoxy(15,j+3);
                            printf("Contact Number: %s", std.contactNumber);

                            gotoxy(15,j+5);
                            printf("--------------------------------------------------------------");

                            strcpy(holder.firstname, std.firstname);
                            strcpy(holder.lastname, std.lastname);
                            strcpy(holder.course, std.course);
                            strcpy(holder.section, std.section);
                            strcpy(holder.vaccinationStatus, std.vaccinationStatus);
                            strcpy(holder.contactNumber, std.contactNumber);

                            sleep(1);

                            time_t arrival = time(NULL);
                            char *arrivalTime = ctime(&arrival);

                            strcpy(holder.arrivalTime, arrivalTime);

                            fpointer = fopen("BSIT_1YA2_Attendance_Sheet.txt", "ab+");

                                if(fpointer == NULL){
                                    fpointer = fopen("BSIT_1YA1_Attendance_Sheet.txt", "w");
                                }
                                fwrite(&holder, sizeof(holder), 1, fpointer);
                            fclose(fpointer);

                            fpoints = fopen("Attendance_Sheet.txt", "ab+");

                                if(fpoints == NULL){
                                    fpointer = fopen("Attendance_Sheet.txt", "w");
                                }
                                fwrite(&holder, sizeof(holder), 1, fpointer);
                            fclose(fpointer);
                        }else{
                            gotoxy(15,j);
                            printf("Error! Student Number not found...");
                            getch();
                            studentMenu();
                        }
                }

            }else{
                gotoxy(15,18);
                printf("Error! Invalid Section");
                sleep(3);
                system("cls");
            }
        }else{
            gotoxy(15,18);
            printf("Error! Invalid Course!");
            sleep(3);
            system("cls");
        }

        subStatus = 1;

        while(subStatus != 0){
            gotoxy(15,21);
            printf("Your attendance has been recorded. Would you like to record again?[Y/N] - ");
            scanf(" %c", &response);

            switch(toupper(response)){
                case 'Y':
                    system("cls");
                    subStatus = 0;
                    break;
                case 'N':
                    studentMenu();
                    subStatus = 0;
                    break;
                default:
                    system("cls");
                    continue;
            }
        }


    }
}

//************************************ void function for "View Attendance Sheet" in Student Menu
void viewAttendanceSheetS(){
    system("cls");

    FILE *fp;
    int i=1,j;
    struct student std;

    gotoxy(15,5);
    printf("---View Attendance Sheet---");
    gotoxy(15,7);
    printf("Name of Student        Course and Section        Vaccination Status       Time of Arrival");
    gotoxy(15,8);
    printf("------------------------------------------------------------------------------------------------------");

    fp = fopen("Attendance_Sheet.txt","rb+");
    if(fp == NULL){
        gotoxy(15,10);
        printf("Error opening file.");
        getch();
        studentMenu();
    }
    j=10;
    int a = 20;
    sleep(1);
    while(fread(&std,sizeof(std),1,fp) == 1){
        gotoxy(15,j);
        printf("%s, %s", std.lastname, std.firstname);
        gotoxy(15+(a+4),j);
        printf("%s %s", std.course, std.section);
        gotoxy(15+(a+30),j);
        printf("%s", std.vaccinationStatus);
        gotoxy(15+(a+55),j);
        printf("%s", std.arrivalTime);
        i++;
        j++;
    }
    fclose(fp);
    gotoxy(15,j+3);

    printf("Press any key to continue...");
    getch();
    studentMenu();
}

//*********** different loading screen functions directing to the four available course and section
void loadingScreenStudent1(){
    system("cls");

    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");

    bscs_ya1_grades();
}

void loadingScreenStudent2(){
    system("cls");

    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");

    bscs_ya2_grades();
}

void loadingScreenStudent3(){
    system("cls");

    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");

    bsit_ya1_grades();
}

void loadingScreenStudent4(){
    system("cls");

    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");
    gotoxy(53,12);
    printf("Loading");
    gotoxy(60,12);
    for(int i = 0; i <=2; i++){
        printf(".");
        sleep(1);
    }
    system("cls");

    bsit_ya2_grades();
}

//************************************ void function for the Student Log-In System
void studentSecurity(){

  system("cls");
  int s = 0;
  char username[20], password[20], p, buffer[5], course[50], section[50];

  gotoxy(15,5);
  printf("---Student Log-In System---");

  gotoxy(15,7);
  printf("Enter Course: ");
  scanf(" %[^\n]", &course);
  gotoxy(15,8);
  printf("Enter Section: ");
  scanf(" %[^\n]", &section);

  FILE *fp;
  struct student_list std;

    if(strcmp(strupr(course), "BSCS") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                  gotoxy(15,10);
                  printf("---------------------------------------------------------------------------");
                  gotoxy(15,12);
                  printf("Student Number: ");

                  gets(buffer);
                  gets(usernameG);

                  fp = fopen("BSCS_1YA1_Student_List.txt", "rb+");

                  while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(usernameG,std.studentNumber) == 0){
                        strcpy(passwordG, std.password);
                    }

                  gotoxy(15,13);
                  printf("Password: ");

                  //while loop that gets every character inputed, store it in the password array, and returns asterisk (*) in the terminal
                  while (p != 13) {
                    p = getch();
                    if (p != 13) {
                      putch('*');
                      password[s] = p;
                      s++;
                    }
                  }
                  password[s] = '\0';

                  if(strcmp(password, passwordG) == 0){
                    gotoxy(15,14);
                    printf("Log-In Successful.");
                    sleep(2);
                    loadingScreenStudent1();
                  }else{
                    gotoxy(15,14);
                    printf("Invalid Account. Try Again.");
                    getch();
                    studentSecurity1();
                  }
                }
            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
                  gotoxy(15,10);
                  printf("---------------------------------------------------------------------------");
                  gotoxy(15,12);
                  printf("Student Number: ");

                  gets(buffer);
                  gets(usernameG);

                  fp = fopen("BSCS_1YA2_Student_List.txt", "rb+");

                  while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(usernameG,std.studentNumber) == 0){
                        strcpy(passwordG, std.password);
                    }

                  gotoxy(15,13);
                  printf("Password: ");

                  while (p != 13) {
                    p = getch();
                    if (p != 13) {
                      putch('*');
                      password[s] = p;
                      s++;
                    }
                  }
                  password[s] = '\0';

                  if(strcmp(password, passwordG) == 0){
                    gotoxy(15,14);
                    printf("Log-In Successful.");
                    sleep(2);
                    loadingScreenStudent2();
                  }else{
                    gotoxy(15,14);
                    printf("Invalid Account. Try Again.");
                    getch();
                    studentSecurity1();
                  }
                }
            }else{
                gotoxy(15,10);
                printf("Invalid Section. Try Again.");
                getch();
                studentSecurity1();
            }
    }else if(strcmp(strupr(course), "BSIT") == 0){
             if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                  gotoxy(15,10);
                  printf("---------------------------------------------------------------------------");
                  gotoxy(15,12);
                  printf("Student Number: ");

                  gets(buffer);
                  gets(usernameG);

                  fp = fopen("BSIT_1YA1_Student_List.txt", "rb+");

                  while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(usernameG,std.studentNumber) == 0){
                        strcpy(passwordG, std.password);
                    }

                  gotoxy(15,13);
                  printf("Password: ");

                  while (p != 13) {
                    p = getch();
                    if (p != 13) {
                      putch('*');
                      password[s] = p;
                      s++;
                    }
                  }
                  password[s] = '\0';

                  if(strcmp(password, passwordG) == 0){
                    gotoxy(15,14);
                    printf("Log-In Successful.");
                    sleep(2);
                    loadingScreenStudent3();
                  }else{
                    gotoxy(15,14);
                    printf("Invalid Account. Try Again.");
                    getch();
                    studentSecurity1();
                  }
                }
            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
                  gotoxy(15,10);
                  printf("---------------------------------------------------------------------------");
                  gotoxy(15,12);
                  printf("Student Number: ");

                  gets(buffer);
                  gets(usernameG);

                  fp = fopen("BSIT_1YA2_Student_List.txt", "rb+");

                  while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(usernameG,std.studentNumber) == 0){
                        strcpy(passwordG, std.password);
                    }

                  gotoxy(15,13);
                  printf("Password: ");

                  while (p != 13) {
                    p = getch();
                    if (p != 13) {
                      putch('*');
                      password[s] = p;
                      s++;
                    }
                  }
                  password[s] = '\0';

                  if(strcmp(password, passwordG) == 0){
                    gotoxy(15,14);
                    printf("Log-In Successful.");
                    sleep(2);
                    loadingScreenStudent4();
                  }else{
                    gotoxy(15,14);
                    printf("Invalid Account. Try Again.");
                    getch();
                    studentSecurity1();
                  }
                }
            }else{
                gotoxy(15,10);
                printf("Invalid Section. Try Again.");
                getch();
                studentSecurity1();
            }
    }else{
        gotoxy(15,10);
        printf("Invalid Course. Try Again.");
        getch();
        studentSecurity1();
    }
}

//**************** copy of void studentSecurity because of buffer issues
void studentSecurity1(){

    system("cls");
  int s = 0;
  char username[20], password[20], p, buffer[5], course[50], section[50];

  gotoxy(15,5);
  printf("---Student Log-In System---");

  gotoxy(15,7);
  printf("Enter Course: ");
  scanf(" %[^\n]", &course);
  gotoxy(15,8);
  printf("Enter Section: ");
  scanf(" %[^\n]", &section);

  FILE *fp;
  struct student_list std;

    if(strcmp(strupr(course), "BSCS") == 0){
            if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                  gotoxy(15,10);
                  printf("---------------------------------------------------------------------------");
                  gotoxy(15,12);
                  printf("Student Number: ");

                  gets(buffer);
                  gets(usernameG);

                  fp = fopen("BSCS_1YA1_Student_List.txt", "rb+");

                  while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(usernameG,std.studentNumber) == 0){
                        strcpy(passwordG, std.password);
                    }

                  gotoxy(15,13);
                  printf("Password: ");

                  while (p != 13) {
                    p = getch();
                    if (p != 13) {
                      putch('*');
                      password[s] = p;
                      s++;
                    }
                  }
                  password[s] = '\0';

                  if(strcmp(password, passwordG) == 0){
                    gotoxy(15,14);
                    printf("Log-In Successful.");
                    sleep(2);
                    loadingScreenStudent1();
                  }else{
                    gotoxy(15,14);
                    printf("Invalid Account. Try Again.");
                    getch();
                    studentSecurity1();
                  }
                }
            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
                  gotoxy(15,10);
                  printf("---------------------------------------------------------------------------");
                  gotoxy(15,12);
                  printf("Student Number: ");

                  gets(buffer);
                  gets(usernameG);

                  fp = fopen("BSCS_1YA2_Student_List.txt", "rb+");

                  while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(usernameG,std.studentNumber) == 0){
                        strcpy(passwordG, std.password);
                    }

                  gotoxy(15,13);
                  printf("Password: ");

                  while (p != 13) {
                    p = getch();
                    if (p != 13) {
                      putch('*');
                      password[s] = p;
                      s++;
                    }
                  }
                  password[s] = '\0';

                  if(strcmp(password, passwordG) == 0){
                    gotoxy(15,14);
                    printf("Log-In Successful.");
                    sleep(2);
                    loadingScreenStudent2();
                  }else{
                    gotoxy(15,14);
                    printf("Invalid Account. Try Again.");
                    getch();
                    studentSecurity1();
                  }
                }
            }else{
                gotoxy(15,10);
                printf("Invalid Section. Try Again.");
                getch();
                studentSecurity1();
            }
    }else if(strcmp(strupr(course), "BSIT") == 0){
             if(strcmp(strupr(section), "YA-1") == 0 || strcmp(strupr(section), "1-YA-1") == 0 || strcmp(strupr(section), "1YA-1") == 0 || strcmp(strupr(section), "1-YA1") == 0 || strcmp(strupr(section), "YA1") == 0 || strcmp(strupr(section), "1YA1") == 0){
                  gotoxy(15,10);
                  printf("---------------------------------------------------------------------------");
                  gotoxy(15,12);
                  printf("Student Number: ");

                  gets(buffer);
                  gets(usernameG);

                  fp = fopen("BSIT_1YA1_Student_List.txt", "rb+");

                  while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(usernameG,std.studentNumber) == 0){
                        strcpy(passwordG, std.password);
                    }

                  gotoxy(15,13);
                  printf("Password: ");

                  while (p != 13) {
                    p = getch();
                    if (p != 13) {
                      putch('*');
                      password[s] = p;
                      s++;
                    }
                  }
                  password[s] = '\0';

                  if(strcmp(password, passwordG) == 0){
                    gotoxy(15,14);
                    printf("Log-In Successful.");
                    sleep(2);
                    loadingScreenStudent3();
                  }else{
                    gotoxy(15,14);
                    printf("Invalid Account. Try Again.");
                    getch();
                    studentSecurity1();
                  }
                }
            }else if(strcmp(strupr(section), "YA-2") == 0 || strcmp(strupr(section), "1-YA-2") == 0 || strcmp(strupr(section), "1YA-2") == 0 || strcmp(strupr(section), "1-YA2") == 0 || strcmp(strupr(section), "YA2") == 0 || strcmp(strupr(section), "1YA2") == 0){
                  gotoxy(15,10);
                  printf("---------------------------------------------------------------------------");
                  gotoxy(15,12);
                  printf("Student Number: ");

                  gets(buffer);
                  gets(usernameG);

                  fp = fopen("BSIT_1YA2_Student_List.txt", "rb+");

                  while(fread(&std,sizeof(std),1,fp) == 1){
                    if(strcmp(usernameG,std.studentNumber) == 0){
                        strcpy(passwordG, std.password);
                    }

                  gotoxy(15,13);
                  printf("Password: ");

                  while (p != 13) {
                    p = getch();
                    if (p != 13) {
                      putch('*');
                      password[s] = p;
                      s++;
                    }
                  }
                  password[s] = '\0';

                  if(strcmp(password, passwordG) == 0){
                    gotoxy(15,14);
                    printf("Log-In Successful.");
                    sleep(2);
                    loadingScreenStudent4();
                  }else{
                    gotoxy(15,14);
                    printf("Invalid Account. Try Again.");
                    getch();
                    studentSecurity1();
                  }
                }
            }else{
                gotoxy(15,10);
                printf("Invalid Section. Try Again.");
                getch();
                studentSecurity1();
            }
    }else{
        gotoxy(15,10);
        printf("Invalid Course. Try Again.");
        getch();
        studentSecurity1();
    }
}

//************** different void functions for viewing grades based on course and section
void bscs_ya1_grades(){
    system("cls");

    char student_number[20], response;
    int status = 1, subStatus = 1;

    FILE *fp;
    struct student_list std;

    while(status != 0){
        subStatus = 1;
        gotoxy(15,5);
        printf("---View Student Grades---");
        fp = fopen("BSCS_1YA1_Student_List.txt","rb+");
        if(fp == NULL){
            gotoxy(15,9);
            printf("Error opening file");
            getch();
            studentMenu();
        }
        rewind(fp);
        fflush(stdin);
        while(fread(&std,sizeof(std),1,fp) == 1)
        {
            if(strcmp(usernameG,std.studentNumber) == 0){
                gotoxy(15,7);
                printf("-------------------------------------------");
                gotoxy(15,9);
                printf("Name: %s, %s", std.lastname, std.firstname);
                gotoxy(15,11);
                printf("Prelim Grade: %s", std.prelim);
                gotoxy(15,12);
                printf("Midterm Grade: %s", std.midterm);
                gotoxy(15,13);
                printf("Finals Grade: %s", std.finals);
                fseek(fp ,-sizeof(std),SEEK_CUR);
                fwrite(&std,sizeof(std),1,fp);
                break;
            }
        }
        fclose(fp);

        gotoxy(15,15);
        printf("Press any key to continue...");
        getch();
        studentMenu();
    }
}

void bscs_ya2_grades(){
    system("cls");

    char student_number[20], response;
    int status = 1, subStatus = 1;

    FILE *fp;
    struct student_list std;

    while(status != 0){
        subStatus = 1;
        gotoxy(15,5);
        printf("---View Student Grades---");
        fp = fopen("BSCS_1YA2_Student_List.txt","rb+");
        if(fp == NULL){
            gotoxy(15,9);
            printf("Error opening file");
            getch();
            studentMenu();
        }
        rewind(fp);
        fflush(stdin);
        while(fread(&std,sizeof(std),1,fp) == 1)
        {
            if(strcmp(usernameG,std.studentNumber) == 0){
                gotoxy(15,7);
                printf("-------------------------------------------");
                gotoxy(15,9);
                printf("Name: %s, %s", std.lastname, std.firstname);
                gotoxy(15,11);
                printf("Prelim Grade: %s", std.prelim);
                gotoxy(15,12);
                printf("Midterm Grade: %s", std.midterm);
                gotoxy(15,13);
                printf("Finals Grade: %s", std.finals);
                fseek(fp ,-sizeof(std),SEEK_CUR);
                fwrite(&std,sizeof(std),1,fp);
                break;
            }
        }
        fclose(fp);

        gotoxy(15,15);
        printf("Press any key to continue...");
        getch();
        studentMenu();
    }
}

void bsit_ya1_grades(){
    system("cls");

    char student_number[20], response;
    int status = 1, subStatus = 1;

    FILE *fp;
    struct student_list std;

    while(status != 0){
        subStatus = 1;
        gotoxy(15,5);
        printf("---View Student Grades---");
        fp = fopen("BSIT_1YA1_Student_List.txt","rb+");
        if(fp == NULL){
            gotoxy(15,9);
            printf("Error opening file");
            getch();
            studentMenu();
        }
        rewind(fp);
        fflush(stdin);
        while(fread(&std,sizeof(std),1,fp) == 1)
        {
            if(strcmp(usernameG,std.studentNumber) == 0){
                gotoxy(15,7);
                printf("-------------------------------------------");
                gotoxy(15,9);
                printf("Name: %s, %s", std.lastname, std.firstname);
                gotoxy(15,11);
                printf("Prelim Grade: %s", std.prelim);
                gotoxy(15,12);
                printf("Midterm Grade: %s", std.midterm);
                gotoxy(15,13);
                printf("Finals Grade: %s", std.finals);
                fseek(fp ,-sizeof(std),SEEK_CUR);
                fwrite(&std,sizeof(std),1,fp);
                break;
            }
        }
        fclose(fp);

        gotoxy(15,15);
        printf("Press any key to continue...");
        getch();
        studentMenu();
    }
}

void bsit_ya2_grades(){
    system("cls");

    char student_number[20], response;
    int status = 1, subStatus = 1;

    FILE *fp;
    struct student_list std;

    while(status != 0){
        subStatus = 1;
        gotoxy(15,5);
        printf("---View Student Grades---");
        fp = fopen("BSIT_1YA2_Student_List.txt","rb+");
        if(fp == NULL){
            gotoxy(15,9);
            printf("Error opening file");
            getch();
            studentMenu();
        }
        rewind(fp);
        fflush(stdin);
        while(fread(&std,sizeof(std),1,fp) == 1)
        {
            if(strcmp(usernameG,std.studentNumber) == 0){
                gotoxy(15,7);
                printf("-------------------------------------------");
                gotoxy(15,9);
                printf("Name: %s, %s", std.lastname, std.firstname);
                gotoxy(15,11);
                printf("Prelim Grade: %s", std.prelim);
                gotoxy(15,12);
                printf("Midterm Grade: %s", std.midterm);
                gotoxy(15,13);
                printf("Finals Grade: %s", std.finals);
                fseek(fp ,-sizeof(std),SEEK_CUR);
                fwrite(&std,sizeof(std),1,fp);
                break;
            }
        }
        fclose(fp);

        gotoxy(15,15);
        printf("Press any key to continue...");
        getch();
        studentMenu();
    }
}

//********************* scrapped funtion due to time constraints
void viewAcademicCalendar(){
    system("cls");
    printf("This is View Academic Calendar");
}

//************************************ void function for the Student Menu that calls out functions listed above
void studentMenu(){
    system("cls");

    int status = 1;
    char choice;

        gotoxy(15,5);
        printf("---Student Menu---");
        gotoxy(15,7);
        printf("Enter a number to perform its corresponding task");
        gotoxy(15,9);
        printf("1. Record Attendance");
        gotoxy(15,10);
        printf("2. View Attendance Sheet");
        gotoxy(15,11);
        printf("3. View Grades");
        gotoxy(15,12);
        printf("4. Back to Home Screen");

        gotoxy(15,14);
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice){
            case '1':
                recordAttendance();
                break;
            case '2':
                system("cls");
                viewAttendanceSheetS();
                break;
            case '3':
                studentSecurity();
                break;
            case '4':
                main();
                break;
            default:
                gotoxy(15,15);
                printf("Invalid Input. Try Again");
                getch();
                studentMenu();
                break;
        }
}

//********************* void function for the Main Menu
void mainMenu(){

    char choice;

    system("cls");
        gotoxy(15,5);
        printf("---Main Menu---");
        gotoxy(15,7);
        printf("Enter a number to perform its corresponding task: ");
        gotoxy(15,9);
        printf("1. Proceed as Teacher");
        gotoxy(15,10);
        printf("2. Proceed as Student");
        gotoxy(15,11);
        printf("3. Exit the program");

        gotoxy(15,13);
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice){
            case '1':
                teacherSecurity();
                break;
            case '2':
                studentMenu();
                break;
            case '3':
                system("cls");
                exit(1);
                break;
            default:
                gotoxy(15,14);
                printf("Invalid Input. Try Again.");
                getch();
                mainMenu();
                break;
        }

}

int main()
{
    system("cls");

    int choice, status = 1;
    char buffer;

    gotoxy(42,7);
    printf("---Student Management System---");

    gotoxy(1,18);
    printf("Made by Group 2 - Pseudos Rebels");
    gotoxy(1,20);
    printf("Team Leader: Torre, John Lloyd");
    gotoxy(1,22);
    printf("Members: Zara, Ace Maneja       (Tech Lead)");
    gotoxy(10,23);
    printf("Dotingco, Frank Lynuel (Full Stack Developer)");
    gotoxy(10,24);
    printf("Lim, Jald              (Full Stack Developer)");
    gotoxy(10,25);
    printf("Ong, Noriel Edward     (QA Lead)");
    gotoxy(10,26);
    printf("Ilaida, Romille        (QA Lead)");

    gotoxy(45,9);
    printf("Press any key to continue ");
    getch();

    gets(buffer);
    mainMenu();


    return 0;
}

//************ void function for Cursor Positioning used throughout the program
void gotoxy(int x,int y){
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

#include<stdio.h>
#include<string.h>

int main(){
 if(check_password() ==0)
    {
    show_UI();
    }
 return 0;
}
int check_password()
{
    FILE *pass;
    pass= fopen("./password.txt", "r");
    if(pass == NULL)
        {
            printf("Error opening the password file.\n");
            return -1;
        }

   char password[1000];
   fscanf(pass, "%s", password);
   fclose(pass);

   printf("---------------------------------------------\n");
   printf("|                                           |\n");
   printf("|                                           |\n");
   printf("|                WELLCOME!                  |\n");
   printf("|                                           |\n");
   printf("|                                           |\n");
   printf("|                                           |\n");
   printf("---------------------------------------------\n");

   printf("\n\n\n");

   password[strlen(password)] ='\0';
   printf("Please give a password :");
   char user_pass[1000];
   fgets(user_pass, 1000, stdin);
   user_pass[strcspn(user_pass, "\n")]= '\0';

   return strcmp(password, user_pass);

}

void show_UI()
{
    printf("------------------------------------------\n");
    printf("|                                        |\n");
    printf("|                                        |\n");
    printf("|            The students                |\n");
    printf("|                                        |\n");
    printf("|                                        |\n");
    printf("|                                        |\n");
    printf("------------------------------------------\n");

    FILE *fp;
    fp=fopen("./countStudents.txt", "r");
    int size,i;
    fscanf(fp, "%d", i+1);
    fclose(fp);

     for (int i = 0; i < size; i++)
    {
        char name[1000] = "./students/student";
        char y[1000];
        sprintf(y, "%d", i + 1);
        strcat(name, y);
        strcat(name, ".txt");
        FILE *fp;
        fp = fopen(name, "r");

        char c;
        int j = 0;
        while ((c = fgetc(fp)) != EOF)
        {
            y[j] = c;
            j++;
        }

        char name1[1000];
        char char_id[11];
        fclose(fp);

        j = 0;
        int h = 0;
        while ((c = y[h]) != '\n')
        {
            name1[j] = c;
            h++;
            j++;
        }
        name1[j] = '\0';

        j = 0;
        h++;
        while ((c = y[h]) != '\n')
        {
            char_id[j] = c;
            h++;
            j++;
        }
        char_id[j] = '\0';
        j = 0;
        h++;
        printf("                               \n");
        printf("The name of the student  : %s\n", name1);
        printf("The id of the student    : %s\n", char_id);
        printf("The grade of the student : %c\n", y[h]);
        printf("                               \n");
        memset(name1, 0, sizeof(name1));
        memset(char_id, 0, sizeof(char_id));
    }


}

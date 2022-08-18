# include<stdio.h>
#include <string.h>


void book_1();
void book_2();
void book_3();
void book_4();
void topic_1_1();
void topic_1_2();
void topic_1_3();
void topic_1_4();

void topic_2_1();
void topic_2_2();
void topic_2_3();
void topic_2_4();

void topic_3_1();
void topic_3_2();
void topic_3_3();
void topic_3_4();

void topic_4_1();
void topic_4_2();
void topic_4_3();
void topic_4_4();

void frontpage_1();
void frontpage_2();
void frontpage_3();
void frontpage_4();

void index1();
void index2();
void index3();
void index4();

void home_page();
void login();

struct user
{
    char username[50];
    char password[10];
};

int main(){
    

    login();
    return 0; 
    
}

void login(){
     struct user user_no[100];
    int i = 0, flag, flag_u_name_check;
    int choice, passwdCheckint = 0;
    char u_name_check[50];
    char password_check[50];



again:

    printf("  \n\n\n                    \t\t\t\e[4m Welcome TO Spidy's Book World   !!! \e[m\n\n\n\n");
    printf("\t\t\tWe Are Glad To Serve You a Lot Of Knowlwdge And Joy  !!!\n\n");
    printf("\t\t\tWe Provide A Open Source E-Book Library Absolutely Free  ( `_ `) \n\n");
    printf("\t\t___________________________________________________________________________________\t\t\n\n\n");
   printf("\t\t\tInstructions Are As Follows :\n\n");
   printf("\t\t\t      1. You Can Have Your Own Account .\n");
   printf("\t\t\t      2. Enjoy Reading Your Favourite Books At Any Time  .\n");
   printf("\t\t\t      2. Sign Up First Then You Can Log in  .\n\n\n\n");
    printf("                                ________________           ___________________\n");
    printf("                               |                |          |                  |\n");
    printf("                               |   Signup [ 1 ] |          |   Log in [ 2 ]   |\n");
    printf("                               |________________|          |__________________|\n\n");
    printf(" \n                            Enter Number To Perform Action : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\n\n\t\t\t| Choose  User name  | :  \t");
        getchar();
        strcpy(user_no[i].username, gets(user_no[i].username));
        printf("\n\t\t\t| Choose  Your Password | :  \t");
        strcpy(user_no[i].password, gets(user_no[i].password));
     
        printf("\n\n\t\t\tAccount created successfully   ( ~ _ ~ )  ");

        printf("\n\t\t\t___________________________________________________\n\n");
    }
    else if (choice == 2)
    {

    //     printf("\n\n\t\tNO Of Users Are As Follows :\n\n");
    //    for (int i = 0; i <5; i++)
    //    {
    //     printf("Name of User %d = %s\n",i+1,user_no[i].username);
    //     printf("Password For User  %d = %s\n\n",i+1,user_no[i].password);
    //     getchar();
    //    }
    //    getchar();
        printf("\n\n\t\t\t| Enter  User name | :    ");
        getchar();
        gets(u_name_check);
        for (int i = 0; i < 100; i++)
        {
            if (!(strcmp(u_name_check, user_no[i].username)))
            {
                flag_u_name_check = 1;
                passwdCheckint = i;
                break;
            }
            else
            {
                flag_u_name_check = 2;
            }
        }
        if (flag_u_name_check == 1)
        { password :
            printf("\n\t\t\t| Enter Password | : \t");
            gets(password_check);
            if (!(strcmp(user_no[passwdCheckint].password, password_check)))
            {
               
            // printf("\n\t\t____________________________________________________\n\n");
                home_page();
            }
            else
            {
                printf("\n\n\t\tIncorrect Password !!\n");
            printf("\n\t\t________________________________________________\n\n");
            goto password;
            }
        }
        else if (flag_u_name_check == 2)
        {
            printf("\n\t\tInvalid Username !! \n");
        }
        else
        {
            printf(" \n\n\t\t All gone wrong  (*-*)\n");
        }
    }
    else
    {
        printf("\n\t\tEnter Valid Input!!\n\n");
        getchar();
       goto again;
    }

enter :
    printf("\n\n\t\tEnter 100 to go back to login page : ");
    scanf("%d", &flag);

    if (flag == 100)
    {
        i++;
        getchar();
       goto again;
    }
    else
    {
        printf("\n\t\tEnter Valid Input!!\n\n");
        getchar();
        goto enter;

    }
}

void home_page()
{
    int choose_book;

    homepage:
    printf("\n\t\t______________________________________________________________________________\n\n");


    printf("                          _________________                           _________________       \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |    Sorcerers    |                         |   Chamber Of    |     \n");
    printf("                         |      Stone      |                         |                 |     \n");
    printf("                         |                 |                         |     Secrets     |     \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |      [ 1 ]      |                         |      [ 2 ]      |     \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |_________________|                         |_________________|     \n\n\n");
    printf("                          _________________                           _________________      \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |   Prisoner of   |                         |    Goblet Of    |     \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |     Azkaban     |                         |      Fire       |     \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |     [ 3 ]       |                         |      [ 4 ]      |     \n");
    printf("                         |                 |                         |                 |     \n");
    printf("                         |_________________|                         |_________________|       ");
    printf("\n\t\t________________________________________________________________________________");

    printf("\n\n\t\t|  Here Is Our Total Collection For You  | \n\n");
    error_homepage :
    printf("\t\tEnter The Index Number Of Book You Want To Read : ");
    scanf("%d",&choose_book);
   
   switch (choose_book)
   {
   case 1 :
 book_1();
    break;
   case 2 :
 book_2();
    break;
   case 3 :
 book_3();
    break;
   case 4 :
 book_4();
    break;
   
   default:
    
        printf("\n\t\tInvalid Input !!");
        printf("\n\t\tENter Valid Input");
        getchar();
            printf("\n\t\t________________________________________________\n\n");
        goto error_homepage;
    break;
   }

}

void book_1(){
    frontpage_1();
}

void frontpage_1()
{
    char next;

    getchar();
      printf("\n\n\n\t ______________________________________________________________________________\n");
    printf("\t|                                                                              | \n");
    printf("\t|______________________________________________________________________________| \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                   \e[7m--------------------------------------------\e[m               | \n");
    printf("\t|                   \e[7m   Harry Potter and the Sorcerers Stone     \e[m               | \n");
    printf("\t|                   \e[7m--------------------------------------------\e[m               | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[4m A U T H O R -\e[m                               | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[3m J. K. Rowling \e[m                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[2m Published Date - \e[m                           | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 Date - 26 / 06 / 1997                        | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|______________________________________________________________________________| \n");
    printf("\t|                                                                              | \n");
    printf("\t|                          Enter 'n' to go for next page :                     | \n");
    printf("\t|                          Enter 'h' to go for home page :                     | \n");
    printf("\t|______________________________________________________________________________| \n\n");
frontpage1:
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        // printf("Calling index 1\n");
        index1();
    }
    else if (next == 'h')
    {
           home_page(); 
    }
    else{
        printf("\n\t\tInvalid Input !!");
        getchar();
       goto frontpage1;
    }
}

void index1()
{
    int topic_no;

    printf("\n\n\n\t________________________________________________________________________________\n");
    printf("\t|                                                                              |\n ");
    printf("\t|______________________________________________________________________________|\n");
    printf("\t|                                                                              |\n ");
    printf("\t|                                                                              |\n ");
    printf("\t|\t \t\t        |  I N D E X  |\t\t\t\t       |\n");
    printf("\t|                                                                              |\n ");
    printf("\t|      ______________________________________________________________\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |   SR - NO.      |             Chapter No :                 |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       1 .       |               Chapter 1                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       2 .       |               Chapter 2                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       3 .       |               Chapter 3                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       4 .       |               Chapter 4                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|                                                                              |\n ");
    printf("\t|                                                                              |\n ");
    printf("\t|______________________________________________________________________________|\n");

    printf("\n\n\t\t\tChoose Topic You Want To Read :  ");
    index1 :
    printf("\t");
    scanf("%d", &topic_no);
    // printf("%d\n",topic_no);

    switch (topic_no)
    {
    case 1:
        topic_1_1();
        break;
    case 2:
        topic_1_2();
        break;
    case 3:
        topic_1_3();
        break;
    case 4:
        topic_1_4();
        break;

    default:
        printf("\t\t\tInvalid Inpunt !!!");
        getchar();
        goto index1;

        break;
    }
}
void topic_1_1()
{
       printf("\n\n\n\t __________________________________________________________________________________\n");
    printf("\t|                                                                                  | \n");
    printf("\t|                       \e[4m Chapter One: The Boy who Lived \e[m                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                The Dursleys are a well-to-do, status-conscious family living in  | \n");
    printf("\t|     Surrey, England. Eager to keep up proper appearances, they are embarrassed   | \n");
    printf("\t|     by Mrs. Dursleys eccentric sister, Mrs. Potter, whom for years Mrs.          | \n");
    printf("\t|     Dursley has pretended not to know. On his way to work one ordinary morning,  | \n");
    printf("\t|     Mr. Dursley notices a cat reading a map. He is unsettled, but  tells himself | \n");
    printf("\t|     that he has only imagined it. Then, as Mr. Dursley is waiting in traffic, he | \n");
    printf("\t|     notices a cat reading a map. He is unsettled, but tells himself that he has. | \n");
    printf("\t|     only imagined it.Then, as Mr. Dursley is waiting in traffic, he notices peopl| \n");
    printf("\t|     -e dressed in brightly colored cloaks.                                       | \n");
    printf("\t|                 Walking past a bakery later that day, he overhears people talking| \n");
    printf("\t|     in an excited manner about his sister-in-laws family,the Potters, and the    | \n");
    printf("\t|     Potters one year old son Harry.Disturbed but still not sure anything is wrong| \n");
    printf("\t|     Mr.Dursley decides not to say anything to his wife. On the way home, he bumps| \n");
    printf("\t|     into a strangely dressed man who gleefully exclaims that someone named You   | \n");
    printf("\t|     Know-Who has finally gone and that even a Muggle like Mr. Dursley should     | \n");
    printf("\t|     rejoice  Meanwhile,the news is full of unusual reports of shooting stars and | \n");
    printf("\t|     owls flying during the day.                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|__________________________________________________________________________________| \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                          Enter 'n' to go for next topic :                        | \n");
    printf("\t|                          Enter 'i' to go at Index :                              | \n");
    printf("\t|__________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic1_1 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_1_2();
    }
    else if (next == 'i')
    {
        index1();
    }
      else{
        printf("\n\t\tInvalid Input !!");
        goto topic1_1;
        
    }
}

void topic_1_2()
{
   printf("\n\n\n\t ___________________________________________________________________________________\n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                         \e[4m Chapter Two: The Vanishing Glass\e[m               | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|               Ten years have passed. Harry is now almost eleven and living in    | \n");
    printf("\t|   wretchedness in a cupboard under the stairs in the Dursley house. He is        | \n");
    printf("\t|   tormaded by the Dursleys son, Dudley, a spoiled and whiny boy. Harry awakeded  | \n");
    printf("\t|   one morning by his aunt, Petunia, telling him to tend to the bacon immediately,| \n");
    printf("\t|   because it is Dudleys birthday and everything must be perfect. Dudley gets     | \n");
    printf("\t|   upset because he has only thirty-seven presents,one fewer than the privous year| \n");
    printf("\t|   When a neighbor calls to say she will not be able to watch Harry for the day,  | \n");
    printf("\t|   Dudley begins to cry, as he is upset that Harry will have to be brougth along  | \n");
    printf("\t|   on Dudleys birthday trip to the zoo.                                           | \n");
    printf("\t|              At the zoo, the Dursleys spoil Dudley and his friend Piers,         | \n");
    printf("\t|   neglecting Harry as usual. In the reptile house, Harry pays close attention    | \n");
    printf("\t|   to a boa constrictor and is astonished when he is able to have a conversation  | \n");
    printf("\t|   with it. Noticing what Harry is doing, Piers calls over Mr. Dursley and Dudley | \n");
    printf("\t|   who pushes Harry aside to get a better look at the snake.At this moment, the   | \n");
    printf("\t|   glass of the snakes tank vanishes and the boa constrictor slithers out onto    | \n");
    printf("\t|   the floor.                                                                     | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|__________________________________________________________________________________| \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                          Enter 'n' to go for next topic :                        | \n");
    printf("\t|                          Enter 'p' to go for previous topic :                    | \n");
    printf("\t|                          Enter 'i' to go at Index :                              | \n");
    printf("\t|__________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic1_2 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_1_3();
    }
    else if (next == 'p')
    {
        topic_1_1();
    }
    else if (next == 'i')
    {
        index1();
    }
      else{
        printf("\n\t\tInvalid Input !!");
        goto topic1_2;
    }
}
void topic_1_3()
{
    printf("\n\n\n\t ________________________________________________________________________________________\n");
    printf("\t|                                                                                       | \n");
    printf("\t|                          \e[4m Chapter Three : The Letters From No One \e[m               | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                  Punished for the boa constrictor incident, Harry is locked in his    | \n");
    printf("\t|    cupboard until summer. When finally free, he spends most of the time outside his   | \n");
    printf("\t|    house to escape the torments of Dudleys cohorts. Harry is excited by the prospect  | \n");
    printf("\t|    of starting a new school in the fall, far away from Dudley for the first time in   | \n");
    printf("\t|    his life One day, Uncle Vernon tells Harry to fetch the mail. Harry notices a      | \n");
    printf("\t|    letter bearing a coat of arms that is addressed to him in The Cupboard under the   | \n");
    printf("\t|    Stairs.                                                                            | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                 Uncle Vernon grabs the envelope from him and shows it to his wife.    | \n");
    printf("\t|      Both are shocked. They forced Dudley and Harry to leave the kitchen in order to  | \n");
    printf("\t|      discuss what to do . The next day Uncle Vernon visits Harry in the cupboard.He   | \n");
    printf("\t|      refuses to discuss the letter,but he tells Harry to move into Dudleys second room| \n");
    printf("\t|      Previously used to store Dudleys toys. The next day. Another letter comes for    | \n");
    printf("\t|      Harry.this time addressed to him The smallest Bedroom.Uncle Vernon becomes       | \n");
    printf("\t|      alarmed.                                                                         | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|_______________________________________________________________________________________| \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                           Enter 'n' to go for next topic :                            | \n");
    printf("\t|                           Enter 'p' to go for previous topic :                        | \n");
    printf("\t|                           Enter 'i' to go at Index :                                  | \n");
    printf("\t|_______________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic1_3 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_1_4();
    }
    else if (next == 'p')
    {
        topic_1_2();
    }
    else if (next == 'i')
    {
        index1();
    }
      else{
        printf("\n\t\tInvalid Input !!");
        goto topic1_3;
    }
}
void topic_1_4()
{

   printf("\n\n\n\t ________________________________________________________________________________________\n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                          \e[4m Chapter Four: The Keeper Of The Keys \e[m              | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                          The thumb is heard again. A gaint smashes down the door.     | \n");
    printf("\t|   Uncle Vernon threatens the gaint with a gun, but the gaint takes the gun and ties   | \n");
    printf("\t|   it into a knot.The gaint presents Harry with a chocolate birthday cake and introduce| \n");
    printf("\t|   himself as Hagrid,the Keeper Of The Keys abd Grounds at Hogwards.Hagrid isdisturbed | \n");
    printf("\t|   to find out that the Dursleys have never told Harry what is Hogwards is. Vernon     | \n");
    printf("\t|   tries to stop Hagrid from telling Harry about Hogwards, but to no avail. Hagrid     | \n");
    printf("\t|   tells Harry that Harry ia a wizard and presnts him with a letter of accpectance to  | \n");
    printf("\t|   the Hogwards School of Witchcraft and Wizardry.                                     | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                        Vernon protest that he will not allow Harry to attend Hogwards | \n");
    printf("\t|    Hagrid explains to Harry that the Dursleys have been lying all along about how the | \n");
    printf("\t|    boys parents died. Harry learns that they did not die in car crash, as he had      | \n");
    printf("\t|    always thought, but were killed by the evil wizard Voldemort.                      | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|_______________________________________________________________________________________| \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                           Enter 'p' to go for previous topic :                        | \n");
    printf("\t|                           Enter 'i' to go at Index :                                  | \n");
    printf("\t|                           Enter 'h' to go at Home Page :                              | \n");
    printf("\t|_______________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic1_4:
    printf("\t");
    scanf("%c", &next);

    if (next == 'p')
    {
        topic_1_3();
    }
    else if (next == 'i')
    {
        index1();
    }
    else if (next == 'h')
    {
      home_page();
    }
      else{
        printf("\n\t\tInvalid Input !!");
        goto topic1_4;
    }
}
void book_2(){
    frontpage_2();
}
void frontpage_2()
{
    char next;

    getchar();
      printf("\n\n\n\t ______________________________________________________________________________\n");
    printf("\t|                                                                              | \n");
    printf("\t|______________________________________________________________________________| \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                  \e[7m--------------------------------------------\e[m                | \n");
    printf("\t|                  \e[7m   Harry Potter & The Chamber Of Secrets    \e[m                | \n");
    printf("\t|                  \e[7m--------------------------------------------\e[m                | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[4m A U T H O R -\e[m                               | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[3m J. K. Rowling \e[m                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[2m Published Date - \e[m                           | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 Date - 02 / 07 / 1998                        | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|______________________________________________________________________________| \n");
    printf("\t|                                                                              | \n");
    printf("\t|                          Enter 'n' to go for next page :                     | \n");
    printf("\t|                          Enter 'h' to go for home page :                     | \n");
    printf("\t|______________________________________________________________________________| \n\n");
    frontpage2 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        // printf("Calling index 1\n");
        index2();
    }
    else if (next == 'h')
    {
  home_page();
    }
    else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");
        getchar();
        goto frontpage2;
    }
}

void index2()
{
    int topic_no;

    printf("\n\n\n\t_______________________________________________________________________________\n");
    printf("\t|                                                                              |\n ");
    printf("\t|______________________________________________________________________________|\n");
    printf("\t|                                                                              |\n ");
    printf("\t|                                                                              |\n ");
    printf("\t|\t \t\t        |  I N D E X  |\t\t\t\t       |\n");
    printf("\t|                                                                              |\n ");
    printf("\t|      ______________________________________________________________\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |   SR - NO.      |             Topic  Name                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       1 .       |               Chapter 1                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       2 .       |               Chapter 2                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       3 .       |               Chapter 3                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       4 .       |               Chapter 4                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|                                                                              |\n ");
    printf("\t|                                                                              |\n ");
    printf("\t|______________________________________________________________________________|\n");

    printf("\n\n\t\t\tChoose Topic You Want To Read :  ");
    index2:
    printf("\t");
    scanf("%d", &topic_no);
    // printf("%d\n",topic_no);

    switch (topic_no)
    {
    case 1:
        topic_2_1();
        break;
    case 2:
        topic_2_2();
        break;
    case 3:
        topic_2_3();
        break;
    case 4:
        topic_2_4();
        break;

    default:
        printf("\t\t\tInvalid Inpunt !!!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");
        getchar();
        goto index2;
        break;
    }
}
void topic_2_1()
{
       printf("\n\n\n\t __________________________________________________________________________________\n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                      \e[4m Chapter One: The Worst Birthday \e[m                           | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                  At 4 Privet Drive, the Dursley family is arguing. Vernon        | \n");
    printf("\t|    Dursley bellows at his nephew Harry Potter because Harry's pet owl, Hedwig,   | \n");
    printf("\t|    is noisy. Dudley Dursley, Vernon's spoiled and obese son, clamors for more    | \n");
    printf("\t|    bacon.When Dudley demands the frying pan, Harry mutters, \"You've for -        | \n");
    printf("\t|     -gotten the magic word,\" and the family erupts into chaos. The narrator      | \n");
    printf("\t|      explains the reason .                                                       | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                       Harry Potter is a wizard, staying with the Dursleys for    | \n");
    printf("\t|    the summer after his first term at Hogwarts School of Witchcraft. and         | \n");
    printf("\t|    Wizardry. Upon Harry's return from school, Uncle Vernon locked all of Harry   | \n");
    printf("\t|    's magical thing's spellbooks's magical things—his spellbooks,  non-        | \n");
    printf("\t|    magical people, and they were forced to adopt Harry when his own parents      | \n");
    printf("\t|     were killed by the greatest wizard of their time, the evil Lord Voldemort.   | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|__________________________________________________________________________________| \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                          Enter 'n' to go for next topic :                        | \n");
    printf("\t|                          Enter 'i' to go at Index :                              | \n");
    printf("\t|__________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic2_1:
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_2_2();
    }
    else if (next == 'i')
    {
        index2();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto topic2_1;
    }
}

void topic_2_2()
{
   printf("\n\n\n\t ___________________________________________________________________________________\n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                        \e[4m Chapter Two: Dobby's Warning \e[m                            | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|               The creature sitting on Harry's bed is small, has bulging green    | \n");
    printf("\t|    eyes and bat-like ears, and is wearing a tattered pillowcase for clothes.     | \n");
    printf("\t|    Harry, still shocked by its appearance, recognizes it as the thing that was   | \n");
    printf("\t|    staring at him from the bush earlier that afternoon.The creature stands and   | \n");
    printf("\t|   introduces himself as Dobby the house-elf, and Harry invites him to sit back   | \n");
    printf("\t|     down on the bed.                                                             | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|               Dobby bursts into noisy tears at being treated like an equal by    | \n");
    printf("\t|     a wizard, and this noise causes the dinner party voices downstairs to fa -   | \n");
    printf("\t|     lter slightly. When Harry comments that Dobby must not know many nice        | \n");
    printf("\t|     wizards .                                                                    | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|               the house-elf begins to bang his head on the window, explaining    | \n");
    printf("\t|    his behavior as a self-inflicted punishment for speaking disloyally of his    | \n");
    printf("\t|      masters, saying that he was bound to serve them until he died .             | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|__________________________________________________________________________________| \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                          Enter 'n' to go for next topic :                        | \n");
    printf("\t|                          Enter 'p' to go for previous topic :                    | \n");
    printf("\t|                          Enter 'i' to go at Index :                              | \n");
    printf("\t|__________________________________________________________________________________| \n\n");

    char next;
    topic2_2 :
    getchar();
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_2_3();
    }
    else if (next == 'p')
    {
        topic_2_1();
    }
    else if (next == 'i')
    {
        index2();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

       goto topic2_2;
    }
}
void topic_2_3()
{
    printf("\n\n\n\t ________________________________________________________________________________________\n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                         \e[4m Chapter Three : The Burrow \e[m                                  | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                   Harry, awakened from a dream in which someone is tapping at his     | \n");
    printf("\t|     cage, peers out his barred window to see his best friend, Ron Weasley, inside     | \n");
    printf("\t|     a car suspended in midair driven/flown by his twin older brothers, Fred and       | \n");
    printf("\t|     George.                                                                           | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                   Ron explains that he was worried when Harry failed to answer his    | \n");
    printf("\t|    letters and so came to rescue him from the Dursleys. The four boys work toge -     | \n");
    printf("\t|    - ther to yank the bars off Harry's window. Fred and George, two avid prank  -     | \n");
    printf("\t|    - sters, pick the lock on Harry's door and tiptoe downstairs to collect Harry      | \n");
    printf("\t|     trunk. They manage to escape out the window,but without Hedwig,who screeches      | \n");
    printf("\t|     loudly, waking Uncle Vernon, who runs upstairs in a fury. A game of tug-a-war     | \n");
    printf("\t|      ensues.                                                                          | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                   The Weasleys pull on Harry's arms and Vernon pulls on his legs.     | \n");
    printf("\t|      The Weasleys win, and the boys all drive off through the night sky.              | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|_______________________________________________________________________________________| \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                           Enter 'n' to go for next topic :                            | \n");
    printf("\t|                           Enter 'p' to go for previous topic :                        | \n");
    printf("\t|                           Enter 'i' to go at Index :                                  | \n");
    printf("\t|_______________________________________________________________________________________| \n\n");

    char next;
    topic2_3:
    getchar();
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_2_4();
    }
    else if (next == 'p')
    {
        topic_2_2();
    }
    else if (next == 'i')
    {
        index2();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto topic2_3;
    }
}
void topic_2_4()
{
   printf("\n\n\n\t ________________________________________________________________________________________\n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                         \e[4m Chapter Four: At Flourish and Blotts \e[m                        | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                   Harry enjoys his weeks at The Burrow, and he marvels that every     | \n");
    printf("\t|     object in the house is enchanted in some way. Mr. Weasley pays a great deal of    | \n");
    printf("\t|     attention to Harry, asking him question after question about Muggle life. One     | \n");
    printf("\t|     day, letters containing school supply lists arrive by Owl-post. Ginny Weasley     | \n");
    printf("\t|     is remarkably clumsy whenever Harry is nearby. We meet another Weasley brother    | \n");
    printf("\t|     , Percy ,  the oldest child still living at home, who is studious, stuffy,        | \n");
    printf("\t|     annoying and harmless .                                                           | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                    All of the boys except for Percy spend an afternoon practicing     | \n");
    printf("\t|     Quidditch in a nearby hidden field, and while they fly through the air, Ron       | \n");
    printf("\t|     comments that his parents will have trouble paying for all of their new school    | \n");
    printf("\t|      supplies and robes. Harry feels a twinge of guilt, as he has in a wizard         | \n");
    printf("\t|       bank a fortune left to him by his parents; he never worries about money, and    | \n");
    printf("\t|      the Weasleys always do.                                                          | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|_______________________________________________________________________________________| \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                           Enter 'p' to go for previous topic :                        | \n");
    printf("\t|                           Enter 'i' to go at Index :                                  | \n");
    printf("\t|                           Enter 'h' to go at Home Page :                              | \n");
    printf("\t|_______________________________________________________________________________________| \n\n");

    char next;
    topic2_4:
    getchar();
    printf("\t");
    scanf("%c", &next);

    if (next == 'p')
    {
        topic_2_3();
    }
    else if (next == 'i')
    {
        index2();
    }
    else if (next == 'h')
    {
       home_page();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto topic2_4;
    }
}

void book_3(){
    frontpage_3();
}

void frontpage_3()
{
    char next;

    getchar();
      printf("\n\n\n\t ______________________________________________________________________________\n");
    printf("\t|                                                                              | \n");
    printf("\t|______________________________________________________________________________| \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                  \e[7m--------------------------------------------\e[m                | \n");
    printf("\t|                  \e[7m   Harry Potter & The Prisoner of Azkaban   \e[m                | \n");
    printf("\t|                  \e[7m--------------------------------------------\e[m                | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[4m A U T H O R -\e[m                               | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[3m J. K. Rowling \e[m                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[2m Published Date - \e[m                           | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 Date - 02 / 07 / 1998                        | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|______________________________________________________________________________| \n");
    printf("\t|                                                                              | \n");
    printf("\t|                          Enter 'n' to go for next page :                     | \n");
    printf("\t|                          Enter 'h' to go for home page :                     | \n");
    printf("\t|______________________________________________________________________________| \n\n");
frontpage3 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        // printf("Calling index 1\n");
        index3();
    }
    else if (next == 'h')
    {
  home_page();
    }
    else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto frontpage3;
    }
}

void index3()
{
    int topic_no;
    
    printf("\n\n\n\t_______________________________________________________________________________\n");
    printf("\t|                                                                              |\n ");
    printf("\t|______________________________________________________________________________|\n");
    printf("\t|                                                                              |\n ");
    printf("\t|                                                                              |\n ");
    printf("\t|\t \t\t        |  I N D E X  |\t\t\t\t       |\n");
    printf("\t|                                                                              |\n ");
    printf("\t|      ______________________________________________________________\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |   SR - NO.      |             Topic  Name                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       1 .       |               Chapter 1                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       2 .       |               Chapter 2                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       3 .       |               Chapter 3                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       4 .       |               Chapter 4                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|                                                                              |\n ");
    printf("\t|                                                                              |\n ");
    printf("\t|______________________________________________________________________________|\n");

    printf("\n\n\t\t\tChoose Topic You Want To Read :  ");
    index3 :
    printf("\t");
    scanf("%d", &topic_no);
    // printf("%d\n",topic_no);

    switch (topic_no)
    {
    case 1:
        topic_3_1();
        break;
    case 2:
        topic_3_2();
        break;
    case 3:
        topic_3_3();
        break;
    case 4:
        topic_3_4();
        break;

    default:
        printf("\t\t\tInvalid Inpunt !!!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        getchar();
        goto index3;
        break;
    }
}
void topic_3_1()
{
       printf("\n\n\n\t __________________________________________________________________________________\n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                          \e[4m Chapter One: OWL POST \e[m                                 | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                     It is midnight when the story opens. Harry is lying quietly  | \n");
    printf("\t|    on his bed, trying to write an essay about witch-burning for his  Hogwarts    | \n");
    printf("\t|    classes without waking up his aunt, uncle, and cousin, all of whom would be   | \n");
    printf("\t|    to know that he was engaged in any form of magic while in their house.        | \n");
    printf("\t|    He realizes that it is now one o'clock, an hour past his thirteenth birthday. | \n");
    printf("\t|    Since the Dursleys have never celebrated his birthday, Harry does not conside | \n");
    printf("\t|    event remarkable. Harry reminisces about his parents' death at the hands of   | \n");
    printf("\t|    and on his own encounter with Voldemort the previous spring at Hogwarts.      | \n");
    printf("\t|    Harry feels relieved to have lived to see his thirteenth birthday.            | \n");
    printf("\t|    Harry notices an odd flapping thing coming toward his window, and he soon     | \n");
    printf("\t|    that it is three owls, his own loyal, snowy Hedwig, a second unfamiliar owl,  | \n");
    printf("\t|    held up by the first two, Errol, his friend Ron Weasley's feeble family owl.  | \n");
    printf("\t|    The owls deliver birthday cards and gifts from Ron, Hermione, and Hagrid,     | \n");
    printf("\t|    closest friends. From Ron, Harry receives a pocket Sneakoscope and a          | \n");
    printf("\t|    trip to Egypt. From Hermione, he receives a Broomstick Servicing Kit          | \n");
    printf("\t|    (which Harry greatly appreciates, since his favorite sport).                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|__________________________________________________________________________________| \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                          Enter 'n' to go for next topic :                        | \n");
    printf("\t|                          Enter 'i' to go at Index :                              | \n");
    printf("\t|__________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic3_1 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_3_2();
    }
    else if (next == 'i')
    {
        index3();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto topic3_1;
    }
}

void topic_3_2()
{
   printf("\n\n\n\t ___________________________________________________________________________________\n");
    printf("\t|                                                                                    | \n");
    printf("\t|                                                                                    | \n");
    printf("\t|                     \e[4m Chapter Two: AUNT MARGE'S BIG MISTAKE \e[m                        | \n");
    printf("\t|                                                                                    | \n");
    printf("\t|                                                                                    | \n");
    printf("\t|                                                                                    | \n");
    printf("\t|            Harry walks down to breakfast the following morning to find his cousin  | \n");
    printf("\t|    his uncle Vernon, and his aunt Petunia  watching a television report about a    | \n");
    printf("\t|    dangerous escaped convict named Black. The Dursleys ignore Harry,as usual,      | \n");
    printf("\t|    and Vernon leaves to pick up his sister, Aunt Marge, at the train station,      | \n");
    printf("\t|    first warning Harry to pretend that he is normal. Harry is horrified at the     | \n");
    printf("\t|    news, as Aunt Marge does nothing during her visits but cuddle her dangerous     | \n");
    printf("\t|    and bdogsark insults at Harry. Harry suddenly has an idea, and he bargains with | \n");
    printf("\t|   Vernon that he will act normal and pretend he attends school at a center for     | \n");
    printf("\t|    incurably criminal boys, if afterwards Vernon will sign his Hogsmeade form.     | \n");
    printf("\t|    Vernon is not pleased, but he agrees. Aunt Marge arrives, roaring praise at     | \n");
    printf("\t|  Dudley, sharing her tea with her dog, Ripper, and asking Harry whether he is      | \n");
    printf("\t|    caned enough at his school. Harry answers the questions as carefully and        | \n");
    printf("\t|   as he can, but grows increasingly angry as Aunt Marge criticizes Harry's parents | \n");
    printf("\t|    saying of his mother,if there is something wrong with the bitch, there'll be    | \n");
    printf("\t|    something wrong with the pup.                                                   | \n");
    printf("\t|                                                                                    | \n");
    printf("\t|                                                                                    | \n");
    printf("\t|____________________________________________________________________________________| \n");
    printf("\t|                                                                                    | \n");
    printf("\t|                           Enter 'n' to go for next topic :                         | \n");
    printf("\t|                           Enter 'p' to go for previous topic :                     | \n");
    printf("\t|                           Enter 'i' to go at Index :                               | \n");
    printf("\t|____________________________________________________________________________________| \n\n");

    char next;
    getchar();
     topic3_2 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_3_3();
    }
    else if (next == 'p')
    {
        topic_3_1();
    }
    else if (next == 'i')
    {
        index3();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto  topic3_2;
    }
}
void topic_3_3()
{
    printf("\n\n\n\t ________________________________________________________________________________________\n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                           \e[4m Chapter Three : THE KNIGHT BUS \e[m                            | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                   Harry leaves the Dursleys and is not sure what to do next. He is    | \n");
    printf("\t|     certain that he will be expelled from Hogwarts for having practiced magic outside | \n");
    printf("\t|     of school, and so he considers flying on his brookstick to London, where he could | \n");
    printf("\t|     live as a wizard outcast. He feels himself being watched and he is alarmed        | \n");
    printf("\t|     to see a large outline of a dark creature staring at him. He falls into the       | \n");
    printf("\t|     gutter, and is suddenly rescued by the Knight Bus, a hitchhiking service          | \n");
    printf("\t|     for wizards in need. Harry boards the bus after some questioning from the         | \n");
    printf("\t|     nosey teenage conductor, Stan Shunpike, during which Harry gives a false name,    | \n");
    printf("\t|     obstacles jump out of its way. During the ride, Harry overhears a conversation    |\n");
    printf("\t|      trunk. They manage to escape out the window,but without Hedwig,who screeches     | \n");
    printf("\t|      between Stan and the driver, Ernie Prang, discussing the escape of Sirius Black, | \n");
    printf("\t|     and Harry learns that Black was a follower of Voldemort. Black spent twelve       | \n");
    printf("\t|     years in Azkaban, the wizard prison, after murdering thirteen people              | \n");
    printf("\t|     with a single curse.                                                              | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|_______________________________________________________________________________________| \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                           Enter 'n' to go for next topic :                            | \n");
    printf("\t|                           Enter 'p' to go for previous topic :                        | \n");
    printf("\t|                           Enter 'i' to go at Index :                                  | \n");
    printf("\t|_______________________________________________________________________________________| \n\n");

    char next;
    getchar();
     topic3_3 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_3_4();
    }
    else if (next == 'p')
    {
        topic_3_2();
    }
    else if (next == 'i')
    {
        index3();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto  topic3_3;
    }
}
void topic_3_4()
{

   printf("\n\n\n\t ________________________________________________________________________________________\n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                            \e[4m Chapter Four: THE LEAKY CAULDRON \e[m                         | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|        Harry spends the next weeks happily wandering through Diagon Alley. He         | \n");
    printf("\t|  finishes his homework, eats ice cream sundaes in sidewalk cafes, admires a Firebolt  | \n");
    printf("\t|  broomstick in the window of a Quidditch supplies store, and buys his books for school| \n");
    printf("\t|  During his visit to the bookstore, he is alarmed to catch sight of a large black     | \n");
    printf("\t|  dog on the cover of a book about death omens; the dog reminds him of the dark shape  | \n");
    printf("\t|  he saw when leaving the Dursleys. Around this time, Harry reunites with Ron and      | \n");
    printf("\t|  Hermione, and while discussing their summers and coming classes, they stop by a pet  | \n");
    printf("\t|  store. While Ron buys rat tonic for his old and rather sickly-looking rat, Scabbers, | \n");
    printf("\t|  a ginger cat leaps upon them and dashes after Scabbers. Ron is furious when Hermione | \n");
    printf("\t|  emerges from the pet store having purchased the cat, Crookshanks.The three friend    | \n");
    printf("\t|  join the Weasleys, where each of Ron's siblings is in his or her element. The twins, | \n");
    printf("\t|  Fred and George, are busy making everybody laugh. Percy is looking stiffly annoyed,  | \n");
    printf("\t|  and Ginny, the youngest Weasley and the only daughter, is looking on shyly and gigglY| \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|_______________________________________________________________________________________| \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                           Enter 'p' to go for previous topic :                        | \n");
    printf("\t|                           Enter 'i' to go at Index :                                  | \n");
    printf("\t|                           Enter 'h' to go at Home Page :                              | \n");
    printf("\t|_______________________________________________________________________________________| \n\n");

    char next;
    getchar();
     topic3_4 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'p')
    {
        topic_3_3();
    }
    else if (next == 'i')
    {
        index3();
    }
    else if (next == 'h')
    {
       home_page();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto  topic3_4;
    }
}



void book_4(){
    frontpage_4();
}
void frontpage_4()
{
    char next;

    getchar();
      printf("\n\n\n\t ______________________________________________________________________________\n");
    printf("\t|                                                                              | \n");
    printf("\t|______________________________________________________________________________| \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                  \e[7m--------------------------------------------\e[m                | \n");
    printf("\t|                  \e[7m   Harry Potter & The Goblet of Fire        \e[m                | \n");
    printf("\t|                  \e[7m--------------------------------------------\e[m                | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[4m A U T H O R -\e[m                               | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[3m J. K. Rowling \e[m                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 \e[2m Published Date - \e[m                           | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                 Date - 08 / 07 / 2000                        | \n");
    printf("\t|                                                                              | \n");
    printf("\t|                                                                              | \n");
    printf("\t|______________________________________________________________________________| \n");
    printf("\t|                                                                              | \n");
    printf("\t|                          Enter 'n' to go for next page :                     | \n");
    printf("\t|                          Enter 'h' to go for home page :                     | \n");
    printf("\t|______________________________________________________________________________| \n\n");
frontpage4:
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        // printf("Calling index 1\n");
        index4();
    }
    else if (next == 'h')
    {
            home_page(); 
    }
    else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        // getchar();
        goto frontpage4;
    }
}

void index4()
{
    int topic_no;

    printf("\n\n\n\t________________________________________________________________________________\n");
    printf("\t|                                                                              |\n ");
    printf("\t|______________________________________________________________________________|\n");
    printf("\t|                                                                              |\n ");
    printf("\t|                                                                              |\n ");
    printf("\t|\t \t\t        |  I N D E X  |\t\t\t\t       |\n");
    printf("\t|                                                                              |\n ");
    printf("\t|      ______________________________________________________________\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |   SR - NO.      |             Chapter No :                 |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       1 .       |               Chapter 1                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       2 .       |               Chapter 2                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       3 .       |               Chapter 3                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|      |                 |                                          |\t       |\n");
    printf("\t|      |       4 .       |               Chapter 4                  |\t       |\n");
    printf("\t|      |_________________|__________________________________________|\t       |\n");
    printf("\t|                                                                              |\n ");
    printf("\t|                                                                              |\n ");
    printf("\t|______________________________________________________________________________|\n");

    printf("\n\n\t\t\tChoose Topic You Want To Read :  ");
    index4 :
    printf("\t");
    scanf("%d", &topic_no);
    // printf("%d\n",topic_no);

    switch (topic_no)
    {
    case 1:
        topic_4_1();
        break;
    case 2:
        topic_4_2();
        break;
    case 3:
        topic_4_3();
        break;
    case 4:
        topic_4_4();
        break;

    default:
        printf("\t\t\tInvalid Inpunt !!!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        getchar();
        goto index4;

        break;
    }
}
void topic_4_1()
{
       printf("\n\n\n\t __________________________________________________________________________________\n");
    printf("\t|                                                                                  | \n");
    printf("\t|                      \e[4m Chapter One: he Riddle House \e[m                              | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                  The Riddle House stands on a hilltop in Little Hangleton.       | \n");
    printf("\t|     Much mystery has arisen around it. Fifty years ago, its inhabitants,         | \n");
    printf("\t|     the Riddle family, were killed in a most mysterious manner, leaving no       | \n");
    printf("\t|     signs of bodily harm, seeming almost as if they had been frightened          | \n");
    printf("\t|     to death. The villagers instantly suspected Frank Bryce, the Riddles'        | \n");
    printf("\t|     stiff and misanthropic gardener, and even after he was questioned and        | \n");
    printf("\t|     found innocent, the villagers still mistrusted him, and the village          | \n");
    printf("\t|     boys often bothered him.                                                     | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                       One night, fifty years later, the elderly Frank            | \n");
    printf("\t|    refilling his hot water bottle to ease the soreness of his joints,            | \n");
    printf("\t|    when he sees a bright light inside the Riddle House, and he immediately       | \n");
    printf("\t|     knows that the boys have set a fire. He limps over to the house,             | \n");
    printf("\t|    lets himself in with his spare key, walks up the dusty staircase, and         | \n");
    printf("\t|    stands in the hallway next to a room, where he overhears a conversation       | \n");
    printf("\t|    between two voices, one high pitched controlling one, another nervous         | \n");
    printf("\t|    submissive one.                                                               | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|__________________________________________________________________________________| \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                          Enter 'n' to go for next topic :                        | \n");
    printf("\t|                          Enter 'i' to go at Index :                              | \n");
    printf("\t|__________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic4_1 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_4_2();
    }
    else if (next == 'i')
    {
        index4();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto topic4_1;
    }
}

void topic_4_2()
{
   printf("\n\n\n\t ___________________________________________________________________________________\n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                        \e[4m Chapter Two: The Scar \e[m                                   | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|               Harry Potter, a fourteen-year-old wizard, wakes to feel the scar   | \n");
    printf("\t|   on this forehead throbbing in pain. He looks around his dark room in alarm,    | \n");
    printf("\t|   remembering that the last time his scar hurt him was when Lord Voldemort       | \n");
    printf("\t|    was nearby. The book proceeds to explain that Lord Voldemort was the leader   | \n");
    printf("\t|    of the dark side of wizardry, the murderer of Harry's parents, and reason     | \n");
    printf("\t|    why Harry even has the scar. After murdering Harry's parents, Lord Voldemort  | \n");
    printf("\t|    turned on Harry with the same curse, which miraculously rebounded and         | \n");
    printf("\t|   stripped Voldemort of his power, leaving Harry with a scar and no parents.     | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|              Harry paces the room, debating what to do. He cannot tell the       | \n");
    printf("\t|     Dursleys, his relatives with whom he lives, because they detest his          | \n");
    printf("\t|     presence as well as magic. He cannot tell his best friend Hermione,          | \n");
    printf("\t|     because she would find it alarming and want him to inform Dumbledore.        | \n");
    printf("\t|     He cannot tell his other best friend, Ron, because Ron would think it        | \n");
    printf("\t|      was a false alarm.                                                          | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                                                                                  | \n");
    printf("\t|__________________________________________________________________________________| \n");
    printf("\t|                                                                                  | \n");
    printf("\t|                          Enter 'n' to go for next topic :                        | \n");
    printf("\t|                          Enter 'p' to go for previous topic :                    | \n");
    printf("\t|                          Enter 'i' to go at Index :                              | \n");
    printf("\t|__________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic4_2 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_4_3();
    }
    else if (next == 'p')
    {
        topic_4_1();
    }
    else if (next == 'i')
    {
        index4();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto topic4_2;
    }
}
void topic_4_3()
{
    printf("\n\n\n\t ________________________________________________________________________________________\n");
    printf("\t|                                                                                       | \n");
    printf("\t|                         \e[4m Chapter Three : The Invitation \e[m                              | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                  When Harry arrives downstairs for breakfast, nobody blinks an eye.   | \n");
    printf("\t|    Uncle Vernon is buried behind the morning paper, and his son Dudley is sulking     | \n");
    printf("\t|    furiously about the grapefruit that Aunt Petunia is slicing into quarters.         | \n");
    printf("\t|    Dudley's school has written to the Dursleys, saying that they have no              | \n");
    printf("\t|     knickerbockers to accommodate his gigantic behind. Dursely has gone on a diet.    | \n");
    printf("\t|      Aunt Petunia has placed the whole family under Dudley's diet, which Harry        | \n");
    printf("\t|      has survived by asking his friends to send him food by owl.                      | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                 Harry bounces upstairs delightedly to find that his snowy owl,        | \n");
    printf("\t|      Hedwig, has returned from a night flight, and that another, smaller owl is       | \n");
    printf("\t|      zooming around the room. The smaller owl, Pig, is Ron Weasley's new owl,         | \n");
    printf("\t|      and it delivered a note from Ron saying for Harry to be ready to leave for the   | \n");
    printf("\t|      Quidditch Cup the following night at five. Harry writes back to Ron and sends    | \n");
    printf("\t|       his letter out to Sirius, feeling most optimistic about the end of the summer.  | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|_______________________________________________________________________________________| \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                           Enter 'n' to go for next topic :                            | \n");
    printf("\t|                           Enter 'p' to go for previous topic :                        | \n");
    printf("\t|                           Enter 'i' to go at Index :                                  | \n");
    printf("\t|_______________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic4_3 :
    printf("\t");
    scanf("%c", &next);

    if (next == 'n')
    {
        topic_4_4();
    }
    else if (next == 'p')
    {
        topic_4_2();
    }
    else if (next == 'i')
    {
        index4();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto topic4_3;
    }
}
void topic_4_4()
{

   printf("\n\n\n\t ________________________________________________________________________________________\n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                         \e[4m Chapter Four: Back to the Burrow \e[m                            | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                   Harry packs his trunks and is ready to leave by noon the            | \n");
    printf("\t|     next day; the Dursleys are all silent and terrified. Uncle Vernon makes           | \n");
    printf("\t|     several snide comments about how he hopes that the Weasleys will                  | \n");
    printf("\t|    think to dress properly. Five o'clock comes and the Weasleys have not yet arrived. | \n");
    printf("\t|     Finally, at a quarter past five, loud banging sounds come from inside the         | \n");
    printf("\t|     Dursleys' boarded-up fireplace, and Harry knows instantly that the Weasleys       | \n");
    printf("\t|     have tried to travel by Floo Powder through the fireplace network.                | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                  Fred and George head upstairs to retrieve Harry's trunk from         | \n");
    printf("\t|     his room, while Mr. Weasley bravely attempts conversation with the Dursleys,      | \n");
    printf("\t|     who are unresponsive. When the twins return with Harry's trunk, one of them       | \n");
    printf("\t|     drops a pocketful of sweets on his way back to the fireplace. Harry and           | \n");
    printf("\t|     Mr. Weasley  are the only two wizards remaining in the living room.               | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                                                                                       | \n");
    printf("\t|_______________________________________________________________________________________| \n");
    printf("\t|                                                                                       | \n");
    printf("\t|                           Enter 'p' to go for previous topic :                        | \n");
    printf("\t|                           Enter 'i' to go at Index :                                  | \n");
    printf("\t|                           Enter 'h' to go at Home Page :                              | \n");
    printf("\t|_______________________________________________________________________________________| \n\n");

    char next;
    getchar();
    topic4_4:
    printf("\t");
    scanf("%c", &next);

    if (next == 'p')
    {
        topic_4_3();
    }
    else if (next == 'i')
    {
        index4();
    }
    else if (next == 'h')
    {
       home_page();
    }
      else{
        printf("\n\t\tInvalid Input !!");
     printf("\n\t\t________________________________________________\n\n"); 
        printf("\n\t\tEnter valid Input :");

        goto topic4_4;
    }
}
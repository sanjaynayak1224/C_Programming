// Enter address(hous no,block,city,state) of 3 people.,2methods

//method 1:
#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAddress(struct address adds[3]);
int main()
{
    struct address adds[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter The Info For Person %d:", (i + 1));
        scanf("%d", &adds[i].houseNo);
        scanf("%d", &adds[i].block);
        scanf("%s", &adds[i].city);
        scanf("%s", &adds[i].state);
        printf("\n");
    }

    printAddress(adds);
}

void printAddress(struct address adds[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("The Info For Person %d:", (i + 1));
        printf("\n");
        printf("House No :%d\n", adds[i].houseNo);
        printf("Block :%d\n", adds[i].block);
        printf("city :%s\n", adds[i].city);
        printf("state :%s\n", adds[i].state);
        printf("\n");
    }
}

/*or method 2
#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAddress(struct address adds[3]);
int main()
{
    struct address adds[3];
    printf("Enter The Info For Person 1:");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);
    printf("\n");
    printf("Enter The Info For Peroson 2:");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);
    printf("\n");

    printf("Enter The Info For Peroson 3:");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", &adds[2].city);
    scanf("%s", &adds[2].state);
    printf("\n");
    printAddress(adds);
}

void printAddress(struct address adds[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("The Info For Person %d:",(i+1));
        printf("\n");
        printf("House No :%d\n", adds[i].houseNo);
        printf("Block :%d\n", adds[i].block);
        printf("city :%s\n", adds[i].city);
        printf("state :%s\n", adds[i].state);
        printf("\n");
    }
}

*/

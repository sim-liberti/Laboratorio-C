#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char f_name[30];
    char l_name[30];
    char passed[3];
    int grade; // 18-30

    struct Student *next;
};

struct Student *createStudent(char f_name[30], char l_name[30], char passed[3], int grade){
    struct Student *s = (struct Student *) malloc(sizeof(struct Student));

    if (s != NULL){
        strcpy(s->f_name, f_name);
        strcpy(s->l_name, l_name);
        strcpy(s->passed, passed);
        s->grade = grade;

        s->next = NULL;
    }

    return s;
}

struct Student *addStudent(struct Student *head, char f_name[30], char l_name[30], char passed[3], int grade){
    struct Student *s = createStudent(f_name, l_name, passed, grade);

    if (s != NULL){
        s->next = head;
    }

    return s;
}

struct Student *createList(){
    struct Student *head = NULL;
    char f_name[30];
    char l_name[30];
    char passed[3];
    int grade; // 18-30

    int flag = 0;

    do {
        printf("First name (type END to exit): ");
        scanf("%s", &f_name);
        if (strcmp(f_name, "END") == 0)
            flag = 1;
        else{
            printf("Last name: ");
            scanf("%s", &l_name);
            printf("Passed (yes/no)? ");
            scanf("%s", &passed);
            if (strcmp(passed, "yes") == 0){
                do {
                    printf("Grade (18-30): ");
                    scanf("%d", &grade);
                    if (grade < 18 || grade > 30)
                        printf("Grade not valid. \n");
                } while(grade < 18 || grade > 30);
            }
            else grade = 0;

            struct Student *s = addStudent(head, f_name, l_name, passed, grade);
            if (s != NULL)
                head = s;
        }
    } while(flag == 0);

    return head;
}

void calculatePercentage(struct Student *head){
    struct Student *h = head;

    int total=0, passed=0, failed=0;
    int p_passed, p_failed; // Percentage values

    while (h != NULL){
        if (h->grade != 0)
            passed++;
        else
            failed++;

        total++;

        printf("\nCurrent passed: %d", passed);
        printf("\nCurrent failed: %d", failed);
        printf("\nCurrent total: %d\n", total);
        h = h->next;
    }

    printf("\nPercentages: \n");
    printf("Passed: %d%%\n", (passed / total) * 100);
    printf("Failed: %d%%",   (failed / total) * 100);
}

int main(){
    struct Student *head = NULL;

    head = createList();
    calculatePercentage(head);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {

    struct auteur {
        char *nom;
        char *nationalite;
        int AN;
    };

    struct livre {
        char *titre;
        int nbrPages;
        float prix;
        struct auteur author; // Nested Structure
    };


    void livreInfo(struct livre book){
        printf("Auteur: %s\n",book.author.nom);
        printf("Nationalite: %s\n",book.author.nationalite);
        printf("Annee Naissance: %d\n",book.author.AN);
        printf("Titre: %s\n",book.titre);
        printf("Pages: %d\n",book.nbrPages);
        printf("Prix: %.2f\n",book.prix);
        printf("--------------------------\n");
    }

    // struct livre antigone = {"Antigone",122,5.4};

    // printf("Le prix du livre est %s",antigone.titre);

    struct livre livre1 = {"The murder room", 541, 10, {"P.D James","Anglais",1920} };
    struct livre livre2 = {"Antigone", 122, 5.4, {"Jean ANOUILH","Francais",1910} };
    struct livre livre3 = {"Elsudfah", 300, 15, {"Youssef BOUALI","Moroccan",2002} };


        // printf("Auteur: %s\n",livre1.author.nom);
        // printf("Nationalite: %s\n",livre1.author.nationalite);
        // printf("Annee Naissance: %d\n",livre1.author.AN);
        // printf("Titre: %s\n",livre1.titre);
        // printf("Pages: %d\n",livre1.nbrPages);
        // printf("Prix: %.2f euror\n",livre1.prix);

    livreInfo(livre1);
    livreInfo(livre2);
    livreInfo(livre3);



    struct stagiaire {
        int num;
        char nom[30];
        char *nem;
    }s1={1,"Youssef","h"},s2;

    s2.num=2;
    strcpy(s2.nom,"Youssef");
    s2.nem="hh";

    struct stagiaire s3={3,"Youssef","hhh"};



    struct stagiaire {
        int num;
        char nom[30];
    };

    struct stagiaire stagiaires[3];
    int i;
    for(i=0;i<3;i++){
        printf("Entrer le num d'inscription:\t");
        scanf("%d", &stagiaires[i].num);
        printf("Entrer le nom:\t");
        scanf("%s" ,&stagiaires[i].nom);
    }

    printf("\nLa liste des stagiaires");
    printf("\n-------------------------\n");

    for(i=0;i<3;i++){
        printf("N : %4d | Nom: %s\n", stagiaires[i].num, stagiaires[i].nom);
    }



    typedef struct stagiaire {
        char *nom;
        int age;
    }stgr;

    struct stagiaire stagiaire1 = {"Youssef", 19};

    stgr stagiaire2;
    stagiaire2.nom = "Ahmed";
    stagiaire2.age = 23;

    printf("%s / %d \n", stagiaire1.nom, stagiaire1.age);
    printf("%s / %d", stagiaire2.nom, stagiaire2.age);



    typedef struct {
        char *name;
        int age;
        char gender;
    } student;

    student *youssefPtr, youssef;


    youssefPtr = &youssef;

    (*youssefPtr).name = "Youssef";
    youssefPtr->age = 19;
    youssef.gender = 'M';

    printf("name:%s \nage:%d \ngender:%c", (*youssefPtr).name, youssefPtr->age, youssef.gender);



    typedef struct node {
        int data; //store data
        struct node *next; //store memory address of next node
    } nodes;

    struct node *head = NULL;
    nodes *second = NULL;
    struct node *third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (nodes*)malloc(sizeof(nodes));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = NULL;

    third->data = 3;
    third->next = NULL;

    void printLists(nodes *n){
        while(n != NULL){
            printf(" %d ", n->data);
            n = n->next;
        }
    }

    printLists(head);



    union result {
        int score;
        char mark;
    };

    union result note;

    note.mark = 'D';
    note.score = 70;

    printf("Result: %d \n", note.score);
    printf("Result: %c \n", note.mark);
	
	
    return 0;
}
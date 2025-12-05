#include <stdio.h>
#include <string.h>
#include "challenge.h"
#include "scoring.h"

static Challenge challenges[MAX_CHALLENGE];
static int challenge_count = 0;

Challenge* create_challenge(const char* name, const char* difficulty, const char* description){
    if (challenge_count >= MAX_CHALLENGE) {
        printf("Erreur: Nombre maximum de challenges atteint (%d)!\n", MAX_CHALLENGE);
        return NULL;
    }
    if (name == NULL || difficulty == NULL || description == NULL) {
        printf("Erreur: Parametres NULL!\n");
        return NULL;
    }
    Challenge* c = &challenges[challenge_count];
    strncpy(c->name, name, MAX_CHALLENGE - 1);
    c->name[MAX_CHALLENGE - 1] = '\0';
    strncpy(c->description, description, MAX_DESCRIPTION - 1);
    c->description[MAX_DESCRIPTION - 1] = '\0';
    if (strcmp(difficulty, "EASY") == 0 || strcmp(difficulty, "easy") == 0) {
        c->difficulty = EASY;
    } else if (strcmp(difficulty, "MEDIUM") == 0 || strcmp(difficulty, "medium") == 0) {
        c->difficulty = MEDIUM;
    } else if (strcmp(difficulty, "HARD") == 0 || strcmp(difficulty, "hard") == 0) {
        c->difficulty = HARD;
    } else {
        printf("Avertissement: Difficulte '%s' inconnue, utilisation de MEDIUM par defaut\n", difficulty);
        c->difficulty = MEDIUM;  // Default to MEDIUM if invalid
    }
    for (int i = 0; i < MAX_TEST_CASE; i++) {
        c->test_case[i].input[0] = '\0';
        c->test_case[i].expected[0] = '\0';
    }
    challenge_count++;
    return c;
}
Challenge* add_testcase(Challenge* c, const char* input, const char* expected){
    if (c == NULL || input == NULL || expected == NULL) {
        printf("Erreur: Parametres NULL!\n");
        return NULL;
    }
    for (int i = 0; i < MAX_TEST_CASE; i++) {
        if (c->test_case[i].input[0] == '\0' && c->test_case[i].expected[0] == '\0') {
            strncpy(c->test_case[i].input, input, MAX_TEST_INPUT - 1);
            c->test_case[i].input[MAX_TEST_INPUT - 1] = '\0';
            strncpy(c->test_case[i].expected, expected, MAX_TEST_OUTPUT - 1);
            c->test_case[i].expected[MAX_TEST_OUTPUT - 1] = '\0';
            return c;
        }
    }
    printf("Erreur: Nombre maximum de cas de test atteint (%d)!\n", MAX_TEST_CASE);
    return NULL;
}
Challenge* show_challenge(const Challenge* c) {
    if (c == NULL) {
        printf("Erreur: Challenge NULL!\n");
        return NULL;
    }
    
    printf("\n");
    printf("╔════════════════════════════════════════════════════════════════╗\n");
    printf("║                      CHALLENGE                                 ║\n");
    printf("╚════════════════════════════════════════════════════════════════╝\n");
    printf("\n");
    
    printf("📌 Nom: %s\n", c->name);
    printf("\n");
    
    printf("⭐ Difficulte: ");
    switch (c->difficulty) {
        case EASY:
            printf("FACILE");
            break;
        case MEDIUM:
            printf("MOYEN");
            break;
        case HARD:
            printf("DIFFICILE");
            break;
        default:
            printf("INCONNU");
    }
    printf(" (%d points)\n", challenge_difficulty_points((Challenge*)c));
    printf("\n");
    
    printf("📝 Description:\n");
    printf("────────────────────────────────────────────────────────────────\n");
    printf("%s\n", c->description);
    printf("────────────────────────────────────────────────────────────────\n");
    printf("\n");
    
    int test_count = 0;
    for (int i = 0; i < MAX_TEST_CASE; i++) {
        if (c->test_case[i].input[0] != '\0') {
            test_count++;
        }
    }
    
    printf("🧪 Cas de test: %d\n", test_count);
    printf("────────────────────────────────────────────────────────────────\n");
    
    if (test_count == 0) {
        printf("  Aucun cas de test defini.\n");
    } else {
        for (int i = 0; i < MAX_TEST_CASE; i++) {
            if (c->test_case[i].input[0] != '\0') {
                printf("\n  Test %d:\n", i + 1);
                printf("    Entree:   %s\n", c->test_case[i].input);
                printf("    Attendu:  %s\n", c->test_case[i].expected);
            }
        }
    }
    
    printf("\n");
    printf("════════════════════════════════════════════════════════════════\n");
    printf("\n");
    
    return (Challenge*)c;
}
Challenge* challenge_get_by_number(int n){
    if (n < 0 || n >= challenge_count) {
        printf("Erreur: Index %d hors limites (0-%d)!\n", n, challenge_count - 1);
        return NULL;
    }
    return &challenges[n];
}
int challenge_difficulty_points(Challenge* c){
    if (c == NULL) {
        printf("Erreur: Challenge NULL!\n");
        return 0;
    }
    switch (c->difficulty) {
        case EASY:
            return 100;
        case MEDIUM:
            return 150;
        case HARD:
            return 200;
        default:
            return 100;
    }
}
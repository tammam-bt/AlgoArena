#ifndef CHALLENGE_H
#define CHALLENGE_H

//Constants
#define MAX_CHALLENGE 5
#define MAX_NAME 100
#define MAX_DESCRIPTION 500
#define MAX_TEST_OUTPUT 100
#define MAX_TEST_INPUT 100
#define MAX_TEST_CASE 10

typedef enum{
    EASY,
    MEDIUM,
    HARD
} Difficulty;

typedef struct {
    char input[MAX_TEST_INPUT];
    char expected[MAX_TEST_OUTPUT];
} TestCase;

typedef struct {
    char name[MAX_NAME];
    char description[MAX_DESCRIPTION];
    Difficulty difficulty;
    TestCase test_case[MAX_TEST_CASE];
} Challenge;

Challenge* create_challenge(const char* name, const char* difficulty, const char* description);
Challenge* add_testcase(Challenge* c, const char* input, const char* expected);
Challenge* show_challenge(const Challenge* c);
Challenge* challenge_get_by_number(int n);
int challenge_difficulty_points(Challenge* c);

#endif
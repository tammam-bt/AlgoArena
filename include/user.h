#ifndef USER_H
#define USER_H

//Constants
#define MAX_USERS 100
#define MAX_USERNAME 30
#define CHALLENGE_COUNT 4

#include <stdbool.h>

//User structure
typedef struct {
    char username[MAX_USERNAME];
    int total_points;
    int number_of_challenges_completed;
    bool challenges[CHALLENGE_COUNT];
    int attempts[CHALLENGE_COUNT];
    bool is_logged_in;
} User;

//User functions

//User object management
User* user_create(const char* username);
User* user_login(const char* username);
User* user_logout(User* user);
User* user_save_to_file(const User* user);
User* user_load_from_file(const char* username);

//User data retrieval and modification
int user_points(const User* user);
int user_number_of_challenges(const User* user);
User* user_add_points(User* user, const int points);
User* user_add_challenge_completed(User* user, const int n);



#endif





#ifndef USER_H
#define USER_H

//Constants
#define MAX_USERS 100
#define MAX_USERNAME 30

typedef struct {
    char username[MAX_USERNAME];
    int total_points;
    int number_of_challenges_completed;
    bool is_logged_in;
} User;


User* user_create(const char* username);
User* user_login(const char* username);
void user_logout(User* user);
int user_points(const User* user);
int user_number_of_challenges(const User* user);
void user_add_points(User* user, const int points);
void user_add_challenge_completed(User* user);
void user_save_to_file(const User* user);
User* user_load_from_file(const char* username);


#endif





#include "user.h"
#include "challenge.h"
#include <stdio.h>
#include <stdlib.h>

User* user_create(const char* username) {
    User* new_user = user_load_from_file(username);
    if (new_user != NULL) {
        return new_user; // User already exists, return loaded user
    } else {
        new_user = (User*)malloc(sizeof(User));
        if (new_user == NULL) {
            return NULL; // Memory allocation failed
        }
        snprintf(new_user->username, MAX_USERNAME, "%s", username);
        new_user->total_points = 0;
        new_user->number_of_challenges_completed = 0;
        for (int i = 0; i < CHALLENGE_COUNT; i++) {
            new_user->challenges[i] = false;
        }
        new_user->is_logged_in = false;
        return new_user;
    }
}

User* user_login(const char* username) {
    User* user = user_load_from_file(username);
    if (user != NULL) {
        user->is_logged_in = true;
    } 
    return user;
}

User* user_logout(User* user) {
    if (user != NULL) {
        user->is_logged_in = false;
    }
    return user;
}

User* user_save_to_file(const User* user) {
    if (user == NULL) {
        return NULL;
    }
    char filename[MAX_USERNAME + 5];
    snprintf(filename, sizeof(filename), "%s.dat", user->username);
    FILE* file = fopen(filename, "wb");
    if (file == NULL) {
        return NULL; // File opening failed
    }
    fwrite(user, sizeof(User), 1, file);
    fclose(file);
    return (User*)user;
}

User* user_load_from_file(const char* username) {
    char filename[MAX_USERNAME + 5];
    snprintf(filename, sizeof(filename), "%s.dat", username);
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        return NULL; // File does not exist
    }
    User* user = (User*)malloc(sizeof(User));
    if (user == NULL) {
        fclose(file);
        return NULL; // Memory allocation failed
    }
    fread(user, sizeof(User), 1, file);
    fclose(file);
    return user;
}



int user_points(const User* user) {
    if (user != NULL) {
        return user->total_points;
    }
    return -1; // Indicate error
}

int user_number_of_challenges(const User* user) {
    if (user != NULL) {
        return user->number_of_challenges_completed;
    }
    return -1; // Indicate error
}

User* user_add_points(User* user, const int points) {
    if (user != NULL && points > 0) {
        user->total_points += points;
    }
    return user;
}

// User* user_add_challenge_completed(User* user, const int n) {
//     Challenge* challenge = challenge_get_by_number(n);
//     if (user != NULL && n > 0 && n <= CHALLENGE_COUNT && !user->challenges[n-1]) {
//         user->challenges[n-1] = true;
//         user->number_of_challenges_completed += 1;
//         user = user_add_points(user, challenge_difficulty_points(challenge));
//     }
//     return user;
// }
    
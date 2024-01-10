#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to take input and return it as a string
char* take_input() {
    char input[100];
    fgets(input, 100, stdin);
    int len = strlen(input);
    if(input[len-1] == '\n') input[len-1] = '\0';
    char* return_str = (char*)malloc(len*sizeof(char));
    strcpy(return_str, input);
    return return_str;
}

// Function to analyze the user's mood and give advice accordingly
void analyze_mood(char* user_mood) {
    if(strstr(user_mood, "angry") || strstr(user_mood, "frustrated")) {
        printf("Try taking a walk outside. Sometimes, nature can be the best remedy.\n");
    } else if(strstr(user_mood, "sad") || strstr(user_mood, "upset")) {
        printf("Give yourself some time and space. A warm cup of tea might also help.\n");
    } else if(strstr(user_mood, "anxious") || strstr(user_mood, "stressed")) {
        printf("Find something that relaxes you. Listening to soothing music, meditating, or engaging in a hobby can be very effective.\n");
    } else if(strstr(user_mood, "happy") || strstr(user_mood, "ecstatic")) {
        printf("Keep it up! Staying positive can greatly impact your mental and physical health.\n");
    } else {
        printf("It seems like you are facing some issues. It is always important to speak with someone you trust.\n");
    }
}

// Function to give the user realistic advice
void give_advice(char* user_situation) {
    if(strstr(user_situation, "alone") || strstr(user_situation, "lonely")) {
        printf("Remember, you are not alone. Reach out to your friends and family, even if it's just for a quick chat.\n");
    } else if(strstr(user_situation, "breakup") || strstr(user_situation, "divorce")) {
        printf("Give yourself time and space. Focus on self-care and prioritize your mental and emotional well-being.\n");
    } else if(strstr(user_situation, "ill") || strstr(user_situation, "sick")) {
        printf("Stay hydrated and get enough rest. Make sure to consult a healthcare professional if your symptoms worsen.\n");
    } else if(strstr(user_situation, "depressed") || strstr(user_situation, "low self-esteem")) {
        printf("Consider seeking professional help from a therapist or counselor. They can provide guidance and support to help you improve your mental health.\n");
    } else {
        printf("We're here to listen. Whatever you're going through, remember that you are not alone.\n");
    }
}

int main() {
    char* user_mood = take_input();
    analyze_mood(user_mood);

    printf("Please share a brief description of your current situation: ");
    char* user_situation = take_input();
    give_advice(user_situation);

    free(user_mood);
    free(user_situation);
    return 0;
}

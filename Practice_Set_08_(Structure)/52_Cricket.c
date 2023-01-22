#include <stdio.h>
#include <string.h>

struct cricket {
    char player_name[50];
    char team_name[50];
    float batting_average;
};

int main() {
	
	printf("\tPlayer Details\n");
    printf("==========================================\n\n");
/*52. Define a structure called cricket that will describe the following information:
	Player name
	Team name
	Batting average
Using cricket, declare an array player with 50 elements and write a C program to read the
information about all the 50 players and print team wise list containing names of players
with their batting average.*/

    struct cricket player[50];
    int i;

    for (i = 0; i < 50; i++) {
        printf("Enter Player Name For Player %d: ",i+1);
        scanf("%s", player[i].player_name);
        printf("Enter Team Name For player %d: ",i+1);
        scanf("%s", player[i].team_name);
        printf("Enter Batting Average For Player %d: ",i+1);
        scanf("%f", &player[i].batting_average);
        printf("\n\n");
    }

    char current_team[50];
    for (i = 0; i < 50; i++) {
        if (strcmp(current_team, player[i].team_name) != 0) {
            strcpy(current_team, player[i].team_name);
            printf("\nTeam name: %s\n", current_team);
        }
        printf("Player Name: %s\n", player[i].player_name);
        printf("Batting Average: %.2f\n", player[i].batting_average);
    }
    return 0;
}


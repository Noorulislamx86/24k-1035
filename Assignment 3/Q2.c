#include <stdio.h>
#include <string.h>

struct Player {
    int ballscores[12];
    char name[50];
    int totalscore;
};

void playGame(struct Player players[], int i) {
    printf("\nEnter scores for %s:\n", players[i].name);
    players[i].totalscore = 0;

    for (int j= 0; j<12; j++) {
        int score;
        printf("Ball %d: ", j+ 1);
        scanf("%d", &score);

        if (score >= 0 && score <= 6) {
            players[i].ballscores[j] = score;
            players[i].totalscore += score;
        } else {
            players[i].ballscores[j] = 0; 
        }
    }
}

void findWinner(struct Player players[]) {
    printf("\nMatch Result:\n");
    printf("%s's Total Score: %d\n", players[0].name, players[0].totalscore);
    printf("%s's Total Score: %d\n", players[1].name, players[1].totalscore);

    if (players[0].totalscore > players[1].totalscore) {
        printf("Winner: %s\n", players[0].name);
    } else if (players[0].totalscore < players[1].totalscore) {
        printf("Winner: %s\n", players[1].name);
    } else {
        printf("It's a tie!\n");
    }
}

void displayMatchScoreboard(struct Player players[], int i) {
    printf("\nScoreboard for %s:\n", players[i].name);
    printf("Ball Scores: ");
    for (int j= 0; j<12; j++) {
        printf("%d ", players[i].ballscores[j]);
    }
    printf("\nTotal Score: %d\n", players[i].totalscore);
}

int main() {
    struct Player players[2];

    printf("Enter Player 1's Name: ");
    scanf(" %s", players[0].name);
    printf("Enter Player 2's Name: ");
    scanf(" %s", players[1].name);

    playGame(players, 0);
    playGame(players, 1);

    displayMatchScoreboard(players, 0);
    displayMatchScoreboard(players, 1);

    findWinner(players);

    return 0;
}

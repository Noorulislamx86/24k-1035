#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct player {
char name[20];
 char team[20];
};
struct bowl {
  char type[10];  
    char arm[5];    
    struct player ply;
};
struct bat {
 char type[10];  
      char handed[8]; 
    struct bowl ply2;
};
      void create_file() {
    FILE *player_file = fopen("players.dat", "wb");
    FILE *bowler_file = fopen("bowlers.dat", "wb");
    FILE *batter_file = fopen("batters.dat", "wb");
    if (player_file == NULL || bowler_file == NULL || batter_file == NULL) 
    {
        perror("Error opening file");
        exit(1);
    }
    fclose(player_file);
    fclose(bowler_file);
    fclose(batter_file);
    }
  void add_player(struct player p) {
    FILE *fp = fopen("players.dat", "ab");
    if (fp == NULL)   {
        perror("Error opening file");
        exit(1);
    }
    fwrite(&p, sizeof(struct player), 1, fp);
    fclose(fp);
}
void add_bowler(struct bowl b) {
    FILE *fp = fopen("bowlers.dat", "ab");
    if (fp == NULL) {
          perror("Error opening file");
          exit(1);
    }
       fwrite(&b, sizeof(struct bowl), 1, fp);
       fclose(fp);
}
void add_batter(struct bat b) {
    FILE *fp = fopen("batters.dat", "ab");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }
    fwrite(&b, sizeof(struct bat), 1, fp);
    fclose(fp);
}
void read_players() {
    FILE *fp = fopen("players.dat", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }
    struct player p;
    while (fread(&p, sizeof(struct player), 1, fp)) {
        printf("Player: %s, Team: %s\n", p.name, p.team);
        }
    fclose(fp);
        }
void read_bowlers() {
    FILE *fp = fopen("bowlers.dat", "rb");
    if (fp == NULL)
    {
        perror("Error opening file");
        exit(1);
    }
    struct bowl b;
    while (fread(&b, sizeof(struct bowl), 1, fp)) {
        printf("Bowler Type: %s, Arm: %s, Player: %s, Team: %s\n", b.type, b.arm, b.ply.name, b.ply.team);
    }
    fclose(fp);
}
void read_batters() {
    FILE *fp = fopen("batters.dat", "rb");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
        }

    struct bat b;
    while (fread(&b, sizeof(struct bat), 1, fp)) {
        printf("Batter Type: %s, Handed: %s, Bowler Type: %s, Bowler Arm: %s, Player: %s, Team: %s\n",
               b.type, b.handed, b.ply2.type, b.ply2.arm, b.ply2.ply.name, b.ply2.ply.team);
       }

    fclose(fp);
}
void update_player(int index, struct player new_player) {
    FILE *fp = fopen("players.dat", "r+b");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }
    fseek(fp, index * sizeof(struct player), SEEK_SET);
    fwrite(&new_player, sizeof(struct player), 1, fp);

    fclose(fp);
    }
  void update_bowler(int index, struct bowl new_bowler) {
    FILE *fp = fopen("bowlers.dat", "r+b");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }
    fseek(fp, index * sizeof(struct bowl), SEEK_SET);
    fwrite(&new_bowler, sizeof(struct bowl), 1, fp);
    fclose(fp);
    }
   void update_batter(int index, struct bat new_batter) {
    FILE *fp = fopen("batters.dat", "r+b");
    if (fp == NULL) {
        perror("Error opening file");
        exit(1);
    }

    fseek(fp, index * sizeof(struct bat), SEEK_SET);
    fwrite(&new_batter, sizeof(struct bat), 1, fp);

    fclose(fp);
 }
 void delete_player(int index) {
    FILE *temp_file = fopen("temp_players.dat", "wb");
    FILE *fp = fopen("players.dat", "rb");

    if (temp_file == NULL || fp == NULL) {
        perror("Error opening file");
        exit(1);
    }
    struct player p;
    int current_index = 0;
    while (fread(&p, sizeof(struct player), 1, fp)) {
        if (current_index != index) {
            fwrite(&p, sizeof(struct player), 1, temp_file);
        }
        current_index++;
    }
    fclose(fp);
    fclose(temp_file);

    remove("players.dat");
    rename("temp_players.dat", "players.dat");
}
void delete_bowler(int index) {
    FILE *temp_file = fopen("temp_bowlers.dat", "wb");
    FILE *fp = fopen("bowlers.dat", "rb");

    if (temp_file == NULL || fp == NULL) {
        perror("Error opening file");
        exit(1);
    }
    struct bowl b;
    int current_index = 0;
    while (fread(&b, sizeof(struct bowl), 1, fp)) {
        if (current_index != index) {
            fwrite(&b, sizeof(struct bowl), 1, temp_file);
        }
        current_index++;
    }

    fclose(fp);
    fclose(temp_file);

    remove("bowlers.dat");
    rename("temp_bowlers.dat", "bowlers.dat");
}
void delete_batter(int index) {
    FILE *temp_file = fopen("temp_batters.dat", "wb");
    FILE *fp = fopen("batters.dat", "rb");
    if (temp_file == NULL || fp == NULL) {
        perror("Error opening file");
        exit(1);
    }
    struct bat b;
    int current_index = 0;
    while (fread(&b, sizeof(struct bat), 1, fp)) {
        if (current_index != index) {
            fwrite(&b, sizeof(struct bat), 1, temp_file);
        }
        current_index++;
    }
    fclose(fp);
    fclose(temp_file);
    remove("batters.dat");
    rename("temp_batters.dat", "batters.dat");
    }
int main() {
    create_file();
    struct player p1 = {"Virat Kohli", "India"};
    struct player p2 = {"Steve Smith", "Australia"}; 
    struct bowl b1 = {"Fast", "Right", {"James Anderson", "England"}};
    struct bowl b2 = {"Pacer", "Left", {"Mitchell Starc", "Australia"}};
    struct bat bat1 = {"Top Order", "Right", {"Spinner", "Right", {"AB de Villiers", "South Africa"}}};
      add_player(p1);
      add_player(p2);
     add_bowler(b1);
     add_bowler(b2);
    add_batter(bat1);
    printf("Players:\n");
    read_players();
    printf("\nBowlers:\n");
    read_bowlers();
    printf("\nBatters:\n");
    read_batters();
     p1 = (struct player){"Rohit Sharma", "India"};
    update_player(0, p1);
    delete_bowler(1);
    
    printf("\nUpdated Players:\n");
    read_players();

    printf("\nUpdated Bowlers:\n");
    read_bowlers();
    return 0;
}

#include <stdio.h>

int main() {
    int N; // Number of rounds
    scanf("%d", &N);

    int score1 = 0, score2 = 0; // Cumulative scores
    int maxLead = 0; // Maximum lead encountered
    int winner = 0; // Player with the maximum lead

    for (int i = 0; i < N; i++) {
        int Si, Ti; // Scores for Player 1 and Player 2 in round i
        scanf("%d %d", &Si, &Ti);

        // Update cumulative scores
        score1 += Si;
        score2 += Ti;

        // Calculate current lead and determine the leader
        int currentLead, currentLeader;
        if (score1 > score2) {
            currentLead = score1 - score2;
            currentLeader = 1;
        } else {
            currentLead = score2 - score1;
            currentLeader = 2;
        }

        // Check if this lead is the maximum lead encountered
        if (currentLead > maxLead) {
            maxLead = currentLead;
            winner = currentLeader;
        }
    }

    // Output the winner and the maximum lead
    printf("%d %d\n", winner, maxLead);

    return 0;
}

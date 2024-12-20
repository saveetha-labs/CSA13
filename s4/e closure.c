#include <stdio.h>
#define MAX_STATES 100
int epsilonTransitions[MAX_STATES][MAX_STATES]; 
int numStates;
void findEpsilonClosure(int state, int closure[]) {
    closure[state] = 1;
    for (int i = 0; i < numStates; i++) {
        if (epsilonTransitions[state][i] && !closure[i]) {
            findEpsilonClosure(i, closure);
        }
    }
}
int main() {
    printf("Enter the number of states in the NFA: ");
    scanf("%d", &numStates);
    for (int i = 0; i < numStates; i++) {
        for (int j = 0; j < numStates; j++) {
            epsilonTransitions[i][j] = 0;
        }
    }

    printf("Enter epsilon transitions (state1 state2) (-1 -1 to stop):\n");
    while (1) {
        int from, to;
        scanf("%d %d", &from, &to);
        if (from == -1 && to == -1) break;
        epsilonTransitions[from][to] = 1;
    }
    for (int state = 0; state < numStates; state++) {
        int closure[MAX_STATES] = {0};
        findEpsilonClosure(state, closure);

        printf("Epsilon-closure of state %d: { ", state);
        for (int i = 0; i < numStates; i++) {
            if (closure[i]) {
                printf("%d ", i);
            }
        }
        printf("}\n");
    }
    return 0;
}

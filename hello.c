/*#include <stdio.h>%
int main(){
    int side;
    printf("enter side");
    scanf("%d",&side);
    printf("area is:%d",side*side);
    return 0;
}*/
#include <stdio.h>

int main() {
    int marks[5];
    int i, total = 0;
    float average;
    int valid = 1;

    // Reading 5 space-separated marks
    for (i = 0; i <5 ; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            valid = 0; // Invalid mark found
        }
    }

    if (!valid) {
        printf("Invalid Score\n");
    } else {
        // Calculate total and average
        for (i = 0; i < 5 ; i++) {
            total += marks[i];
        }
        average = total / 5.0;

        // Determine grade
        if (average >= 90) {
            printf("A\n");
        } else if (average >= 80 && average < 90) {
            printf("B\n");
        } else if (average >= 60 && average < 80) {
            printf("C\n");
        } else {
            printf("D\n");
        }
    }

    return 0;
}


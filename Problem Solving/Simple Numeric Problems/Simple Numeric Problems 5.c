/* declares the class awarded for a given percentage of marks, where the marks:
<40% = Failed,
40% to <60% = Second class,
60% to <70%=First class,
>= 70% = Distinction.  */

#include <stdio.h>
int main() {
    float percentage;

    // Read percentage from standard input
    printf("Enter percentage of marks : ");
    scanf("%f", &percentage);
	
    // Determine the class based on percentage
    if(percentage > 100 || percentage < 0)
		printf("You have entered wrong percentage\n");
	else if (percentage < 40) {
        printf("Failed\n");
    } else if (percentage >= 40 && percentage < 60) {
        printf("Second Class\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("First Class\n");
    } else { 
		printf("Distinction\n");   
    }

    return 0;
}
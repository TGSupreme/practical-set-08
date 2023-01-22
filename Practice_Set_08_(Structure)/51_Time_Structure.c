#include <stdio.h>

struct time_struct {
    int hour;
    int minute;
    int second;
};

int main() {
	
/*51. Define structure data type called time_struct containing three member�s integer hour,
integer minute and integer second. Develop a program that would assign values to the
individual number and display the time in the following format: 16: 40:51*/

	printf("\tTime\n");
    printf("====================");

    struct time_struct current_time;
    current_time.hour = 16;
    current_time.minute = 40;
    current_time.second = 51;

    printf("\n\nCurrent Time:\n");
    printf("%02d : %02d : %02d\n", current_time.hour, current_time.minute, current_time.second);

    return 0;
}


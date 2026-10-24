// Solve problem 9 for time using typedef  keyword

#include <stdio.h>

typedef struct Date {
    int dd;
    int mm;
    int yyyy;
} Date;

int compareDates(Date d1, Date d2) {
    if (d1.yyyy > d2.yyyy) {
        return 1;
    } else if (d1.yyyy < d2.yyyy) {
        return -1;
    } else {
        if (d1.mm > d2.mm) {
            return 1;
        } else if (d1.mm < d2.mm) {
            return -1;
        } else {
            if (d1.dd > d2.dd) {
                return 1;
            } else if (d1.dd < d2.dd) {
                return -1;
            } else {
                return 0;
            }
        }
    }
}

int main(){
    Date date1 = {15, 8, 2021}; // Initialize the first date
    Date date2 = {10, 12, 2020}; // Initialize the second date
    printf("%d", compareDates(date1, date2)); // Call the compareDates function and print the result
    return 0;
}
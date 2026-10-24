// Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>

struct Date {
    int dd;
    int mm;
    int yyyy;
};

int compareDates(struct Date d1, struct Date d2) {
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
    struct Date date1 = {15, 8, 2021}; // Initialize the first date
    struct Date date2 = {10, 12, 2020}; // Initialize the second date
    printf("%d", compareDates(date1, date2)); // Call the compareDates function and print the result
    return 0;
}
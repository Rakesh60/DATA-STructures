//Calculate the Age
#include <stdio.h>
#include <time.h>

/* checks whether the given input is leap year feb or not */
int leapYearFeb(int year, int mon)
{
    int flag = 0;
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            if (mon == 2) {
                flag = 1;
            }
        }
    } else if (year % 4 == 0) {
        if (mon == 2) {
            flag = 1;
        }
    }
    return (flag);
}

int main()
{
    /* days in months */
    int daysInMon[] = { 31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31 };
    int days, month, year;
    char dob[100];
    time_t ts;
    struct tm* ct;

    /* get the date of birth from the user */
    printf("Enter your days of birth:");
    fgets(dob, 100, stdin);
    sscanf(dob, "%d/%d/%d", &days, &month, &year);
    ts = time(NULL);
    ct = localtime(&ts);
    /* scan the year, month and year from the input string */
    printf("Current Date: %d/%d/%d\n",
        ct->tm_mday, ct->tm_mon + 1, ct->tm_year + 1900);

    days = daysInMon[month - 1] - days + 1;

    /* checking whether month is leap year feb - 29 days*/
    if (leapYearFeb(year, month)) {
        days = days + 1;
    }

    /* calculating the no of days, years and months */
    days = days + ct->tm_mday;
    month = (12 - month) + (ct->tm_mon);
    year = (ct->tm_year + 1900) - year - 1;

    /* checking for leap year feb - 29 days */
    if (leapYearFeb((ct->tm_year + 1900), (ct->tm_mon + 1))) {
        if (days >= (daysInMon[ct->tm_mon] + 1)) {
            days = days - (daysInMon[ct->tm_mon] + 1);
            month = month + 1;
        }
    } else if (days >= daysInMon[ct->tm_mon]) {
        days = days - (daysInMon[ct->tm_mon]);
        month = month + 1;
    }

    if (month >= 12) {
        year = year + 1;
        month = month - 12;
    }

    /* print the result */
    printf("Age: %d year %d months and %d days\n", year, month, days);
    return 0;
}

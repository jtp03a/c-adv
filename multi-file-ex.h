//Example header file
//Header file for working with dates

#include <stdbool.h>

enum kMonth { January = 1, February, March, April, May, June, July, August, September, October, November, December };
enum kDay { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday };

struct date {
  enum kMonth month;
  enum kDay day;
  int year;
};

//Date type
typedef struct date Date;

//Functions to work with dates
Date dateUpdate (Date today);
int numberOfDays (Date d);
bool isLeapYear(Date d);

//Macro to set a date in a structure
#define setDate(s,mm,dd,yy) s = (Date) {mm, dd, yy}

//External variable ref
extern Date todaysDate;

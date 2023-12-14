#include <iostream>
using namespace std;

char findGrade(float score) {
    if (score > 90) {
        return 'A';
    } else if (score > 75 && score < 90 ) {
        return 'B';
    } else if (score > 60 && score < 75) {
        return 'C';
    } else if (score > 45 && score <= 60) {
         return 'D';
    } else {
        return 'F';
    }
}


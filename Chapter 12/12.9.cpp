#include <iostream>

using namespace std;

public class FileNameComparator {

int compare(String s1, String s2) {
int i1 = -1;
for(int i = 0; i < s1.length(); ++i) {
    if(Character.isDigit(s1.charAt(i))) {
        i1 = i;
         break;
     }
}
int i2 = -1;
for(int i = 0; i < s2.length(); ++i) {
    if(Character.isDigit(s2.charAt(i))) {
        i2 = i;
        break;
    }
}
if(i2 == -1 || i1 == -1) {
     return s1.compareTo(s2);
} else {
     int cmp = s1.substring(0, i1).compareTo(s2.substring(0, i2));
     if(cmp == 0) {
         return s1.substring(i1).compareTo(s2.substring(i2));
     } 
    else {
        return cmp;
            }
        }
    }
}
//https://www.thehuxley.com/problem/4415?quizId=9155

#include <stdio.h>
int main () {
    int x, y, z; 
    scanf("%d %d %d", &x, &y, &z);
    
    //octante 1
    if (x > 0 && y > 0 && z > 0) {
        if (x < y && x < z) {
            printf("2");
        }
        else if (y < x && y < z) {
            printf("4");
        }
        else if (z < x && z < y) {
            printf("5");
        }
    }
      
    //octante 2
    else if (x < 0 && y > 0 && z > 0) {
        x = x * -1;
        if (x < y && x < z) { 
            printf("1");
        }
        else if (y < x && y < z) { 
            printf("3");
        }
        else if (z < x && z < y) { 
            printf("6");
        }
    }
      
     //octante 3
    else if (x < 0 && y < 0 && z > 0) {
        x = x * -1; y = y * -1;
        if (x < y && x < z) { 
            printf("4");
        }
        else if (y < x && y < z) { 
            printf("2");
        }
        else if (z < x && z < y) { 
            printf("7");
        }
    }
      
     //octante 4
    else if (x > 0 && y < 0 && z > 0) {
        y = y * -1;
        if (x < y && x < z) { 
            printf("3");
        }
        else if (y < x && y < z) { 
            printf("1");
        }
        else if (z < x && z < y) { 
            printf("8");
        }
    }
      
    //octante 5
    else if (x > 0 && y > 0 && z < 0) {
        z = z * -1;
        if (x < y && x < z) { 
            printf("6");
        }
        else if (y < x && y < z) { 
            printf("8");
        }
        else if (z < x && z < y) { 
            printf("1");
        }
    }
      
    //octante 6
    else if (x < 0 && y > 0 && z < 0) {
        z = z * -1; x = x * -1;
        if (x < y && x < z) { 
            printf("5");
        }
        else if (y < x && y < z) {  
            printf("7");
        }
        else if (z < x && z < y) { 
            printf("2");
        }
    }
      
     //octante 7
    else if (x < 0 && y < 0 && z < 0) {
        z = z * -1; x = x * -1; y = y * -1;
        if (x < y && x < z) { 
            printf("8");
        }
        else if (y < x && y < z) {  
            printf("6");
        }
        else if (z < x && z < y) { 
            printf("3");
        }
    }
      
    //octante 8
    else if (x > 0 && y < 0 && z < 0) {
        z = z * -1; y = y * -1;
        if (x < y && x < z) { 
            printf("7");
        }
        else if (y < x && y < z) { 
            printf("5");
        }
        else if (z < x && z < y) { 
            printf("4");
        }
    }
    return 0;
}

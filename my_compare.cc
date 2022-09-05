#include "my_compare.h"
char is_equal(int a, int b){
    if(a == b)
        return 'O';
    else
        return 'X';
}
char is_big(int a, int b){
    if(a > b)
        return 'O';
    else
        return 'X';
}

#include <stdio.h>

int main(){
    int a = 10;
    int b = 0;
    //this is a comment
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    /*
    this
    is
    a
    comment
    */
    for (int i = 0; i < 8; i++)
    {
        b += arr[i];
    }
    return 0;
}
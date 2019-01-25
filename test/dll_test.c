#include<stdio.h>
#include"dll.h"

int main(){
    Dllist *testLink = dllist_create();
    dllist_push_front(testLink, "Hello");
    dllist_push_back(testLink, "World");
    printf("%s %s\n", testLink->head->data, testLink->tail->data);
    char* hello = dllist_read_index(testLink, 0);
    printf("%s\n", hello);
    char* world = dllist_read_index(testLink, 1);
    printf("%s\n", world);
    return 0;
}

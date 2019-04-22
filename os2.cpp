#include<stdio.h>
#include<conio.h>
int main(){

int i,j,key,lock,n,waiting[100];
do {

    waiting[i] = true;
    key = true;
    while (waiting[i] && key) 
	Swap(&key, &lock);
    j = (i + 1) % n;
    while (i != j && !waiting[j]) j = (i + 1) % n;
    
    if (i == j) lock = false;
    else waiting[j] = false;

} while (true);
}



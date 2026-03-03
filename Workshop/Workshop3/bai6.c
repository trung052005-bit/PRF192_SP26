#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void play_game() {
    int secret, guess;
    int count = 0;
    srand(time(NULL));          
    secret = rand() % 100 + 1;  
    while (count < 7) {
        printf("Nhap so ban doan (1-100): ");
        scanf("%d", &guess);
        if (guess < 0) {
            continue;   
        }
        count++;
        if (guess == secret) {
            printf("Ban doan dung!\n");
            break;      
        }
        else if (guess < secret) {
            printf("So ban doan nho hon.\n");
        }
        else {
            printf("So ban doan lon hon.\n");
        }
    }
    if (count == 7 && guess != secret) {
        printf("Ban da het luot. So dung la: %d\n", secret);
    }
}
int main() {
    play_game();
    return 0;
}
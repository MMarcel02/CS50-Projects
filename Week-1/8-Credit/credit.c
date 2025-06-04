#include <stdio.h>

long get_card_number();
int get_length(long num);
int luhn_algo(long num);
void check_card_type(long num, int length, int valid);

int main(void){
    long creditNumber = get_card_number();
    int length = get_length(creditNumber);
    int luhn_valid = luhn_algo(creditNumber);

    check_card_type(creditNumber, length, luhn_valid);
}

long get_card_number(){
    long number;
    printf("Enter a credit card number: ");
    scanf("%ld", &number);
    return number;
}

int get_length(long num){
    int length = 0;
    while (num >0){
        num /= 10;
        length++;
    }
    return length;
}

int luhn_algo(long num){
    int sum = 0;
    int digit;
    int isSecond = 0;
    
    while (num > 0){
        digit = num % 10;
        if (isSecond) {
            digit *= 2;
            sum += (digit/10) + (digit%10);
        } else {
            sum += digit;
        }
        num /= 10;
        isSecond = !isSecond;
    }
    return (sum % 10 == 0);
}

void check_card_type(long num, int length, int valid){
    if (!valid) {
        printf("Invalid\n");
        return;
    }

    //To get first two digits
    while (num >= 100) {
        num /= 10;
    }

    if ((length == 15) && (num == 34 || num == 37)) {
        printf("American Express\n");
    } else if ((length == 13 || length == 16) && (num/10 == 4)) {
        printf("Visa\n");
    } else if ((length == 16) && (num > 50 && num < 56)) {
        printf("Mastercard\n");
    } else {
        printf("Invalid\n");
    }
}
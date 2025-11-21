#include <stdio.h>
#include <string.h>

typedef struct {
    char productName[50];
    char reason[100];
    float amount;
} Request;

int main() {
    Request r;
    int choice;

    printf("===== RETURN / REFUND MANAGEMENT SYSTEM =====\n");
    printf("1. Return Product\n");
    printf("2. Refund Request\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();  // clear newline

    printf("\nEnter Product Name: ");
    fgets(r.productName, 50, stdin);

    printf("Enter Reason: ");
    fgets(r.reason, 100, stdin);

    printf("Enter Refund Amount: ");
    scanf("%f", &r.amount);

    printf("\n===== REQUEST SUMMARY =====\n");

    if (choice == 1) {
        printf("Request Type : Product Return\n");
    } else if (choice == 2) {
        printf("Request Type : Refund\n");
    } else {
        printf("Invalid option!\n");
        return 0;
    }

    printf("Product Name : %s", r.productName);
    printf("Reason       : %s", r.reason);
    printf("Amount       : %.2f\n", r.amount);

    printf("\nYour request has been submitted successfully!\n");

    return 0;
}
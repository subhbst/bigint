#include <stdio.h>
#include <gmp.h>
#include "header.h"

void multiply(struct node *head, struct node *Head) {
    printf("\n######## MULTIPLICATION ########\n");
    struct node *tail, *Tail;
    long int n = 1;
    tail = head;
    while (tail != 0) {
        n = n * tail->data;
        tail = tail->next;
    }
    mpz_t num;
    mpz_init(num);
    mpz_init_set_si(num, n);
    n = 1;
    Tail = Head;
    while (Tail != 0) {
        n = n * Tail->data;
        Tail = Tail->next;
    }
    mpz_t num1;
    mpz_init(num1);
    mpz_init_set_si(num1, n);
    mpz_t result;
    mpz_init(result);
    mpz_mul(result, num, num1);
    gmp_printf("Multiplication of first linklist :- %Zd\n", num);
    gmp_printf("Multiplication of second linklist :- %Zd\n", num1);
    gmp_printf("Multiplication between these linklists is %Zd\n", result);
}

void addition(struct node *head, struct node *Head) {
    printf("\n######## ADDITION ########\n");
    struct node *tail, *Tail;
    long int n = 0;
    tail = head;
    while (tail != 0) {
        n = n + tail->data;
        tail = tail->next;
    }
    mpz_t num;
    mpz_init(num);
    mpz_init_set_si(num, n);
    n = 0;
    Tail = Head;
    while (Tail != 0) {
        n = n + Tail->data;
        Tail = Tail->next;
    }
    mpz_t num1;
    mpz_init(num1);
    mpz_init_set_si(num1, n);
    mpz_t result;
    mpz_init(result);
    mpz_add(result, num, num1);
    gmp_printf("Addition of first linklist :- %Zd\n", num);
    gmp_printf("Addition of second linklist :- %Zd\n", num1);
    gmp_printf("Addition between these linklists is %Zd\n", result);
}

void subtraction(struct node *head, struct node *Head) {
    printf("\n######## SUBTRACTION ########\n");
    struct node *tail, *Tail;
    long int n = 0;
    tail = head;
    while (tail != 0) {
        n = n + tail->data;
        tail = tail->next;
    }
    mpz_t num;
    mpz_init(num);
    mpz_init_set_si(num, n);
    n = 0;
    Tail = Head;
    while (Tail != 0) {
        n = n + Tail->data;
        Tail = Tail->next;
    }
    mpz_t num1;
    mpz_init(num1);
    mpz_init_set_si(num1, n);
    mpz_t result;
    mpz_init(result);
    mpz_sub(result, num, num1);
    gmp_printf("Subtraction of first linklist :- %Zd\n", num);
    gmp_printf("Subtraction of second linklist :- %Zd\n", num1);
    gmp_printf("Subtraction between these linklists is %Zd\n", result);
}

void division(struct node *head, struct node *Head) {
    printf("\n######## DIVISION ########\n");
    struct node *tail, *Tail;
    long int n = 0;
    tail = head;
    while (tail != 0) {
        n = n + tail->data;
        tail = tail->next;
    }
    mpz_t num;
    mpz_init(num);
    mpz_init_set_si(num, n);
    n = 0;
    Tail = Head;
    while (Tail != 0) {
        n = n + Tail->data;
        Tail = Tail->next;
    }
    mpz_t num1;
    mpz_init(num1);
    mpz_init_set_si(num1, n);
    mpz_t result;
    mpz_init(result);
    mpz_div(result, num, num1);
    gmp_printf("Division of first linklist :- %Zd\n", num);
    gmp_printf("Division of second linklist :- %Zd\n", num1);
    gmp_printf("Division between these linklists is %Zd\n", result);
}

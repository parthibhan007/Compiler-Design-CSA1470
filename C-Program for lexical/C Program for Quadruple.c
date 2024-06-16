#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stype.h>
typedef struct {
    char operator[5];
    char operand1[5];
    char operand2[5];
    char result[5];
} Quadruple;
Quadruple generateQuadruple(char *operator, char *operand1, char *operand2, char *result) {
    Quadruple q;
    strcpy(q.operator, operator);
    strcpy(q.operand1, operand1);
    strcpy(q.operand2, operand2);
    strcpy(q.result, result);
    return q;
}
int main() {
    Quadruple quadruples[10]; 
    int quadCount = 0; 
    char a[] = "a";
    char b[] = "b";
    char c[] = "c";
    char d[] = "d";
    quadruples[quadCount++] = generateQuadruple("=", b, "", a);
    char temp1[] = "temp1";
    quadruples[quadCount++] = generateQuadruple("*", c, d, temp1);
    char temp2[] = "temp2";
    quadruples[quadCount++] = generateQuadruple("+", a, temp1, temp2);
    printf("Generated Quadruples:\n");
    for (int i = 0; i < quadCount; i++) {
        printf("Q%d: %s = %s %s %s\n", i + 1, quadruples[i].result, quadruples[i].operand1,
               quadruples[i].operator, quadruples[i].operand2);
    }
    return 0;
}

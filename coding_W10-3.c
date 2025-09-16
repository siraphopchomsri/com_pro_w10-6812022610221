#include <stdio.h>
#include <string.h>

int main() {
    char name1[50], name2[50];

    // รับชื่อลูกค้า 2 คน
    printf("กรอกชื่อลูกค้า 1: ");
    scanf("%s", name1);
    printf("กรอกชื่อลูกค้า 2: ");
    scanf("%s", name2);

    // ตรวจสอบว่าชื่อเหมือนกันหรือไม่
    if (strcmp(name1, name2) == 0) {
        // ถ้าเหมือนกัน
        printf("ชื่อของคุณทั้งสองเหมือนกันคือ %s.\n", name1);
        printf("ความยาวของชื่อคือ %lu ตัวอักษร.\n", strlen(name1));
    } else {
        // ถ้าไม่เหมือนกัน
        printf("ลูกค้า 1: %s (%lu ตัวอักษร)\n", name1, strlen(name1));
        printf("ลูกค้า 2: %s (%lu ตัวอักษร)\n", name2, strlen(name2));
    }

    return 0;
}
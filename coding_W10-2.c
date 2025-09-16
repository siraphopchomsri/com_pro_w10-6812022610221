#include <stdio.h>

int main() {
    float score[3][3]; // 3 คน × 3 วิชา
    float avg[3] = {0}; // เก็บค่าเฉลี่ยของแต่ละวิชา
    int i, j;

    // รับค่าคะแนนของนักศึกษาแต่ละคน
    for (i = 0; i < 3; i++) {
        printf("กรอกคะแนนของนักเรียน %d:\n", i + 1);
        printf("คณิตศาสตร์: ");
        scanf("%f", &score[i][0]);
        printf("ฟิสิกส์: ");
        scanf("%f", &score[i][1]);
        printf("เคมี: ");
        scanf("%f", &score[i][2]);
    }

    // แสดงผลคะแนนเป็นตาราง
    printf("\nตารางคะแนน:\n");
    printf("นักเรียน คณิตศาสตร์ ฟิสิกส์ เคมี\n");
    for (i = 0; i < 3; i++) {
        printf("%d        ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%7.2f ", score[i][j]);
            avg[j] += score[i][j]; // บวกเพื่อใช้หาเฉลี่ยรายวิชา
        }
        printf("\n");
    }

    // คำนวณและแสดงค่าเฉลี่ยรายวิชา
    printf("\nเฉลี่ยต่อวิชา:\n");
    printf("คณิตศาสตร์ = %.2f\n", avg[0] / 3);
    printf("ฟิสิกส์ = %.2f\n", avg[1] / 3);
    printf("เคมี = %.2f\n", avg[2] / 3);

    return 0;
}
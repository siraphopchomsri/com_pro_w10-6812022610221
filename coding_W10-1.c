#include <stdio.h> 
int main() { 
    int n, i; 
    float sum = 0, avg;

    // รับจำนวน นศ.
    printf("กรอกจำนวนนักเรียน: ");
    scanf("%d", &n);
 
    int score[n]; // กำหนด array ตามจำนวน นศ.

    printf("เข้า %d คะแนนของนักเรียน (หนึ่งคะแนนต่อบรรทัด):\n", n);

    // รับคะแนนทีละคน
    for (i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &score[i]);
        sum += score[i];  // บวกสะสม
    }

    // คำนวณค่าเฉลี่ย
    avg = sum / n;

    // แสดงผล
    printf("\nจำนวนนักเรียน = %d\n", n);
    printf("คะแนนเฉลี่ย = %.2f\n", avg);

    return 0;
}

    
//64010846 ศิริพิชา หมั่นเสมอ
//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด
#include <stdio.h>
int main()
{
	int a, b, ans;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	ans = a + b;
	printf("%d", ans);
	ans = a - b;
	printf(" %d", ans);
	ans = a * b;
	printf(" %d", ans);
	ans = a / b;
	printf(" %d", ans);
	return 0;
}
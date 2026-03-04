//三角形面积公式采用海伦公式，周长公式为三边之和，输入三边长度，输出周长和面积
#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, s, area, perimeter;
	printf("请输入三角形的三边长度：");
	scanf("%f %f %f", &a, &b, &c);
	
	// 计算周长
	perimeter = a + b + c;
	
	// 计算半周长
	s = perimeter / 2;
	
	// 计算面积
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	
	printf("三角形的周长为：%.2f\n", perimeter);
	printf("三角形的面积为：%.2f\n", area);
	
	return 0;
}
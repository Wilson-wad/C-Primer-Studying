#pragma once
#include<iostream>

void pause_system() {
	system("pause");
}

//��ʾ�����ֵ�ַ
void test2_7_1(){
	std::cout << "��ʾ���ֵ�ַ" << std::endl;
	std::cout << "�ҵ������ǣ�sdajhdk"<<std::endl;
	std::cout << "סַ�ǣ�jjk" << std::endl;
	pause_system();
}

//longת��
void test2_7_2() {
	std::cout << "longת��" << std::endl;
	std::cout << "����һ����longΪ��λ�ľ��룬Ȼ��ת������" << std::endl;
	int i = 0;
	do {
		std::cout << "����һ����longΪ��λ�ľ���:";
		std::cin >> i;
	} while (i==0);
	std::cout << i <<"��long��" << 220*i <<"����"<< std::endl;
	pause_system();
}

//���
void test2_7_3_1() {
	std::cout << "three blind mice" << std::endl;
}
void test2_7_3_2() {
	std::cout << "three blind mice" << std::endl;
}
void test2_7_3_main() {
	std::cout << "���" << std::endl;

	test2_7_3_1();
	test2_7_3_1();
	test2_7_3_2();
	test2_7_3_2();
	pause_system();
}

//�����¶�ת��Ϊ�����¶�
double test2_7_5_1(double celsius) {
	int fahrenheit=0;
	fahrenheit = celsius*1.8+32.0;
	return fahrenheit;
}
void test2_7_5_main() {
	std::cout << "���϶�ת�����϶�" << std::endl;
	std::cout << "please enter a celsius value:";
	double celsius;
	std::cin >> celsius;
	double fahrenheit = test2_7_5_1(celsius);

	std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit" << std::endl;
	pause_system();
}

//���ݹ���ֵ�������ĵ�λ
double test2_7_6_1(double light_years) {
	double astronomical_units=0;
	astronomical_units = 63240 * light_years;
	return astronomical_units;
}
void test2_7_6_main() {
	std::cout << "����ת��" << std::endl;
	std::cout << "Enter the number of light: ";

	double light_years = 0;
	std::cin >> light_years;
	double astronomical_units = test2_7_6_1(light_years);

	std::cout << light_years << " light years=" << astronomical_units << " astronomical units " << std::endl;
	pause_system();
}

//ʱ��
void test2_7_7_1(int h,int m) {
	std::cout << "Enter the number of hours:" << h<<std::endl;
	std::cout << "Enter the number of minutes:" << m<<std::endl;
	std::cout << "Time:" << h << ":" << m << std::endl;
}
void test2_7_7_main() {
	std::cout << "ʱ��" << std::endl;
	int h = 0, m = 0;
	do { std::cout << "Enter the number of hour:"; std::cin >> h; } while (h<0||h>24);
	do { std::cout << "Enter the number of minutes:"; std::cin >> m; } while (m < 0 || m > 60);
	test2_7_7_1(h, m);
	pause_system();
}
#pragma once
#include<iostream>

void pause_system() {
	system("pause");
}

//显示，名字地址
void test2_7_1(){
	std::cout << "显示名字地址" << std::endl;
	std::cout << "我的名字是：sdajhdk"<<std::endl;
	std::cout << "住址是：jjk" << std::endl;
	pause_system();
}

//long转换
void test2_7_2() {
	std::cout << "long转换" << std::endl;
	std::cout << "输入一个以long为单位的距离，然后转换成码" << std::endl;
	int i = 0;
	do {
		std::cout << "输入一个以long为单位的距离:";
		std::cin >> i;
	} while (i==0);
	std::cout << i <<"个long是" << 220*i <<"个码"<< std::endl;
	pause_system();
}

//输出
void test2_7_3_1() {
	std::cout << "three blind mice" << std::endl;
}
void test2_7_3_2() {
	std::cout << "three blind mice" << std::endl;
}
void test2_7_3_main() {
	std::cout << "输出" << std::endl;

	test2_7_3_1();
	test2_7_3_1();
	test2_7_3_2();
	test2_7_3_2();
	pause_system();
}

//摄氏温度转换为华氏温度
double test2_7_5_1(double celsius) {
	int fahrenheit=0;
	fahrenheit = celsius*1.8+32.0;
	return fahrenheit;
}
void test2_7_5_main() {
	std::cout << "摄氏度转换华氏度" << std::endl;
	std::cout << "please enter a celsius value:";
	double celsius;
	std::cin >> celsius;
	double fahrenheit = test2_7_5_1(celsius);

	std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit" << std::endl;
	pause_system();
}

//根据光年值计算天文单位
double test2_7_6_1(double light_years) {
	double astronomical_units=0;
	astronomical_units = 63240 * light_years;
	return astronomical_units;
}
void test2_7_6_main() {
	std::cout << "光年转换" << std::endl;
	std::cout << "Enter the number of light: ";

	double light_years = 0;
	std::cin >> light_years;
	double astronomical_units = test2_7_6_1(light_years);

	std::cout << light_years << " light years=" << astronomical_units << " astronomical units " << std::endl;
	pause_system();
}

//时间
void test2_7_7_1(int h,int m) {
	std::cout << "Enter the number of hours:" << h<<std::endl;
	std::cout << "Enter the number of minutes:" << m<<std::endl;
	std::cout << "Time:" << h << ":" << m << std::endl;
}
void test2_7_7_main() {
	std::cout << "时间" << std::endl;
	int h = 0, m = 0;
	do { std::cout << "Enter the number of hour:"; std::cin >> h; } while (h<0||h>24);
	do { std::cout << "Enter the number of minutes:"; std::cin >> m; } while (m < 0 || m > 60);
	test2_7_7_1(h, m);
	pause_system();
}
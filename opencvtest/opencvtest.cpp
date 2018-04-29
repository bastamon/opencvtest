// opencvtest.cpp : 定义控制台应用程序的入口点。
// opencvtest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"  
#include "gsl\\gsl_sf_log.h"  
#include "gsl\\gsl_sf_gamma.h"  
#include <opencv2\opencv.hpp>  
using namespace std;
using namespace cv;


int main(int argc, char* argv[])
{
	//gsl演示  
	cout << gsl_sf_log(56.8) << endl;// e为底对数 数学式 ln(56.8)   
	std::cout << gsl_sf_gamma_inc(1.5, 0.5) << std::endl;
	std::cout << gsl_sf_gamma_inc_Q(1.5, 0.5) << std::endl;
	std::cout << gsl_sf_gamma_inc_P(1.5, 0.5) << std::endl;
	//cv演示  
	Mat img = imread("12.jpg");//读取图像，类似matlab  

	//如果读入图像失败  
	if (img.empty())
	{
		return -1;
	}

	//创建窗口  
	namedWindow("image", 1);

	//显示图像  
	imshow("image", img);

	//等待按键，按键盘任意键返回  
	waitKey();
	return 0;
}
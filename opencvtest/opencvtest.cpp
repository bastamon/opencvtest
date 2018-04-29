// opencvtest.cpp : �������̨Ӧ�ó������ڵ㡣
// opencvtest.cpp : �������̨Ӧ�ó������ڵ㡣
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
	//gsl��ʾ  
	cout << gsl_sf_log(56.8) << endl;// eΪ�׶��� ��ѧʽ ln(56.8)   
	std::cout << gsl_sf_gamma_inc(1.5, 0.5) << std::endl;
	std::cout << gsl_sf_gamma_inc_Q(1.5, 0.5) << std::endl;
	std::cout << gsl_sf_gamma_inc_P(1.5, 0.5) << std::endl;
	//cv��ʾ  
	Mat img = imread("12.jpg");//��ȡͼ������matlab  

	//�������ͼ��ʧ��  
	if (img.empty())
	{
		return -1;
	}

	//��������  
	namedWindow("image", 1);

	//��ʾͼ��  
	imshow("image", img);

	//�ȴ����������������������  
	waitKey();
	return 0;
}
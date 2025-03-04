﻿#ifndef EROSION_H
#define EROSION_H
#include "filter.h"

namespace morph {
class erosion : public filter {
public:
	erosion(cv::Mat image, int size, cv::Mat strc);
	cv::Vec3b get_new_pixel(int x, int y) override;
	cv::Vec3b get_new_pixel(int x, int y, cv::Mat& strc);
	cv::Vec3b calculate_new_pixel(cv::Vec3b result, cv::Vec3b current) const;
	cv::Mat make() override;
private:
	cv::Mat m_image;
	cv::Mat m_strc;
	int m_mask = 0;
	size_t m_size;
};
}
#endif

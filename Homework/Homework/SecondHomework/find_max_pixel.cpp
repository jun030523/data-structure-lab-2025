#include <iostream>

#include <opencv2/opencv.hpp>

using namespace std;

using namespace cv;



int findMaxBrightness(const Mat& image) {

    int maxVal = 0;

    for (int i = 0; i < image.rows; ++i) {

        for (int j = 0; j < image.cols; ++j) {

            int brightness = image.at<uchar>(i, j);

            if (brightness > maxVal) {

                maxVal = brightness;

            }

        }

    }

    return maxVal;

}



int main() {

    Mat image = imread("Lenna.png", IMREAD_GRAYSCALE);

    if (image.empty()) {

        cout << "이미지를 불러올 수 없습니다." << endl;

        return -1;

    }



    int maxBrightness = findMaxBrightness(image);

    cout << "최대 밝기: " << maxBrightness << endl;

    return 0;

}
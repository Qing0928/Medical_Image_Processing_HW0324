#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class EdgeEnhance{
    public:
        Mat edge(Mat img_src) {
            Mat img_edge_enhance;
            Canny(img_src, img_edge_enhance, 50, 100, 3, false);
            return img_edge_enhance;
        }
};

int main()
{
    Mat img_src = imread("HW_0324.png", 0);
    if (!img_src.data) {
        cout << "圖片無法載入" << endl;
        return 0;
    }

    EdgeEnhance EE;
    Mat img_edge_enhance = EE.edge(img_src);
    
    imshow("Original", img_src);
    imshow("EdgeEnhancement", img_edge_enhance);
    waitKey(0);

    return 0;
}
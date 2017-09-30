#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main (){

    //lire une image
    cv::Mat image= cv::imread("C:\\photo_2017-07-16_23-07-27.jpg");
    //créer une fenetre nommé "MyImg"
    cv::namedWindow("MyImg");
    //mettre et afficher l'image dans la fentre créer
    cv::imshow("MyImg", image);

    cv::waitKey();
    return 0;
}

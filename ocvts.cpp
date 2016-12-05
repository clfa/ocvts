#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
 
int main( int argc, char** argv )
{
        IplImage* pImg; 															                                       //声明IplImage指针
        if( argc == 2 && (pImg = cvLoadImage( argv[1], 1)) != 0 )    {		     	//载入图像
                cvNamedWindow( "Image", 1 );										                        //创建窗口
                cvResizeWindow("Image", pImg->width, pImg->height);
                cvShowImage( "Image", pImg );										                       //显示图像
                cvWaitKey(0); 														                                  //等待按键
                cvDestroyWindow( "Image" );											                        //销毁窗口
                cvReleaseImage( &pImg ); 											                          //释放图像
                return 0;
        }
 
        return -1;
}

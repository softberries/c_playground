#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <cv.h>
#include <highgui.h>
//#include <cxtypes.h>
//#include <cvaux.h>

int main()
{
  CvCapture *webcam = cvCreateCameraCapture(0);
  if(webcam){
    printf("webcam is active\n");
    IplImage* bgr_frame = cvQueryFrame(webcam);
    CvSize size = cvSize((int)cvGetCaptureProperty(webcam, CV_CAP_PROP_FRAME_WIDTH),(int)cvGetCaptureProperty(webcam, CV_CAP_PROP_FRAME_HEIGHT));
    cvNamedWindow("Webcam",CV_WINDOW_AUTOSIZE);
    CvVideoWriter *writer = cvCreateVideoWriter("file1.avi",CV_FOURCC('D','I','V','X'),30,size,1);
    while((bgr_frame = cvQueryFrame(webcam)) != NULL){
      cvWriteFrame(writer,bgr_frame);
      cvShowImage("Webcam",bgr_frame);
      char c = cvWaitKey(33);
      if(c == 27){
        break;
      }
    }
    cvReleaseVideoWriter(&writer);
    cvReleaseCapture(&webcam);
    cvDestroyWindow("Webcam");
  }
  return 0;
}



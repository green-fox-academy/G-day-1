#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include <stdint.h>
#include <opencv2/core/mat.hpp>
#include "crud.h"
#include <string.h>

int main() {

   std::string databasePath = "../newl.db";

   std::string path = "C:/GFA/KisG93/OpenCV-Practise/Exercise1/IMG_3739.JPG";
   std::string path2 = "C:/GFA/KisG93/OpenCV-Practise/Exercise1/lol.jpg";

   createRecord(databasePath, path);
   createRecord(databasePath, path2);

    return 0;
}

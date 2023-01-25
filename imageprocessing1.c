#include <stdio.h>
#include <stdlib.h>

int main() {
  // open bmp file
  char *image_path = "image_processing/sample_640x426.bmp";
  FILE *image1 = fopen(image_path, "rb");

  // check avalability
  if (image1 == NULL) {
    return 1;
  }
  // create arrays to stroe image header and color table
  unsigned char imgHeder[54];
  unsigned char colorTable[1024];

  // read image header and store it in array
  for (int i = 0; i < 54; i++) {
    imgHeder[i] = getc(image1);
  }

  int width = *(int *)&imgHeder[18];    // get width of image
  int height = *(int *)&imgHeder[22];   // get height of iamge
  int bitDepth = *(int *)&imgHeder[28]; // get bitDepth of image

  // check bitDepth value and read color table
  if (bitDepth <= 8)
    fread(colorTable, sizeof(unsigned char), 1024, image1);

  unsigned char buf[height * width];

  fread(buf, sizeof(unsigned char), (height * width), image1);

  char *new_image_path = "image_processing/lena512.bmp";
  FILE *newImage = fopen(new_image_path, "wb");


  fwrite(imgHeder, sizeof(unsigned char), 54, newImage);

  if (bitDepth <= 8)
    fwrite(colorTable, sizeof(unsigned char), 1024, newImage);

  fwrite(buf, sizeof(unsigned char), (height * width), newImage);

  fclose(image1);
  fclose(newImage);

  return 0;
}

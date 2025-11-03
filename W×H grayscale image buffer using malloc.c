#include <stdio.h>
#include <stdlib.h>
unsigned char* createImage(int width, int height);
void setPixel(unsigned char *img, int width, int x, int y, unsigned char value);
unsigned char getPixel(unsigned char *img, int width, int x, int y);
void printImage(unsigned char *img, int width, int height);
void freeImage(unsigned char *img);
unsigned char* createImage(int width, int height) {
    unsigned char *img = (unsigned char *)malloc(width * height * sizeof(unsigned char));
    if (img == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    for (int i = 0; i < width * height; i++) {
        img[i] = 0;
    }
    return img;
}
void setPixel(unsigned char *img, int width, int x, int y, unsigned char value) {
    img[y * width + x] = value;
}
unsigned char getPixel(unsigned char *img, int width, int x, int y) {
    return img[y * width + x];
}
void printImage(unsigned char *img, int width, int height) {
    printf("\nGrayscale Image (%d x %d):\n", width, height);
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            printf("%3d ", getPixel(img, width, x, y));
        }
        printf("\n");
    }
}
void freeImage(unsigned char *img) {
    free(img);
}
int main() {
    int width, height;
    printf("Enter image width and height: ");
    scanf("%d %d", &width, &height);
    unsigned char *image = createImage(width, height);
    printf("\nEnter pixel values (0–255):\n");
    for (int y = 0; y < height; y++)
        for (int x = 0; x < width; x++) {
            unsigned int val;
            scanf("%u", &val);
            setPixel(image, width, x, y, (unsigned char)val);
        }
    }
    printImage(image, width, height);
    freeImage(image);
    return 0;
}

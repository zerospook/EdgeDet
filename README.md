# Implementation Of Edge Detection Algorithm
This program will take an image as an input and will apply Sobel-Edge-Detection algorithm to give an output that shows all the edges in that image.

### About:
This is our 7th semester project(1) for CS794. 
Edge Detection is a case of trying to find the regions in an image wherever we have a sharp change in intensity or a sharp change in colour. A high value indicates a steep change and a low value indicates a shallow change.
![alt text](https://github.com/zerospook/EdgeDet/blob/master/images/bear1.jpg "Image of a Bear")
![alt text](https://github.com/zerospook/EdgeDet/blob/master/images/bear2.jpg "Magnified image showing High and Low density fields")
A very common way of doing this is using a **_Sobel Operator_**. 

It is an approximation to the derivative of an image. It's separate in the _y_ and _x_ directions. We generally try to find out the difference between the columns of the kernel(matrix). We pass this kernel through every pixel of the image and it gives us an idea of the vertical location where the edge might lie. It is a bit unusual to use _Sobel Operator_ to RGB images. So, we use it on a pgm(Portable GrayMap) image.

### Formulation:

The operator uses two 3×3 kernels which are convolved with the original image to calculate approximations of the derivatives – one for horizontal changes, and one for vertical. If we define **A** as the source image, and **Gx** and **Gy** are two images which at each point contain the vertical and horizontal derivative approximations respectively, the computations are as follows:
![alt text](https://github.com/zerospook/EdgeDet/blob/master/images/sobel.jpg "Formulation")

### Build:
_to be updated later_

### How to use:
_to be updated later_

### Examples:
![alt text](https://github.com/zerospook/EdgeDet/blob/master/images/dragon.jpg "a 475 wide by 460 high image of a cartoon dragon")
![alt text](https://github.com/zerospook/EdgeDet/blob/master/images/f14.jpg "a 640 wide by 480 high image of an F14 fighter jet")
![alt text](https://github.com/zerospook/EdgeDet/blob/master/images/fractral_tree.jpg " a photograph of a tree suggesting a fractal structure")

### References:
* For pgm-image sourcing:
https://people.sc.fsu.edu/~jburkardt/data/pgma/pgma.html

* For general description & formulation:
https://en.wikipedia.org/wiki/Sobel_operator

* The understanding of the project & Bear images is sourced from:
https://www.youtube.com/watch?v=uihBwtPIBxM

* This project will be an extension of the work of Aaron(aka Zoltack429)
https://www.youtube.com/user/MrZoltack/about

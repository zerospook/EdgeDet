#include "image.h"
#include<bits/stdc++.h>

bool isBinary(ifstream &inFile);

void run(char **argv);

int main(int argc, char **argv){

	if(argc != 3){

		cerr << "Usage: ImageManip imageName.pgm output.pgm";

		return 1;

	}

	long start, end;

	double total;

	start = clock();

	run(argv);

	end = clock();

	total = (double)(end - start)/1000;

	cout << "Execution time: " << total << endl;

	return 0;
}


bool isBinary(ifstream &inFile){

	char readChar = ' ';

	string errorMessage = "Error: incorrect picture format.";

	//If there is no character or the character is not equal to 'P'
	//then return an error
	if(!(inFile >> readChar) || ( readChar != 'P' )){

		cerr << errorMessage << endl;
		cerr << "P" << endl;

		exit(1002);

	}

	//If there is no character or the second character is not a 2 or 5
	//then return an error
	if(!(inFile >> readChar) || ( readChar != '2' && readChar != '5')){

		cerr << errorMessage << endl;
		cerr << readChar << endl;

		exit(1002);

	}

	if(readChar == '5') return true;

	return false;

}

void run(char **argv){

	ifstream inFile;

	inFile.open(argv[1], ios::binary | ios::in);

	ofstream outFile;

	outFile.open(argv[2], ios::binary
			            | ios::out
						| ios::trunc);

	if(isBinary(inFile)){

		BinaryImage binaryImage;

		binaryImage.readHeader(inFile);

		binaryImage.readImage(inFile);

		binaryImage.edgeDection();

		binaryImage.scaleImage();

		binaryImage.writeImage(outFile);

	}else{

		AsciiImage asciiImage;

		asciiImage.readHeader(inFile);

		asciiImage.readImage(inFile);

		asciiImage.edgeDection();

		asciiImage.scaleImage();

		asciiImage.writeImage(outFile);

	}

	inFile.close();
	outFile.close();

}



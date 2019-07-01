#include "pch.h"
#include "cnn.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

int size = 0;
double * data_matrix;
std::string * dates;
int size_of_featuremap;

cnn::cnn() {
}
void cnn::read_file(std::string fileLocation, double * data_matrix, std::string * dates) {
	int i = 0;
	int column_size = 6;
	std::string help_string = "";
	std::ifstream file(fileLocation);
	std::string str;
	std::string delimiter = ",";
	while (std::getline(file, str)) {
		size++;
	}
	file.clear();
	file.seekg(0, file.beg);
	dates = new std::string[size];
	data_matrix = new double[size*column_size];
	std::getline(file, str);
	size_t pos = 0;
	while (std::getline(file, str)) {
		pos = str.find(delimiter);
		dates[i] = str.substr(0, pos);
		str.erase(0, pos + delimiter.length());
		pos = str.find(delimiter);
		data_matrix[i*column_size + 0] = stod(str.substr(0, pos));
		str.erase(0, pos + delimiter.length());
		pos = str.find(delimiter);
		data_matrix[i*column_size + 1] = stod(str.substr(0, pos));
		str.erase(0, pos + delimiter.length());
		pos = str.find(delimiter);
		data_matrix[i*column_size + 2] = stod(str.substr(0, pos));
		str.erase(0, pos + delimiter.length());
		pos = str.find(delimiter);
		data_matrix[i*column_size + 3] = stod(str.substr(0, pos));
		str.erase(0, pos + delimiter.length());
		pos = str.find(delimiter);
		data_matrix[i*column_size + 4] = stod(str.substr(0, pos));
		str.erase(0, pos + delimiter.length());
		pos = str.find(delimiter);
		data_matrix[i*column_size + 5] = stod(str.substr(0, pos));
		//std::cout << dates[i] << "," << std::setprecision(10) << data_matrix[i*column_size + 0] << "," << data_matrix[i*column_size + 1] << "," << data_matrix[i*column_size + 2] << "," << data_matrix[i*column_size + 3] << "," << data_matrix[i*column_size + 4] << "," << data_matrix[i*column_size + 5] << "\n";
		i++;

	}

	
}

void cnn::initialize_filters(double * filters,int number_of_filters) {
	for (int i = 0; i < number_of_filters; i++) {
		filters[i] = (rand() % 25) - 12.5;
	}
}
void cnn::cnn_algo(double * data_matrix,int matrix_size, std::string * dates, int number_filters, double * filters) {
	double * copyMatrix;
	std::copy(data_matrix, data_matrix + size, copyMatrix);
	size = matrix_size;
	//initialize_filters(filters, size*number_filters);
	int number_start = 0;
	
	for (int i = 0; i < number_filters; i++) {
		number_start = int(size / number_filters)*i;
		

		for (int j = 0; j < size; j++) {


			

		}
		

	}




}




#include <string>

class cnn {
public:
	cnn();
	double* data_matrix;
	std::string * dates;
	void read_file(std::string fileLocation, double * data_matrix, std::string * dates);
	void initialize_filters(double * filters, int number_of_filters);
	void cnn_algo(double * data_matrix, int matrix_size, std::string * dates,int number_filters,double * filters);



};

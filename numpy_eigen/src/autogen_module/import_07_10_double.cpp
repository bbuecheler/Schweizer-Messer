// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_07_10_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 7, 10 > >::register_converter();
}


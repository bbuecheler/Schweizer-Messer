// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_10_05_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 10, 5 > >::register_converter();
}


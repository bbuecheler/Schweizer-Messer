// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_11_02_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 11, 2 > >::register_converter();
}


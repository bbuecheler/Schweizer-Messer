// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_D_07_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, Eigen::Dynamic, 7 > >::register_converter();
}


// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_02_02_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 2, 2 > >::register_converter();
}


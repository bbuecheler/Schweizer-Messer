// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_13_14_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 13, 14 > >::register_converter();
}


// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_12_16_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 12, 16 > >::register_converter();
}


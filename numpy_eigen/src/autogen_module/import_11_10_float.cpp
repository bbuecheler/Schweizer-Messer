// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_11_10_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 11, 10 > >::register_converter();
}


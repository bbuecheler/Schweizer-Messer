// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_06_13_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 6, 13 > >::register_converter();
}


// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_02_10_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 2, 10 > >::register_converter();
}


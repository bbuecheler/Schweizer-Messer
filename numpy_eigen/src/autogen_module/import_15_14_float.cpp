// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_15_14_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 15, 14 > >::register_converter();
}


#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<double, 16, 13> test_double_16_13(const Eigen::Matrix<double, 16, 13> & M)
{
	return M;
}
void export_double_16_13()
{
	boost::python::def("test_double_16_13",test_double_16_13);
}


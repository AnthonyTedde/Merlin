//
// Created by ATE on 11/28/21.
//
#include <src/LinearModels/LinearModel.h>
#include "main.h"
#define BOOT_TEST_MODULE LinearModel test
#include <boost/test/included/unit_test.hpp>
//#include <boost/test/unit_test.hpp>
//#include "../src/LinearModels/LinearModel.h"
#include <Eigen/Dense>

using namespace Eigen;
using namespace boost::unit_test;


BOOST_AUTO_TEST_CASE(test_the_constructor){
    MatrixXd data = MatrixXd::Random(3, 3);
    LinearModel lm = LinearModel(&data);
    bool check = lm.get_data() == data;
    BOOST_TEST(check);
}
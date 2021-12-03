//
// Created by ATE on 11/28/21.
//
#include "main.h"
#define BOOT_TEST_MODULE LinearModel
#include <boost/test/included/unit_test.hpp>
#include <vector>
#include <string>
//#include <boost/test/unit_test.hpp>
//#include "../src/LinearModels/LinearModel.h"
#include <Eigen/Dense>
#include <src/LinearModels/LinearModel.h>

using namespace Eigen;
using namespace boost::unit_test;


BOOST_AUTO_TEST_CASE(test_the_constructor){
    vector<string> colnames{"y", "x1", "x2"};
    MatrixXd data = MatrixXd::Random(3, 3);

    LinearModel lm = LinearModel(&data, colnames);
    bool check = lm.get_data() == data;
    BOOST_TEST(check);
}
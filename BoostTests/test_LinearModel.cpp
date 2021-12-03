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
    /*
     * TODO Linear models such as all others ML should get model.matrix as first arg
     * TODO off set and intercept is managed in the model.matrix objets
     * TODO transformations are managed by the model.matrix objects.
     * TODO We need a model.matrix class.
     * TODO Linear models such as all others ML should get Y vector or matrix
     * ------> Because Y may also support transformation, Y should be a class.
     * TODO model.matrix and Response.Vector (Y) should inherit from the same interface / ancestors.
     * ------> Both model.matrix and response.vector would be constructed upon the Eigen library.
     *
     */
    vector<string> colnames{"y", "x1", "x2"};
    MatrixXd data = MatrixXd::Random(3, 3);
    LinearModel lm = LinearModel(&data, colnames);
    bool check = lm.get_data() == data;
    BOOST_TEST(check);
}
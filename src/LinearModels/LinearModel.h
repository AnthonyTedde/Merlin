#ifndef MERLIN_LINEARMODEL_H
#define MERLIN_LINEARMODEL_H
#include <Eigen/Dense>
#include <vector>
#include <string>

using namespace Eigen;
using namespace std;

class LinearModel{
private:
    MatrixXd data;
    vector<string> col_names;

public:
    LinearModel(MatrixXd*, vector<string>);
    MatrixXd get_data(){return this->data;}
    //void sum_of_square_dev();
};

#endif //MERLIN_LINEARMODEL_H

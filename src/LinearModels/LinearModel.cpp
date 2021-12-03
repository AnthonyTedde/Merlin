#include <src/LinearModels/LinearModel.h>

//void lm::sum_of_square_dev() {}


LinearModel::LinearModel(
        MatrixXd* data,
        vector<string> col_names = vector<string>()
) {
    if(col_names.empty()){
        // Raise Error variable must have name
    }
    this->data = *data;
}

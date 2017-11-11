#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;

Tools::Tools() {}

Tools::~Tools() {}

VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
                              const vector<VectorXd> &ground_truth) 
{
  /**
  TODO:
    * Calculate the RMSE here.
  */

	// RMSE vector - Length (4), All values initilzed to zero

	VectorXd rmse(4);
	rmse << 0,0,0,0;

	//To check if the Estimation vector length is not same as ground truth vector length
	//Also check if Estimation vector length is equal to 0
  if(estimations.size() != ground_truth.size() || estimations.size() == 0 )
  {
    cout << "Invalid estimation or ground_truth data" << endl;
    return rmse;
  }

  //Calculate Squared difference for each value

  for(unsigned int i=0; i < estimations.size(); ++i)
  {
    VectorXd residual = estimations[i] - ground_truth[i];

    //Element-wise multiplication to obtain squares of each data pointer

    residual = residual.array()*residual.array();
    rmse += residual;

  }

  //Calculate Reduced Mean of the squared differences calculated above
  rmse = rmse / estimations.size();

  //Calculate the squared root of Reduced mean caluclated above
  rmse = rmse.array().sqrt();

  //Return the RMSE value as it is now the final result
  return rmse;
	
}
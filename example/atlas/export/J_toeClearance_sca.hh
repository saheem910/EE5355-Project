/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:58:51 GMT-04:00
 */

#ifndef J_TOECLEARANCE_SCA_HH
#define J_TOECLEARANCE_SCA_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void J_toeClearance_sca_raw(double *p_output1, const double *var);

    inline void J_toeClearance_sca(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 10, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      J_toeClearance_sca_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // J_TOECLEARANCE_SCA_HH

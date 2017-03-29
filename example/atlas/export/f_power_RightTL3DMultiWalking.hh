/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:58:47 GMT-04:00
 */

#ifndef F_POWER_RIGHTTL3DMULTIWALKING_HH
#define F_POWER_RIGHTTL3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void f_power_RightTL3DMultiWalking_raw(double *p_output1, const double *var);

    inline void f_power_RightTL3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 33, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 1, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      f_power_RightTL3DMultiWalking_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // F_POWER_RIGHTTL3DMULTIWALKING_HH

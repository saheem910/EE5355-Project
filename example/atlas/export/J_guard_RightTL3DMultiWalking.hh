/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:58 GMT-04:00
 */

#ifndef J_GUARD_RIGHTTL3DMULTIWALKING_HH
#define J_GUARD_RIGHTTL3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void J_guard_RightTL3DMultiWalking_raw(double *p_output1, const double *var,const double *auxdata);

    inline void J_guard_RightTL3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var,const Eigen::VectorXd &auxdata)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 21, 1);
      assert_size_matrix(auxdata, 1, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 10, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      J_guard_RightTL3DMultiWalking_raw(p_output1.data(), var.data(),auxdata.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // J_GUARD_RIGHTTL3DMULTIWALKING_HH

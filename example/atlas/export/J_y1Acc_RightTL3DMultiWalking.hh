/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:58:34 GMT-04:00
 */

#ifndef J_Y1ACC_RIGHTTL3DMULTIWALKING_HH
#define J_Y1ACC_RIGHTTL3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void J_y1Acc_RightTL3DMultiWalking_raw(double *p_output1, const double *var);

    inline void J_y1Acc_RightTL3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 66, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 9, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      J_y1Acc_RightTL3DMultiWalking_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // J_Y1ACC_RIGHTTL3DMULTIWALKING_HH

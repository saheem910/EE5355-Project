/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:59:08 GMT-04:00
 */

#ifndef J_HOLACC_RIGHTHS3DMULTIWALKING_HH
#define J_HOLACC_RIGHTHS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void J_holAcc_RightHS3DMultiWalking_raw(double *p_output1, const double *var);

    inline void J_holAcc_RightHS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 63, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 289, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      J_holAcc_RightHS3DMultiWalking_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // J_HOLACC_RIGHTHS3DMULTIWALKING_HH
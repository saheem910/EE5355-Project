/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:12 GMT-04:00
 */

#ifndef HOL_RIGHTHS3DMULTIWALKING_HH
#define HOL_RIGHTHS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void hol_RightHS3DMultiWalking_raw(double *p_output1, const double *q);

    inline void hol_RightHS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 13, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      hol_RightHS3DMultiWalking_raw(p_output1.data(), q.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // HOL_RIGHTHS3DMULTIWALKING_HH

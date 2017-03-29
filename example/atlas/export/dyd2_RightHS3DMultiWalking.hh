/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:19 GMT-04:00
 */

#ifndef DYD2_RIGHTHS3DMULTIWALKING_HH
#define DYD2_RIGHTHS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void dyd2_RightHS3DMultiWalking_raw(double *p_output1, const double *t,const double *a);

    inline void dyd2_RightHS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &t,const Eigen::VectorXd &a)
    {
      // Check
      // - Inputs
      assert_size_matrix(t, 1, 1);
      assert_size_matrix(a, 49, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 7, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      dyd2_RightHS3DMultiWalking_raw(p_output1.data(), t.data(),a.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // DYD2_RIGHTHS3DMULTIWALKING_HH

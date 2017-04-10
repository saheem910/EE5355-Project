/*
 * Automatically Generated from Mathematica.
 * Mon 10 Apr 2017 15:18:03 GMT-04:00
 */

#ifndef DYD2_RIGHTTS3DMULTIWALKING_HH
#define DYD2_RIGHTTS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void dyd2_RightTS3DMultiWalking_raw(double *p_output1, const double *t,const double *a);

    inline void dyd2_RightTS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &t,const Eigen::VectorXd &a)
    {
      // Check
      // - Inputs
      assert_size_matrix(t, 1, 1);
      assert_size_matrix(a, 42, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 6, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      dyd2_RightTS3DMultiWalking_raw(p_output1.data(), t.data(),a.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // DYD2_RIGHTTS3DMULTIWALKING_HH

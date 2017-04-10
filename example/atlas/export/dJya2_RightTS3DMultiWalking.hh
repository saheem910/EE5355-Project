/*
 * Automatically Generated from Mathematica.
 * Mon 10 Apr 2017 15:18:02 GMT-04:00
 */

#ifndef DJYA2_RIGHTTS3DMULTIWALKING_HH
#define DJYA2_RIGHTTS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void dJya2_RightTS3DMultiWalking_raw(double *p_output1, const double *q,const double *dq);

    inline void dJya2_RightTS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q,const Eigen::VectorXd &dq)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);
      assert_size_matrix(dq, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 6, 21);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      dJya2_RightTS3DMultiWalking_raw(p_output1.data(), q.data(),dq.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // DJYA2_RIGHTTS3DMULTIWALKING_HH

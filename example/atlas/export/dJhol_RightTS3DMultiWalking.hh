/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:28:56 GMT-04:00
 */

#ifndef DJHOL_RIGHTTS3DMULTIWALKING_HH
#define DJHOL_RIGHTTS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void dJhol_RightTS3DMultiWalking_raw(double *p_output1, const double *q,const double *dq);

    inline void dJhol_RightTS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q,const Eigen::VectorXd &dq)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);
      assert_size_matrix(dq, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 14, 21);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      dJhol_RightTS3DMultiWalking_raw(p_output1.data(), q.data(),dq.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // DJHOL_RIGHTTS3DMULTIWALKING_HH

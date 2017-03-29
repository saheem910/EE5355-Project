/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:25:45 GMT-04:00
 */

#ifndef PE_COM_VEC_HH
#define PE_COM_VEC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace atlas
{
  namespace basic
  {

    void pe_com_vec_raw(double *p_output1, const double *q);

    inline void pe_com_vec(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 1, 3);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      pe_com_vec_raw(p_output1.data(), q.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // PE_COM_VEC_HH

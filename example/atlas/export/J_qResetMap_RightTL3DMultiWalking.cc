/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:59 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var)
{
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=-1;
  p_output1[2]=1;
  p_output1[3]=-1;
  p_output1[4]=1;
  p_output1[5]=-1;
  p_output1[6]=1;
  p_output1[7]=-1;
  p_output1[8]=1;
  p_output1[9]=-1;
  p_output1[10]=1;
  p_output1[11]=-1;
  p_output1[12]=1;
  p_output1[13]=-1;
  p_output1[14]=1;
  p_output1[15]=-1;
  p_output1[16]=1;
  p_output1[17]=-1;
  p_output1[18]=1;
  p_output1[19]=-1;
  p_output1[20]=1;
  p_output1[21]=-1;
  p_output1[22]=1;
  p_output1[23]=-1;
  p_output1[24]=1;
  p_output1[25]=-1;
  p_output1[26]=1;
  p_output1[27]=-1;
  p_output1[28]=1;
  p_output1[29]=-1;
  p_output1[30]=1;
  p_output1[31]=-1;
  p_output1[32]=1;
  p_output1[33]=-1;
  p_output1[34]=1;
  p_output1[35]=-1;
  p_output1[36]=1;
  p_output1[37]=-1;
  p_output1[38]=1;
  p_output1[39]=-1;
  p_output1[40]=1;
  p_output1[41]=-1;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 42 && ncols == 1) && 
      !(mrows == 1 && ncols == 42))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 42, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "J_qResetMap_RightTL3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void J_qResetMap_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

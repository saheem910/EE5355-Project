/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 14:00:06 GMT-05:00
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
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=2;
  p_output1[10]=2;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=3;
  p_output1[20]=3;
  p_output1[21]=3;
  p_output1[22]=3;
  p_output1[23]=3;
  p_output1[24]=3;
  p_output1[25]=3;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=4;
  p_output1[30]=4;
  p_output1[31]=5;
  p_output1[32]=5;
  p_output1[33]=6;
  p_output1[34]=6;
  p_output1[35]=7;
  p_output1[36]=7;
  p_output1[37]=8;
  p_output1[38]=8;
  p_output1[39]=9;
  p_output1[40]=9;
  p_output1[41]=10;
  p_output1[42]=10;
  p_output1[43]=11;
  p_output1[44]=11;
  p_output1[45]=12;
  p_output1[46]=12;
  p_output1[47]=13;
  p_output1[48]=13;
  p_output1[49]=14;
  p_output1[50]=14;
  p_output1[51]=15;
  p_output1[52]=15;
  p_output1[53]=16;
  p_output1[54]=16;
  p_output1[55]=17;
  p_output1[56]=17;
  p_output1[57]=18;
  p_output1[58]=18;
  p_output1[59]=19;
  p_output1[60]=19;
  p_output1[61]=20;
  p_output1[62]=20;
  p_output1[63]=21;
  p_output1[64]=21;
  p_output1[65]=5;
  p_output1[66]=6;
  p_output1[67]=10;
  p_output1[68]=11;
  p_output1[69]=12;
  p_output1[70]=13;
  p_output1[71]=14;
  p_output1[72]=15;
  p_output1[73]=22;
  p_output1[74]=4;
  p_output1[75]=5;
  p_output1[76]=6;
  p_output1[77]=10;
  p_output1[78]=11;
  p_output1[79]=12;
  p_output1[80]=13;
  p_output1[81]=14;
  p_output1[82]=15;
  p_output1[83]=23;
  p_output1[84]=4;
  p_output1[85]=5;
  p_output1[86]=6;
  p_output1[87]=10;
  p_output1[88]=11;
  p_output1[89]=12;
  p_output1[90]=13;
  p_output1[91]=14;
  p_output1[92]=15;
  p_output1[93]=24;
  p_output1[94]=4;
  p_output1[95]=25;
  p_output1[96]=5;
  p_output1[97]=26;
  p_output1[98]=6;
  p_output1[99]=27;
  p_output1[100]=7;
  p_output1[101]=28;
  p_output1[102]=8;
  p_output1[103]=29;
  p_output1[104]=9;
  p_output1[105]=30;
  p_output1[106]=16;
  p_output1[107]=31;
  p_output1[108]=17;
  p_output1[109]=32;
  p_output1[110]=18;
  p_output1[111]=33;
  p_output1[112]=19;
  p_output1[113]=34;
  p_output1[114]=20;
  p_output1[115]=35;
  p_output1[116]=21;
  p_output1[117]=36;
  p_output1[118]=10;
  p_output1[119]=37;
  p_output1[120]=11;
  p_output1[121]=38;
  p_output1[122]=12;
  p_output1[123]=39;
  p_output1[124]=13;
  p_output1[125]=40;
  p_output1[126]=14;
  p_output1[127]=41;
  p_output1[128]=15;
  p_output1[129]=42;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 65, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_qResetMap_RightHS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_qResetMap_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

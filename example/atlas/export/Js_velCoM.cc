/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:01 GMT-04:00
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
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=1;
  p_output1[14]=1;
  p_output1[15]=1;
  p_output1[16]=1;
  p_output1[17]=1;
  p_output1[18]=1;
  p_output1[19]=1;
  p_output1[20]=1;
  p_output1[21]=1;
  p_output1[22]=1;
  p_output1[23]=1;
  p_output1[24]=1;
  p_output1[25]=1;
  p_output1[26]=1;
  p_output1[27]=1;
  p_output1[28]=1;
  p_output1[29]=1;
  p_output1[30]=1;
  p_output1[31]=1;
  p_output1[32]=1;
  p_output1[33]=1;
  p_output1[34]=1;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=2;
  p_output1[42]=2;
  p_output1[43]=2;
  p_output1[44]=2;
  p_output1[45]=2;
  p_output1[46]=2;
  p_output1[47]=2;
  p_output1[48]=2;
  p_output1[49]=2;
  p_output1[50]=2;
  p_output1[51]=2;
  p_output1[52]=2;
  p_output1[53]=2;
  p_output1[54]=2;
  p_output1[55]=2;
  p_output1[56]=2;
  p_output1[57]=2;
  p_output1[58]=2;
  p_output1[59]=2;
  p_output1[60]=2;
  p_output1[61]=2;
  p_output1[62]=2;
  p_output1[63]=2;
  p_output1[64]=2;
  p_output1[65]=2;
  p_output1[66]=2;
  p_output1[67]=2;
  p_output1[68]=2;
  p_output1[69]=2;
  p_output1[70]=2;
  p_output1[71]=2;
  p_output1[72]=3;
  p_output1[73]=3;
  p_output1[74]=3;
  p_output1[75]=3;
  p_output1[76]=3;
  p_output1[77]=3;
  p_output1[78]=3;
  p_output1[79]=3;
  p_output1[80]=3;
  p_output1[81]=3;
  p_output1[82]=3;
  p_output1[83]=3;
  p_output1[84]=3;
  p_output1[85]=3;
  p_output1[86]=3;
  p_output1[87]=3;
  p_output1[88]=3;
  p_output1[89]=3;
  p_output1[90]=3;
  p_output1[91]=3;
  p_output1[92]=3;
  p_output1[93]=3;
  p_output1[94]=3;
  p_output1[95]=3;
  p_output1[96]=3;
  p_output1[97]=3;
  p_output1[98]=3;
  p_output1[99]=3;
  p_output1[100]=3;
  p_output1[101]=3;
  p_output1[102]=3;
  p_output1[103]=3;
  p_output1[104]=3;
  p_output1[105]=3;
  p_output1[106]=3;
  p_output1[107]=3;
  p_output1[108]=3;
  p_output1[109]=5;
  p_output1[110]=6;
  p_output1[111]=7;
  p_output1[112]=8;
  p_output1[113]=9;
  p_output1[114]=10;
  p_output1[115]=11;
  p_output1[116]=12;
  p_output1[117]=13;
  p_output1[118]=14;
  p_output1[119]=15;
  p_output1[120]=16;
  p_output1[121]=17;
  p_output1[122]=18;
  p_output1[123]=19;
  p_output1[124]=20;
  p_output1[125]=21;
  p_output1[126]=22;
  p_output1[127]=26;
  p_output1[128]=27;
  p_output1[129]=28;
  p_output1[130]=29;
  p_output1[131]=30;
  p_output1[132]=31;
  p_output1[133]=32;
  p_output1[134]=33;
  p_output1[135]=34;
  p_output1[136]=35;
  p_output1[137]=36;
  p_output1[138]=37;
  p_output1[139]=38;
  p_output1[140]=39;
  p_output1[141]=40;
  p_output1[142]=41;
  p_output1[143]=42;
  p_output1[144]=4;
  p_output1[145]=5;
  p_output1[146]=6;
  p_output1[147]=7;
  p_output1[148]=8;
  p_output1[149]=9;
  p_output1[150]=10;
  p_output1[151]=11;
  p_output1[152]=12;
  p_output1[153]=13;
  p_output1[154]=14;
  p_output1[155]=15;
  p_output1[156]=16;
  p_output1[157]=17;
  p_output1[158]=18;
  p_output1[159]=19;
  p_output1[160]=20;
  p_output1[161]=21;
  p_output1[162]=23;
  p_output1[163]=25;
  p_output1[164]=26;
  p_output1[165]=27;
  p_output1[166]=28;
  p_output1[167]=29;
  p_output1[168]=30;
  p_output1[169]=31;
  p_output1[170]=32;
  p_output1[171]=33;
  p_output1[172]=34;
  p_output1[173]=35;
  p_output1[174]=36;
  p_output1[175]=37;
  p_output1[176]=38;
  p_output1[177]=39;
  p_output1[178]=40;
  p_output1[179]=41;
  p_output1[180]=42;
  p_output1[181]=4;
  p_output1[182]=5;
  p_output1[183]=6;
  p_output1[184]=7;
  p_output1[185]=8;
  p_output1[186]=9;
  p_output1[187]=10;
  p_output1[188]=11;
  p_output1[189]=12;
  p_output1[190]=13;
  p_output1[191]=14;
  p_output1[192]=15;
  p_output1[193]=16;
  p_output1[194]=17;
  p_output1[195]=18;
  p_output1[196]=19;
  p_output1[197]=20;
  p_output1[198]=21;
  p_output1[199]=24;
  p_output1[200]=25;
  p_output1[201]=26;
  p_output1[202]=27;
  p_output1[203]=28;
  p_output1[204]=29;
  p_output1[205]=30;
  p_output1[206]=31;
  p_output1[207]=32;
  p_output1[208]=33;
  p_output1[209]=34;
  p_output1[210]=35;
  p_output1[211]=36;
  p_output1[212]=37;
  p_output1[213]=38;
  p_output1[214]=39;
  p_output1[215]=40;
  p_output1[216]=41;
  p_output1[217]=42;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 109, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_velCoM.hh"

namespace Kinematics
{
namespace basic
{

void Js_velCoM_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

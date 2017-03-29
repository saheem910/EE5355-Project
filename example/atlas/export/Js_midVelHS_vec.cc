/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:11 GMT-04:00
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
  p_output1[6]=2;
  p_output1[7]=2;
  p_output1[8]=2;
  p_output1[9]=2;
  p_output1[10]=2;
  p_output1[11]=2;
  p_output1[12]=3;
  p_output1[13]=3;
  p_output1[14]=3;
  p_output1[15]=3;
  p_output1[16]=3;
  p_output1[17]=3;
  p_output1[18]=4;
  p_output1[19]=4;
  p_output1[20]=4;
  p_output1[21]=4;
  p_output1[22]=4;
  p_output1[23]=4;
  p_output1[24]=5;
  p_output1[25]=5;
  p_output1[26]=5;
  p_output1[27]=5;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=6;
  p_output1[31]=6;
  p_output1[32]=6;
  p_output1[33]=6;
  p_output1[34]=6;
  p_output1[35]=6;
  p_output1[36]=7;
  p_output1[37]=7;
  p_output1[38]=7;
  p_output1[39]=7;
  p_output1[40]=7;
  p_output1[41]=7;
  p_output1[42]=8;
  p_output1[43]=8;
  p_output1[44]=8;
  p_output1[45]=8;
  p_output1[46]=8;
  p_output1[47]=8;
  p_output1[48]=9;
  p_output1[49]=9;
  p_output1[50]=9;
  p_output1[51]=9;
  p_output1[52]=9;
  p_output1[53]=9;
  p_output1[54]=10;
  p_output1[55]=10;
  p_output1[56]=10;
  p_output1[57]=10;
  p_output1[58]=10;
  p_output1[59]=10;
  p_output1[60]=11;
  p_output1[61]=11;
  p_output1[62]=11;
  p_output1[63]=11;
  p_output1[64]=11;
  p_output1[65]=11;
  p_output1[66]=12;
  p_output1[67]=12;
  p_output1[68]=12;
  p_output1[69]=12;
  p_output1[70]=12;
  p_output1[71]=12;
  p_output1[72]=13;
  p_output1[73]=13;
  p_output1[74]=13;
  p_output1[75]=13;
  p_output1[76]=13;
  p_output1[77]=13;
  p_output1[78]=14;
  p_output1[79]=14;
  p_output1[80]=14;
  p_output1[81]=14;
  p_output1[82]=14;
  p_output1[83]=14;
  p_output1[84]=15;
  p_output1[85]=15;
  p_output1[86]=15;
  p_output1[87]=15;
  p_output1[88]=15;
  p_output1[89]=15;
  p_output1[90]=16;
  p_output1[91]=16;
  p_output1[92]=16;
  p_output1[93]=16;
  p_output1[94]=16;
  p_output1[95]=16;
  p_output1[96]=17;
  p_output1[97]=17;
  p_output1[98]=17;
  p_output1[99]=17;
  p_output1[100]=17;
  p_output1[101]=17;
  p_output1[102]=18;
  p_output1[103]=18;
  p_output1[104]=18;
  p_output1[105]=18;
  p_output1[106]=18;
  p_output1[107]=18;
  p_output1[108]=19;
  p_output1[109]=19;
  p_output1[110]=19;
  p_output1[111]=19;
  p_output1[112]=19;
  p_output1[113]=19;
  p_output1[114]=20;
  p_output1[115]=20;
  p_output1[116]=20;
  p_output1[117]=20;
  p_output1[118]=20;
  p_output1[119]=20;
  p_output1[120]=21;
  p_output1[121]=21;
  p_output1[122]=21;
  p_output1[123]=21;
  p_output1[124]=21;
  p_output1[125]=21;
  p_output1[126]=1;
  p_output1[127]=2;
  p_output1[128]=23;
  p_output1[129]=44;
  p_output1[130]=65;
  p_output1[131]=86;
  p_output1[132]=1;
  p_output1[133]=3;
  p_output1[134]=24;
  p_output1[135]=45;
  p_output1[136]=66;
  p_output1[137]=87;
  p_output1[138]=1;
  p_output1[139]=4;
  p_output1[140]=25;
  p_output1[141]=46;
  p_output1[142]=67;
  p_output1[143]=88;
  p_output1[144]=1;
  p_output1[145]=5;
  p_output1[146]=26;
  p_output1[147]=47;
  p_output1[148]=68;
  p_output1[149]=89;
  p_output1[150]=1;
  p_output1[151]=6;
  p_output1[152]=27;
  p_output1[153]=48;
  p_output1[154]=69;
  p_output1[155]=90;
  p_output1[156]=1;
  p_output1[157]=7;
  p_output1[158]=28;
  p_output1[159]=49;
  p_output1[160]=70;
  p_output1[161]=91;
  p_output1[162]=1;
  p_output1[163]=8;
  p_output1[164]=29;
  p_output1[165]=50;
  p_output1[166]=71;
  p_output1[167]=92;
  p_output1[168]=1;
  p_output1[169]=9;
  p_output1[170]=30;
  p_output1[171]=51;
  p_output1[172]=72;
  p_output1[173]=93;
  p_output1[174]=1;
  p_output1[175]=10;
  p_output1[176]=31;
  p_output1[177]=52;
  p_output1[178]=73;
  p_output1[179]=94;
  p_output1[180]=1;
  p_output1[181]=11;
  p_output1[182]=32;
  p_output1[183]=53;
  p_output1[184]=74;
  p_output1[185]=95;
  p_output1[186]=1;
  p_output1[187]=12;
  p_output1[188]=33;
  p_output1[189]=54;
  p_output1[190]=75;
  p_output1[191]=96;
  p_output1[192]=1;
  p_output1[193]=13;
  p_output1[194]=34;
  p_output1[195]=55;
  p_output1[196]=76;
  p_output1[197]=97;
  p_output1[198]=1;
  p_output1[199]=14;
  p_output1[200]=35;
  p_output1[201]=56;
  p_output1[202]=77;
  p_output1[203]=98;
  p_output1[204]=1;
  p_output1[205]=15;
  p_output1[206]=36;
  p_output1[207]=57;
  p_output1[208]=78;
  p_output1[209]=99;
  p_output1[210]=1;
  p_output1[211]=16;
  p_output1[212]=37;
  p_output1[213]=58;
  p_output1[214]=79;
  p_output1[215]=100;
  p_output1[216]=1;
  p_output1[217]=17;
  p_output1[218]=38;
  p_output1[219]=59;
  p_output1[220]=80;
  p_output1[221]=101;
  p_output1[222]=1;
  p_output1[223]=18;
  p_output1[224]=39;
  p_output1[225]=60;
  p_output1[226]=81;
  p_output1[227]=102;
  p_output1[228]=1;
  p_output1[229]=19;
  p_output1[230]=40;
  p_output1[231]=61;
  p_output1[232]=82;
  p_output1[233]=103;
  p_output1[234]=1;
  p_output1[235]=20;
  p_output1[236]=41;
  p_output1[237]=62;
  p_output1[238]=83;
  p_output1[239]=104;
  p_output1[240]=1;
  p_output1[241]=21;
  p_output1[242]=42;
  p_output1[243]=63;
  p_output1[244]=84;
  p_output1[245]=105;
  p_output1[246]=1;
  p_output1[247]=22;
  p_output1[248]=43;
  p_output1[249]=64;
  p_output1[250]=85;
  p_output1[251]=106;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 126, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_midVelHS_vec.hh"

namespace Kinematics
{
namespace basic
{

void Js_midVelHS_vec_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

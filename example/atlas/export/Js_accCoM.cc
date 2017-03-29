/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:05 GMT-04:00
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
  p_output1[35]=1;
  p_output1[36]=1;
  p_output1[37]=1;
  p_output1[38]=1;
  p_output1[39]=1;
  p_output1[40]=1;
  p_output1[41]=1;
  p_output1[42]=1;
  p_output1[43]=1;
  p_output1[44]=1;
  p_output1[45]=1;
  p_output1[46]=1;
  p_output1[47]=1;
  p_output1[48]=1;
  p_output1[49]=1;
  p_output1[50]=1;
  p_output1[51]=1;
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
  p_output1[72]=2;
  p_output1[73]=2;
  p_output1[74]=2;
  p_output1[75]=2;
  p_output1[76]=2;
  p_output1[77]=2;
  p_output1[78]=2;
  p_output1[79]=2;
  p_output1[80]=2;
  p_output1[81]=2;
  p_output1[82]=2;
  p_output1[83]=2;
  p_output1[84]=2;
  p_output1[85]=2;
  p_output1[86]=2;
  p_output1[87]=2;
  p_output1[88]=2;
  p_output1[89]=2;
  p_output1[90]=2;
  p_output1[91]=2;
  p_output1[92]=2;
  p_output1[93]=2;
  p_output1[94]=2;
  p_output1[95]=2;
  p_output1[96]=2;
  p_output1[97]=2;
  p_output1[98]=2;
  p_output1[99]=2;
  p_output1[100]=2;
  p_output1[101]=2;
  p_output1[102]=2;
  p_output1[103]=2;
  p_output1[104]=2;
  p_output1[105]=2;
  p_output1[106]=2;
  p_output1[107]=3;
  p_output1[108]=3;
  p_output1[109]=3;
  p_output1[110]=3;
  p_output1[111]=3;
  p_output1[112]=3;
  p_output1[113]=3;
  p_output1[114]=3;
  p_output1[115]=3;
  p_output1[116]=3;
  p_output1[117]=3;
  p_output1[118]=3;
  p_output1[119]=3;
  p_output1[120]=3;
  p_output1[121]=3;
  p_output1[122]=3;
  p_output1[123]=3;
  p_output1[124]=3;
  p_output1[125]=3;
  p_output1[126]=3;
  p_output1[127]=3;
  p_output1[128]=3;
  p_output1[129]=3;
  p_output1[130]=3;
  p_output1[131]=3;
  p_output1[132]=3;
  p_output1[133]=3;
  p_output1[134]=3;
  p_output1[135]=3;
  p_output1[136]=3;
  p_output1[137]=3;
  p_output1[138]=3;
  p_output1[139]=3;
  p_output1[140]=3;
  p_output1[141]=3;
  p_output1[142]=3;
  p_output1[143]=3;
  p_output1[144]=3;
  p_output1[145]=3;
  p_output1[146]=3;
  p_output1[147]=3;
  p_output1[148]=3;
  p_output1[149]=3;
  p_output1[150]=3;
  p_output1[151]=3;
  p_output1[152]=3;
  p_output1[153]=3;
  p_output1[154]=3;
  p_output1[155]=3;
  p_output1[156]=3;
  p_output1[157]=3;
  p_output1[158]=3;
  p_output1[159]=3;
  p_output1[160]=3;
  p_output1[161]=3;
  p_output1[162]=5;
  p_output1[163]=6;
  p_output1[164]=7;
  p_output1[165]=8;
  p_output1[166]=9;
  p_output1[167]=10;
  p_output1[168]=11;
  p_output1[169]=12;
  p_output1[170]=13;
  p_output1[171]=14;
  p_output1[172]=15;
  p_output1[173]=16;
  p_output1[174]=17;
  p_output1[175]=18;
  p_output1[176]=19;
  p_output1[177]=20;
  p_output1[178]=21;
  p_output1[179]=26;
  p_output1[180]=27;
  p_output1[181]=28;
  p_output1[182]=29;
  p_output1[183]=30;
  p_output1[184]=31;
  p_output1[185]=32;
  p_output1[186]=33;
  p_output1[187]=34;
  p_output1[188]=35;
  p_output1[189]=36;
  p_output1[190]=37;
  p_output1[191]=38;
  p_output1[192]=39;
  p_output1[193]=40;
  p_output1[194]=41;
  p_output1[195]=42;
  p_output1[196]=43;
  p_output1[197]=47;
  p_output1[198]=48;
  p_output1[199]=49;
  p_output1[200]=50;
  p_output1[201]=51;
  p_output1[202]=52;
  p_output1[203]=53;
  p_output1[204]=54;
  p_output1[205]=55;
  p_output1[206]=56;
  p_output1[207]=57;
  p_output1[208]=58;
  p_output1[209]=59;
  p_output1[210]=60;
  p_output1[211]=61;
  p_output1[212]=62;
  p_output1[213]=63;
  p_output1[214]=4;
  p_output1[215]=5;
  p_output1[216]=6;
  p_output1[217]=7;
  p_output1[218]=8;
  p_output1[219]=9;
  p_output1[220]=10;
  p_output1[221]=11;
  p_output1[222]=12;
  p_output1[223]=13;
  p_output1[224]=14;
  p_output1[225]=15;
  p_output1[226]=16;
  p_output1[227]=17;
  p_output1[228]=18;
  p_output1[229]=19;
  p_output1[230]=20;
  p_output1[231]=21;
  p_output1[232]=25;
  p_output1[233]=26;
  p_output1[234]=27;
  p_output1[235]=28;
  p_output1[236]=29;
  p_output1[237]=30;
  p_output1[238]=31;
  p_output1[239]=32;
  p_output1[240]=33;
  p_output1[241]=34;
  p_output1[242]=35;
  p_output1[243]=36;
  p_output1[244]=37;
  p_output1[245]=38;
  p_output1[246]=39;
  p_output1[247]=40;
  p_output1[248]=41;
  p_output1[249]=42;
  p_output1[250]=44;
  p_output1[251]=46;
  p_output1[252]=47;
  p_output1[253]=48;
  p_output1[254]=49;
  p_output1[255]=50;
  p_output1[256]=51;
  p_output1[257]=52;
  p_output1[258]=53;
  p_output1[259]=54;
  p_output1[260]=55;
  p_output1[261]=56;
  p_output1[262]=57;
  p_output1[263]=58;
  p_output1[264]=59;
  p_output1[265]=60;
  p_output1[266]=61;
  p_output1[267]=62;
  p_output1[268]=63;
  p_output1[269]=4;
  p_output1[270]=5;
  p_output1[271]=6;
  p_output1[272]=7;
  p_output1[273]=8;
  p_output1[274]=9;
  p_output1[275]=10;
  p_output1[276]=11;
  p_output1[277]=12;
  p_output1[278]=13;
  p_output1[279]=14;
  p_output1[280]=15;
  p_output1[281]=16;
  p_output1[282]=17;
  p_output1[283]=18;
  p_output1[284]=19;
  p_output1[285]=20;
  p_output1[286]=21;
  p_output1[287]=25;
  p_output1[288]=26;
  p_output1[289]=27;
  p_output1[290]=28;
  p_output1[291]=29;
  p_output1[292]=30;
  p_output1[293]=31;
  p_output1[294]=32;
  p_output1[295]=33;
  p_output1[296]=34;
  p_output1[297]=35;
  p_output1[298]=36;
  p_output1[299]=37;
  p_output1[300]=38;
  p_output1[301]=39;
  p_output1[302]=40;
  p_output1[303]=41;
  p_output1[304]=42;
  p_output1[305]=45;
  p_output1[306]=46;
  p_output1[307]=47;
  p_output1[308]=48;
  p_output1[309]=49;
  p_output1[310]=50;
  p_output1[311]=51;
  p_output1[312]=52;
  p_output1[313]=53;
  p_output1[314]=54;
  p_output1[315]=55;
  p_output1[316]=56;
  p_output1[317]=57;
  p_output1[318]=58;
  p_output1[319]=59;
  p_output1[320]=60;
  p_output1[321]=61;
  p_output1[322]=62;
  p_output1[323]=63;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 162, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_accCoM.hh"

namespace Kinematics
{
namespace basic
{

void Js_accCoM_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

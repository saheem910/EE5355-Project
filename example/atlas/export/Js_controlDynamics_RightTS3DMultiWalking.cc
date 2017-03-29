/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:16 GMT-04:00
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
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
  p_output1[32]=2;
  p_output1[33]=2;
  p_output1[34]=2;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=3;
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=3;
  p_output1[49]=3;
  p_output1[50]=3;
  p_output1[51]=3;
  p_output1[52]=3;
  p_output1[53]=3;
  p_output1[54]=3;
  p_output1[55]=3;
  p_output1[56]=3;
  p_output1[57]=3;
  p_output1[58]=3;
  p_output1[59]=3;
  p_output1[60]=3;
  p_output1[61]=3;
  p_output1[62]=4;
  p_output1[63]=4;
  p_output1[64]=4;
  p_output1[65]=4;
  p_output1[66]=4;
  p_output1[67]=4;
  p_output1[68]=4;
  p_output1[69]=4;
  p_output1[70]=4;
  p_output1[71]=4;
  p_output1[72]=4;
  p_output1[73]=4;
  p_output1[74]=4;
  p_output1[75]=4;
  p_output1[76]=4;
  p_output1[77]=4;
  p_output1[78]=4;
  p_output1[79]=4;
  p_output1[80]=4;
  p_output1[81]=4;
  p_output1[82]=4;
  p_output1[83]=4;
  p_output1[84]=4;
  p_output1[85]=4;
  p_output1[86]=4;
  p_output1[87]=5;
  p_output1[88]=5;
  p_output1[89]=5;
  p_output1[90]=5;
  p_output1[91]=5;
  p_output1[92]=5;
  p_output1[93]=5;
  p_output1[94]=5;
  p_output1[95]=5;
  p_output1[96]=5;
  p_output1[97]=5;
  p_output1[98]=5;
  p_output1[99]=5;
  p_output1[100]=5;
  p_output1[101]=5;
  p_output1[102]=5;
  p_output1[103]=5;
  p_output1[104]=5;
  p_output1[105]=5;
  p_output1[106]=5;
  p_output1[107]=5;
  p_output1[108]=5;
  p_output1[109]=5;
  p_output1[110]=5;
  p_output1[111]=6;
  p_output1[112]=6;
  p_output1[113]=6;
  p_output1[114]=6;
  p_output1[115]=6;
  p_output1[116]=6;
  p_output1[117]=6;
  p_output1[118]=6;
  p_output1[119]=6;
  p_output1[120]=6;
  p_output1[121]=6;
  p_output1[122]=6;
  p_output1[123]=6;
  p_output1[124]=6;
  p_output1[125]=6;
  p_output1[126]=6;
  p_output1[127]=6;
  p_output1[128]=6;
  p_output1[129]=6;
  p_output1[130]=6;
  p_output1[131]=6;
  p_output1[132]=6;
  p_output1[133]=6;
  p_output1[134]=7;
  p_output1[135]=8;
  p_output1[136]=9;
  p_output1[137]=10;
  p_output1[138]=10;
  p_output1[139]=11;
  p_output1[140]=11;
  p_output1[141]=11;
  p_output1[142]=11;
  p_output1[143]=11;
  p_output1[144]=12;
  p_output1[145]=12;
  p_output1[146]=12;
  p_output1[147]=12;
  p_output1[148]=12;
  p_output1[149]=12;
  p_output1[150]=12;
  p_output1[151]=12;
  p_output1[152]=12;
  p_output1[153]=13;
  p_output1[154]=13;
  p_output1[155]=13;
  p_output1[156]=13;
  p_output1[157]=13;
  p_output1[158]=13;
  p_output1[159]=13;
  p_output1[160]=14;
  p_output1[161]=14;
  p_output1[162]=14;
  p_output1[163]=14;
  p_output1[164]=14;
  p_output1[165]=14;
  p_output1[166]=14;
  p_output1[167]=14;
  p_output1[168]=14;
  p_output1[169]=14;
  p_output1[170]=15;
  p_output1[171]=15;
  p_output1[172]=15;
  p_output1[173]=15;
  p_output1[174]=15;
  p_output1[175]=15;
  p_output1[176]=15;
  p_output1[177]=16;
  p_output1[178]=16;
  p_output1[179]=16;
  p_output1[180]=17;
  p_output1[181]=17;
  p_output1[182]=17;
  p_output1[183]=17;
  p_output1[184]=17;
  p_output1[185]=17;
  p_output1[186]=17;
  p_output1[187]=18;
  p_output1[188]=18;
  p_output1[189]=18;
  p_output1[190]=18;
  p_output1[191]=18;
  p_output1[192]=18;
  p_output1[193]=18;
  p_output1[194]=18;
  p_output1[195]=18;
  p_output1[196]=18;
  p_output1[197]=18;
  p_output1[198]=19;
  p_output1[199]=19;
  p_output1[200]=19;
  p_output1[201]=19;
  p_output1[202]=19;
  p_output1[203]=19;
  p_output1[204]=19;
  p_output1[205]=19;
  p_output1[206]=19;
  p_output1[207]=20;
  p_output1[208]=20;
  p_output1[209]=20;
  p_output1[210]=20;
  p_output1[211]=20;
  p_output1[212]=20;
  p_output1[213]=20;
  p_output1[214]=20;
  p_output1[215]=20;
  p_output1[216]=20;
  p_output1[217]=20;
  p_output1[218]=20;
  p_output1[219]=21;
  p_output1[220]=21;
  p_output1[221]=21;
  p_output1[222]=21;
  p_output1[223]=21;
  p_output1[224]=21;
  p_output1[225]=21;
  p_output1[226]=21;
  p_output1[227]=5;
  p_output1[228]=6;
  p_output1[229]=10;
  p_output1[230]=11;
  p_output1[231]=12;
  p_output1[232]=13;
  p_output1[233]=14;
  p_output1[234]=15;
  p_output1[235]=16;
  p_output1[236]=17;
  p_output1[237]=18;
  p_output1[238]=19;
  p_output1[239]=20;
  p_output1[240]=21;
  p_output1[241]=29;
  p_output1[242]=30;
  p_output1[243]=31;
  p_output1[244]=35;
  p_output1[245]=36;
  p_output1[246]=37;
  p_output1[247]=4;
  p_output1[248]=5;
  p_output1[249]=6;
  p_output1[250]=10;
  p_output1[251]=11;
  p_output1[252]=12;
  p_output1[253]=13;
  p_output1[254]=14;
  p_output1[255]=15;
  p_output1[256]=16;
  p_output1[257]=17;
  p_output1[258]=18;
  p_output1[259]=19;
  p_output1[260]=20;
  p_output1[261]=21;
  p_output1[262]=29;
  p_output1[263]=30;
  p_output1[264]=31;
  p_output1[265]=35;
  p_output1[266]=36;
  p_output1[267]=37;
  p_output1[268]=4;
  p_output1[269]=5;
  p_output1[270]=6;
  p_output1[271]=10;
  p_output1[272]=11;
  p_output1[273]=12;
  p_output1[274]=13;
  p_output1[275]=14;
  p_output1[276]=15;
  p_output1[277]=16;
  p_output1[278]=17;
  p_output1[279]=18;
  p_output1[280]=19;
  p_output1[281]=20;
  p_output1[282]=21;
  p_output1[283]=29;
  p_output1[284]=30;
  p_output1[285]=31;
  p_output1[286]=35;
  p_output1[287]=36;
  p_output1[288]=37;
  p_output1[289]=5;
  p_output1[290]=6;
  p_output1[291]=10;
  p_output1[292]=11;
  p_output1[293]=12;
  p_output1[294]=13;
  p_output1[295]=14;
  p_output1[296]=15;
  p_output1[297]=16;
  p_output1[298]=17;
  p_output1[299]=18;
  p_output1[300]=19;
  p_output1[301]=20;
  p_output1[302]=21;
  p_output1[303]=29;
  p_output1[304]=30;
  p_output1[305]=31;
  p_output1[306]=32;
  p_output1[307]=33;
  p_output1[308]=34;
  p_output1[309]=35;
  p_output1[310]=36;
  p_output1[311]=37;
  p_output1[312]=38;
  p_output1[313]=39;
  p_output1[314]=6;
  p_output1[315]=10;
  p_output1[316]=11;
  p_output1[317]=12;
  p_output1[318]=13;
  p_output1[319]=14;
  p_output1[320]=15;
  p_output1[321]=16;
  p_output1[322]=17;
  p_output1[323]=18;
  p_output1[324]=19;
  p_output1[325]=20;
  p_output1[326]=21;
  p_output1[327]=29;
  p_output1[328]=30;
  p_output1[329]=31;
  p_output1[330]=32;
  p_output1[331]=33;
  p_output1[332]=34;
  p_output1[333]=35;
  p_output1[334]=36;
  p_output1[335]=37;
  p_output1[336]=38;
  p_output1[337]=39;
  p_output1[338]=10;
  p_output1[339]=11;
  p_output1[340]=12;
  p_output1[341]=13;
  p_output1[342]=14;
  p_output1[343]=15;
  p_output1[344]=16;
  p_output1[345]=17;
  p_output1[346]=18;
  p_output1[347]=19;
  p_output1[348]=20;
  p_output1[349]=21;
  p_output1[350]=29;
  p_output1[351]=30;
  p_output1[352]=31;
  p_output1[353]=32;
  p_output1[354]=33;
  p_output1[355]=34;
  p_output1[356]=35;
  p_output1[357]=36;
  p_output1[358]=37;
  p_output1[359]=38;
  p_output1[360]=39;
  p_output1[361]=40;
  p_output1[362]=41;
  p_output1[363]=42;
  p_output1[364]=36;
  p_output1[365]=38;
  p_output1[366]=10;
  p_output1[367]=35;
  p_output1[368]=36;
  p_output1[369]=37;
  p_output1[370]=39;
  p_output1[371]=10;
  p_output1[372]=11;
  p_output1[373]=13;
  p_output1[374]=15;
  p_output1[375]=35;
  p_output1[376]=36;
  p_output1[377]=37;
  p_output1[378]=38;
  p_output1[379]=39;
  p_output1[380]=10;
  p_output1[381]=11;
  p_output1[382]=15;
  p_output1[383]=35;
  p_output1[384]=36;
  p_output1[385]=37;
  p_output1[386]=39;
  p_output1[387]=10;
  p_output1[388]=11;
  p_output1[389]=12;
  p_output1[390]=13;
  p_output1[391]=15;
  p_output1[392]=35;
  p_output1[393]=36;
  p_output1[394]=37;
  p_output1[395]=38;
  p_output1[396]=39;
  p_output1[397]=10;
  p_output1[398]=11;
  p_output1[399]=22;
  p_output1[400]=35;
  p_output1[401]=36;
  p_output1[402]=37;
  p_output1[403]=39;
  p_output1[404]=23;
  p_output1[405]=30;
  p_output1[406]=32;
  p_output1[407]=16;
  p_output1[408]=24;
  p_output1[409]=29;
  p_output1[410]=30;
  p_output1[411]=31;
  p_output1[412]=33;
  p_output1[413]=34;
  p_output1[414]=16;
  p_output1[415]=17;
  p_output1[416]=19;
  p_output1[417]=21;
  p_output1[418]=26;
  p_output1[419]=29;
  p_output1[420]=30;
  p_output1[421]=31;
  p_output1[422]=32;
  p_output1[423]=33;
  p_output1[424]=34;
  p_output1[425]=16;
  p_output1[426]=17;
  p_output1[427]=21;
  p_output1[428]=27;
  p_output1[429]=29;
  p_output1[430]=30;
  p_output1[431]=31;
  p_output1[432]=33;
  p_output1[433]=34;
  p_output1[434]=16;
  p_output1[435]=17;
  p_output1[436]=18;
  p_output1[437]=19;
  p_output1[438]=21;
  p_output1[439]=28;
  p_output1[440]=29;
  p_output1[441]=30;
  p_output1[442]=31;
  p_output1[443]=32;
  p_output1[444]=33;
  p_output1[445]=34;
  p_output1[446]=16;
  p_output1[447]=17;
  p_output1[448]=25;
  p_output1[449]=29;
  p_output1[450]=30;
  p_output1[451]=31;
  p_output1[452]=33;
  p_output1[453]=34;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 227, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_controlDynamics_RightTS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Js_controlDynamics_RightTS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE

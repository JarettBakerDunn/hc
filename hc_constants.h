/* 

Earth model constants 


*/
// now taken from earth model
#define HC_RE_KM 6371.0		/* radius(Earth) in [km] */


#define HC_TIMESCALE_YR 1e6	/* timescale [yr] */


#define HC_VISNOR 1e21		/* reference viscosity [Pas] */
#define HC_GACC 10.0e2		/* gravitational acceleration [cm/s2] */
#define HC_CAPITAL_G 6.6742e-11	/* gravitational constant [Nm2/kg2]*/

#define HC_SECYR  3.1556926e7	/* seconds/year  */

#define HC_AVG_DEN_MANTLE 4.4488 /* in g/cm^3 */
#define HC_AVG_DEN_CORE 11.60101


/* 

other modeling constants or initial values

*/
/* 

default constant scaling for input density file, use 0.01 for % 

*/

#define HC_DENSITY_SCALING 0.01

/* default dln v_s/dln rho density scaling */

#define HC_D_LOG_V_D_LOG_D 0.2


/* length scale factor for velocity I/O, in units of m 
   use 0.01, if input/output is to be in cm/yr
*/
#define HC_VEL_IO_SCALE 0.01

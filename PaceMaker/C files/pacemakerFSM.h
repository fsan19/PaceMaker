/*
 * pacemakerFSM.h
 *
 *  Created on: 17-Sep-2019
 *      Author: utsav
 */

#ifndef PACEMAKERFSM_H_
#define PACEMAKERFSM_H_

// Example timeout values in milliseconds

#define AVI_VALUE 300
#define AEI_VALUE 800
#define PVARP_VALUE 50
#define VRP_VALUE 150
#define LRI_VALUE 950
#define URI_VALUE 900


//Functions
void tick();
void reset();


// Inputs
extern char Vs;
extern char Rst;
extern char As;
//Timer timeouts
extern char VRPTO, LRITO, URITO, AVITO, PVARPTO, AEITO;

// Outputs
extern char Vp, Ap;


/*Timer signals*/
//VRP
extern char VRP_start;
//LRI
extern char LRI_start;
//URI
extern char URI_start;
//AVI
extern char AVI_start, AVI_stop;
//PVARP
extern char PVARP_start;
//AEI
extern char AEI_start, AEI_stop;


#endif /* PACEMAKERFSM_H_ */

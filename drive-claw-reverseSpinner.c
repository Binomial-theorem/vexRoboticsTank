#pragma config(Motor,  port2,           leftBack,      tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port3,           leftFront,     tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port4,           rightBack,     tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port5,           rightFront,    tmotorVex393_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port6,           LeftDrumSpinner, tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port7,           RightDrumSpinner, tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port8,           clawRotation,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           claw,          tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// coded mainly (all) by David T.
// robot built by Matteo P. and David T.
// Tank Drive

////////////////////////
//  Four drive motors:
//  Two on each side, on reversed on each side
//  Tank with Treads
//  one vexnet controller
// 	three drum spinners
//  one claw
////////////////////////

task main() // main code
{
	while(1 == 1) // will always run
	{
		while(vexRT[Btn6U] == 1)
		{
			// btn 6u to turn right
			motor[leftBack] = 127; //give motors speed
			motor[leftFront] = 127;
			motor[rightBack] = -1 * 127;
			motor[rightFront] = -1 * 127;
		}
		while(vexRT[Btn5U] == 1)
		{
			// btn 5u to turn left
			motor[leftBack] = -127; //give motors speed
			motor[leftFront] = -127;
			motor[rightBack] = 127;
			motor[rightFront] = 127;
		}

		// to move forward and backwards depending on input.
		// The speed is determined by how far joystick is pushed forward
		motor[leftBack] = vexRT[Ch2];
		motor[rightBack] = vexRT[Ch2];
		motor[leftFront] = vexRT[Ch2];
		motor[rightFront] = vexRT[Ch2];

		motor[clawRotation] = vexRT[Ch3];

		while(vexRT[Btn7L] == 1)
		{
			motor[claw] = 55;
		}
		while(vexRT[Btn7D] == 1)
		{
			motor[claw] = -55;
		}


		// get input and spin drum motor when needed
		if(vexRT[Btn6D] == 1)
		{
			motor[LeftDrumSpinner]=-123;
			motor[RightDrumSpinner]=123;
		}
		else
		{
			motor[LeftDrumSpinner] = 0;
			motor[RightDrumSpinner]= 0;
		}
	}
}

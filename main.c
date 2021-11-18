#pragma config(Motor,  port2,           leftBack,      tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port3,           leftFront,     tmotorVex393_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port4,           rightBack,     tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port5,           rightFront,    tmotorVex393_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port6,           weaponXaxis,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           weaponYaxis,   tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           launch,        tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "functions.c"

task main()
{
	while(1==1)
	{

		driveYaxis(vexRT[Ch2]);
		driveTurnRight(vexRT[Btn6U]);
		driveTurnLeft(vexRT[Btn5U]);
		motor[weaponXaxis] = vexRT[Ch4];
		motor[weaponYaxis] = vexRT[Ch3];
		launch(vexRT[Btn6D]);
	}




}

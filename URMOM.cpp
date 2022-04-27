#include<iostream>
#include<cmath>
#include <iomanip>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main() {
    int usedprog;//progpog
    char mainmenu;
    
    
    
    
    //For Beam Deflection
    int program; //For which calculator being used
    char recalc; //For using program again
    //For Case 1
    int mat; //For choosing material used
    int mod; //Gives the ability to change moe in the equations easily
    double frc; //Force
    double len; //Length
    double moe; //Modulus of elasticity
    double moi; //Moment of inertia
    double dmax; //Delta Max
    //For Case 2
    double base; 
    double height;
    double moment;
    int prec;
    std::cout << "Welcome to URMOM, Ultra-Refined Machine Operated Mathmatics.\n";
    std::cout << "What would you like the decimal precision to be?:";
    std::cin >> prec;
    std::cout << std::fixed << std::setprecision(prec); //No scientific notation pog
    
    
    //For Interplanitary Weight Calculator
    srand (time(0));
    double weight;
    int planet;
    char repeat;
    bool pluto = false;
    int randballs = (rand() % 10 + 1);
  
    //For Quadratic Solver
    double a;
    double b;
    double c;
    int x;
  
    //For Gravity Calculator
    double mass1;
    double mass2;
    double dist;
  
  mainmenupog:
    std::cout << "Which Overall Program would you like to use?\n[1] Beam Deflection\n[2] Interplanitary Weight Calculator\n[3] Quadratic Solver\n[4] Gravity Calculator\n";
    notoption:
    std::cin >> usedprog;
    switch(usedprog) {
  case 1: {
   restart2:
    std::cout << "Which Program would you like to use?\n[1] Delta Max\n[2] Moment of inertia\n[3] Force\n[4] Modulus Of Elasticity\n";
   restart:
    std::cin >> program;
    switch(program) {
  case 1: {
    std::cout << "What is the force being applied?:";
    std::cin >> frc;
    std::cout << "What is the length of the beam?:";
    std::cin >> len;
   bonk:
    std::cout << "What is the material?\n[1] Steel\n[2] Oak\n[3] Pine\n[4] Tooth Enamel\n[5] Osmium\n[6] Plutonium\n[7] Spongy Bone\n[8] Custom\n";
    std::cin >> mat;
    switch(mat) {
  case 1: {
    std::cout << "Chose Steel\n";
    mod = 29000000;
    goto momentofinertia;
    break;
  case 2:
    std::cout << "Chose Oak\n";
    mod = 1590000;
    goto momentofinertia;
    break;
  case 3:
    std::cout << "Chose Pine\n";
    mod = 1300000;
    goto momentofinertia;
    break;
  case 4:
    std::cout << "Chose Tooth Enamel\n";
    mod = 12000000;
    goto momentofinertia;
    break;
  case 5:
    std::cout << "Chose Osmium\n";
    mod = 79770000;
    goto momentofinertia;
    break;
  case 6:
    std::cout << "Chose Plutonium\n";
    mod = 14000000;
    goto momentofinertia;
    break;
  case 7:
    std::cout << "Chose Spongy Bone\n";
    mod = 11000000;
    goto momentofinertia;
    break;
  case 8:
    std::cout << "Input your modulus of elasticity:";
    std::cin >> mod;
    goto momentofinertia;
    break;
default:
    std::cout << "That's not an option, try again.";
    goto bonk;
    break;
    }
    return 0;
   momentofinertia:
    std::cout << "What is the moment of inertia?:";
    std::cin >> moi;
    std::cout << "Calculating Beam Deflection...\n";
    dmax = frc*(pow( len, 3))/(48*mod*moi);
    std::cout << "The beam deflection is " << dmax << "\n";
    std::cout << "Would you like to use the calculator again? [y/n]\n";
    std::cin >> recalc;
  if (recalc == 'y' || recalc == 'y'){
     goto restart2;
    }
  else {
    std::cout << "Do you want to go back to the main menu? [y/n]\n";
    std::cin >> mainmenu;
  if (mainmenu == 'y' || mainmenu == 'Y'){
      goto mainmenupog;
    }
  else {
    std::cout << "ending program...";
      system("pause");
    }
    }
    }
    break;
  case 2: {
    std::cout << "What is the length of the base?:";
    std::cin >> base;
    std::cout << "What is the height of the beam:";
    std::cin >> height;
    moment = base*pow( height, 3)/12;
    std::cout << "moment of inertia is:" << moment << "\n";
    std::cout << "cross sectional area is:" << base*height << "\n";
    std::cout << "Would you like to use the calculator again? [y/n]\n";
    std::cin >> recalc;
    if (recalc == 'y' || recalc == 'y'){
     goto restart2;
    }
    else {
    std::cout << "Do you want to go back to the main menu? [y/n]\n";
    std::cin >> mainmenu;
  if (mainmenu == 'y' || mainmenu == 'Y'){
      goto mainmenupog;
    }
  else {
    std::cout << "ending program...";
      system("pause");
    }
    }
    }
  break;
  case 3: {
    std::cout << "What is your modulus of elasticity?:";
    std::cin >> moe;
    std::cout << "What is your moment of inertia?:";
    std::cin >> moi;
    std::cout << "What is the length?:";
    std::cin >> len;
    std::cout << "What is the delta max?:";
    std::cin >> dmax;
    std::cout << "Calculating force...\n";
      frc = (48*moe*moi*dmax)/pow(len,3);
    std::cout << "The force is " << frc << "lbs\n";
    std::cout << "Would you like to use the calculator again? [y/n]\n";
    std::cin >> recalc;
  if (recalc == 'y' || recalc == 'y'){
     goto restart2;
    }
  else {
    std::cout << "Do you want to go back to the main menu? [y/n]\n";
    std::cin >> mainmenu;
  if (mainmenu == 'y' || mainmenu == 'Y'){
      goto mainmenupog;
    }
  else {
    std::cout << "ending program...";
      system("pause");
    }
    }
    }
  break;
  case 4: {
     std::cout << "What is the force?:";
     std::cin >> frc;
     std::cout << "What is the length?:";
     std::cin >> len;
     std::cout << "What is the Delta Max?:";
     std::cin >> dmax;
     std::cout << "What is the moment of inertia?:";
     std::cin >> moi;
     moe = (frc * pow(len,3))/ (48*dmax*moi);
     std::cout << "The Modulus of Elasticity is " << moe << "psi.\n";
      std::cout << "Would you like to use the calculator again? [y/n]\n";
    std::cin >> recalc;
  if (recalc == 'y' || recalc == 'y'){
     goto restart2;
  }
  else {
    std::cout << "Do you want to go back to the main menu? [y/n]\n";
    std::cin >> mainmenu;
  if (mainmenu == 'y' || mainmenu == 'Y'){
      goto mainmenupog;
  }
  else {
    std::cout << "ending program...";
      system("pause");
  }
  }
  }
  default :
    std::cout << "That's not an option, try again.\n";
    goto restart;
        
  }
  }
  }
  case 2: {
  if (randballs == 10) {
      std::cout << "Sup bitch\n";
  }
  else {
    std::cout << "Interplanetary Weight Calculator\n";
  }
  unknown:
    std::cout << "what's your Earth Weight?:";
    std::cin >> weight;
  if (weight == 420.69) {
      pluto = true;
  } 
  unknown2:
  std::cout << "Now, what planet will you be fighting on?\n";

    std::cout << "[1] Mercury\n[2] Venus\n[3] Mars\n[4] Jupiter\n[5] Saturn\n[6] Uranus\n[7] Neptune\n";
  if (pluto) {
    std::cout << "[8] Pluto\n";}

    std::cin >> planet;
  switch(planet) {
  case 1:
    std::cout << "Your weight is " << weight*.38 << "lbs on Mercury.\n";
    break;
  case 2:
    std::cout << "Your weight is " << weight*.91 << "lbs on Venus.\n";
    break;
  case 3:
    std::cout << "Your weight is " << weight*.38 << "lbs on Mars.\n";
    break;
  case 4:
    std::cout << "Your weight is " << weight*2.34 << "lbs on Jupiter.\n";
    break;
  case 5:
    std::cout << "Your weight is " << weight*1.06 << "lbs on Saturn.\n";
    break;
  case 6:
    std::cout << "Your weight is " << weight*.92 << "lbs on Uranus.\n";
    break;
  case 7:
    std::cout << "Your weight is " << weight*1.19 << "lbs on Neptune.\n";
    break;
  case 8:
    if (planet == 8 && pluto == true) {
    std::cout << "Your weight is " << weight*.063 << "lbs on Pluto.\n";
   break;
   }
 default :
    std::cout << "That's not an option. Try again...\n";
    goto unknown2;
  }
    std::cout << "Do you want to find another? [y/n] :";
    std::cin >> repeat;
 if (repeat == 'y' || repeat == 'Y') {goto unknown;}
 else {
    std::cout << "Do you want to go back to the main menu? [y/n]\n";
    std::cin >> mainmenu;
 if (mainmenu == 'y' || mainmenu == 'Y'){
      goto mainmenupog;
    }
 else {
    std::cout << "ending program...";
      system("pause");
    }
    }
break;
}

case 3: {
  borgir:
// Begins asking for variables to define them
    std::cout << "What is variable A? ";
    std::cin >> a;
    std::cout << "What is variable B? ";
    std::cin >> b;
    std::cout << "What is variable C? ";
    std::cin >> c;
    
    //Calculates using given variables
    std::cout << "Calculating Quadradic Formula...\n";
    double sqrtnum = sqrt(pow(b, 2) - (4 * a * c));
  if (sqrtnum != sqrtnum) {
        std::cout << "Square root was negative, could not compute.\n";
    std::cout << "Would you like to use the calculator again? [y/n]\n";
    std::cin >> recalc;
    if (recalc == 'y' || recalc == 'y'){
     goto borgir;
    }
  else {
    std::cout << "Do you want to go back to the main menu? [y/n]\n";
    std::cin >> mainmenu;
  if (mainmenu == 'y' || mainmenu == 'Y'){
      goto mainmenupog;
    }
  else {
    std::cout << "ending program...";
      system("pause");
    }
    }
    }
  else {
    // std::cout << sqrtnum << "\n";
    double bneg = (b * -1) - sqrtnum;
        // std::cout << bneg << "\n";
    double bpos = (b * -1) + sqrtnum;
        // std::cout << bpos << "\n";
    double divneg = bneg / (2 * a);
        // std::cout << divneg << "\n";
    double divpos = bpos / (2 * a);
        // std::cout << divpos << "\n";
    std::cout << "answers:\n";
    std::cout << divneg << "\n" << divpos << "\n";
    std::cout << "Would you like to use the calculator again? [y/n]\n";
    std::cin >> recalc;
    if (recalc == 'y' || recalc == 'y'){
     goto borgir;
    }
  else {
    std::cout << "Do you want to go back to the main menu? [y/n]\n";
    std::cin >> mainmenu;
  if (mainmenu == 'y' || mainmenu == 'Y'){
      goto mainmenupog;
    }
  else {
    std::cout << "ending program...";
      system("pause");
    }
    }
    }
break;
    }

case 4:{
    //didn't like having 6.67430*10 as the base for the pow()
    double bonesauce = pow(10, -11);
    double gconst = 6.67430*bonesauce;
  gurger:
    //Object 1 Mass
    std::cout << "Mass of Object 1 in kilograms:";
    std::cin >> mass1;
    //Object 2 Mass
    std::cout << "Mass of object 2 in kilograms:";
    std::cin >> mass2;
    //Distance
    std::cout << "Distance Between Object 1 & Object 2 in meters:";
    std::cin >> dist;
    //Math Pog
    double fnew = (gconst*mass1*mass2)/pow( dist, 2);
    std::cout << "Force in newtons:" << fnew << "\n";
    std::cout << "Would you like to use the calculator again? [y/n]\n";
    std::cin >> recalc;
  if (recalc == 'y' || recalc == 'y'){
     goto gurger;
    }
  else {
    std::cout << "Do you want to go back to the main menu? [y/n]\n";
    std::cin >> mainmenu;
  if (mainmenu == 'y' || mainmenu == 'Y'){
      goto mainmenupog;
    }
  else {
    std::cout << "ending program...";
      system("pause");
    }
    }
    }
  default: {
    std::cout << "That's not an option, try again.";
    goto notoption;
    }
    }
    }

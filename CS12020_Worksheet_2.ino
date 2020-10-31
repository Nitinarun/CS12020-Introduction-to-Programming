void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

//The code below is for declaring and storing the data for the Swim times.
Serial.println("Please enter the number of hours for the swim:");
int swimHours;
while (!Serial.available()){
  //wait for a user to enter the value;
}
swimHours =Serial.parseInt();
  
Serial.println("Please enter the number of minutes for the swim:");
int swimMinutes;
while (!Serial.available()){
  //wait for a user to enter the value;
}
swimMinutes =Serial.parseInt();

Serial.println("Please enter the number of seconds for the swim:");
int swimSeconds;
while (!Serial.available()){
  //wait for a user to enter the value;
}
swimSeconds =Serial.parseInt();

//The code below is for declaring and storing the data for the Bike times.
Serial.println("Please enter the number of hours for the bike:");
int bikeHours;
while (!Serial.available()){
  //wait for a user to enter the value;
}
bikeHours =Serial.parseInt();

Serial.println("Please enter the number of minutes for the bike:");
int bikeMinutes;
while (!Serial.available()){
  //wait for a user to enter the value;
}
bikeMinutes =Serial.parseInt();

Serial.println("Please enter the number of seconds for the bike:");
int bikeSeconds;
while (!Serial.available()){
  //wait for a user to enter the value;
}
bikeSeconds =Serial.parseInt();

//The code below is for declaring and storing the date for the Run times.
Serial.println("Please enter the number of hours for the run:");
int runHours;
while (!Serial.available()){
  //wait for a user to enter the value;
}
runHours =Serial.parseInt();

Serial.println("Please enter the number of minutes for the run:");
int runMinutes;
while (!Serial.available()){
  //wait for a user to enter the value;
}
runMinutes =Serial.parseInt();

Serial.println("Please enter the number of seconds for the run:");
int runSeconds;
while (!Serial.available()){
  //wait for a user to enter the value;
}
runSeconds =Serial.parseInt();

// Display the times in terms of Hours:Minutes:Seconds for Swim, Bike, Run. 
Serial.print(swimHours); Serial.print(":"); Serial.print(swimMinutes); Serial.print(":"); Serial.println(swimSeconds);
Serial.print(bikeHours); Serial.print(":"); Serial.print(bikeMinutes); Serial.print(":"); Serial.println(bikeSeconds);
Serial.print(runHours); Serial.print(":"); Serial.print(runMinutes); Serial.print(":"); Serial.println(runSeconds);

// This is doing the arithmetics for the times in terms of Hours, Minutes & Seconds
int Hours = swimHours + bikeHours + runHours;
int Minutes = swimMinutes + bikeMinutes + runMinutes;
int minutesInHours = Minutes/60;
int Seconds = swimSeconds + bikeSeconds + runSeconds;
int secondsInMinutes = Seconds/60;
int totalHours = Hours + minutesInHours;
int totalMinutes = (Minutes + secondsInMinutes)%60;
int totalSeconds = Seconds%60;

Serial.print("The Total time taken for this athelete is: "); 
Serial.print(totalHours); Serial.print(":"); Serial.print(totalMinutes); Serial.print(":"); Serial.print(totalSeconds);

}

void loop() {
  // put your main code here, to run repeatedly:
 
}

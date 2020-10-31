void setup() {
  // put your setup code here, to run once:
//Get the arduino setup
Serial.begin(9600);
//Storing all input values for hours, minutes, seconds.
const int datavalue = 4;

//Reading the input for swimming
//Reading hours for swimming
Serial.println("Please enter the number of hours for the swim:");
int swimHours;
while (!Serial.available()){
  //wait for a user to enter the value;
}
swimHours =Serial.parseInt();
int SwimHoursInSeconds = swimHours * 3600;

//Reading minutes for swimming
Serial.println("Please enter the number of minutes for the swim:");
int swimMinutes;
while (!Serial.available()){
  //wait for a user to enter the value;
}
swimMinutes =Serial.parseInt();
int SwimMinutesInSeconds = swimMinutes *60;

//Reading seconds for swimming
Serial.println("Please enter the number of seconds for the swim:");
int swimSeconds;
while (!Serial.available()){
  //wait for a user to enter the value;
}
swimSeconds =Serial.parseInt();
int totalSwimmingInSeconds = SwimHoursInSeconds + SwimMinutesInSeconds + swimSeconds;

Serial.print("Total Swimming time in Seconds: ");
Serial.println(totalSwimmingInSeconds);

//Reading the input for Biking
//Reading hours for biking 
Serial.println("Please enter the number of hours for the bike:");
int bikeHours;
while (!Serial.available()){
  //wait for a user to enter the value;
}
bikeHours =Serial.parseInt();
int BikeHoursInSeconds = bikeHours *3600;

//Reading minutes for biking 
Serial.println("Please enter the number of minutes for the bike:");
int bikeMinutes;
while (!Serial.available()){
  //wait for a user to enter the value;
}
bikeMinutes =Serial.parseInt();
int BikeMinutesInSeconds = bikeMinutes * 60;

//Reading seconds for biking 
Serial.println("Please enter the number of seconds for the bike:");
int bikeSeconds;
while (!Serial.available()){
  //wait for a user to enter the value;
}
bikeSeconds =Serial.parseInt();
int totalBikingInSeconds = BikeHoursInSeconds + BikeMinutesInSeconds + bikeSeconds; 

Serial.print("Total Biking time in Seconds: ");
Serial.println(totalBikingInSeconds);

//Reading input for running
//Reading hours for running
Serial.println("Please enter the number of hours for the run:");
int runHours;
while (!Serial.available()){
  //wait for a user to enter the value;
}
runHours =Serial.parseInt();
int RunHoursInSeconds = runHours * 3600;

//Reading minutes for running
Serial.println("Please enter the number of minutes for the run:");
int runMinutes;
while (!Serial.available()){
  //wait for a user to enter the value;
}
runMinutes =Serial.parseInt();
int RunMinutesInSeconds = runMinutes *60;

//Reading seconds for running
Serial.println("Please enter the number of seconds for the run:");
int runSeconds;
while (!Serial.available()){
  //wait for a user to enter the value;
}
runSeconds =Serial.parseInt();
int totalRunningInSeconds = RunHoursInSeconds + RunMinutesInSeconds + runSeconds;

Serial.print("Total Running time in Seconds: ");
Serial.println(totalRunningInSeconds);

//Storing data into arrays
int time_Swimming[datavalue] = {SwimHoursInSeconds, SwimMinutesInSeconds, swimSeconds, totalSwimmingInSeconds};
int time_Biking[datavalue] = {BikeHoursInSeconds, BikeMinutesInSeconds, bikeSeconds, totalBikingInSeconds };
int time_Running[datavalue] = {RunHoursInSeconds, RunMinutesInSeconds, runSeconds, totalRunningInSeconds };

long time_Total = totalSwimmingInSeconds + totalBikingInSeconds + totalRunningInSeconds;
long timeTotal[datavalue] = {totalSwimmingInSeconds, totalBikingInSeconds, totalRunningInSeconds, time_Total};
String names[datavalue] = {"Swim :","Bike: ","Run: ","Total: "};

// Arithmetics to find the Total Time in hours 
for (int i = 0; i < datavalue; i++){
Serial.print(names[i]);
Serial.print(timeTotal[i]/3600);
Serial.print(":");
Serial.print((timeTotal[i]%3600)/60);
Serial.print(":");
Serial.println((timeTotal[i]/1)% 60);
}
}
void loop() {
  // put your main code here, to run repeatedly:

}

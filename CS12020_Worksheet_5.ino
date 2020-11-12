#define DEBUG 
//Declaring the constants as global variables
const int HourstoSeconds = 3600;
const int MinutestoSeconds = 60;
const int seconds = 60;
const int dataValue =4;
int atheleteNum = 0;
long fastestAtheleteTime = 2147483647;
//---------------------------------------------------------------
// Calling the function 
int input(String inputTimes){
  Serial.println(inputTimes);
    while (!Serial.available()){
    ;
  }
  int result;
  result = Serial.parseInt(); 
  return result;
}
//----------------------------------------------------------------
void setup() {
  // put your setup code here, to run once:
  // Setting up the Serial port 
  Serial.begin(9600);
  //Hours,Minutes,Seconds for Swimming times
   long hour_S;
   while(hour_S >= 0){
     hour_S = input("Please enter Hours for Swim: ");
     if (hour_S < 0){
      break; 
#ifdef DEBUG
      Serial.println("Swimming hours were neg");
#endif
    } else {
#ifdef DEBUG
      Serial.println("Swimming hours not neg");
#endif
    }
    long minutes_S;
    minutes_S = input("Please enter Minutes for Swim: ");
  
    long seconds_S;
    seconds_S = input("Please enter Seconds for Swim: ");
  
    //Hours,Minutes,Seconds for Running times
    long hour_R;
    hour_R = input("Please enter Hours for Run: ");
 
    long minutes_R;
    minutes_R = input("Please enter Minutes for Run: ");
    
    long seconds_R;
    seconds_R = input ("Please enter seconds for Run: ");
    
    //Hours,Minutes,Seconds for Biking times
    long hour_B;
    hour_B = input("Please enter Hours for Bike: ");
    
    long minutes_B;
    minutes_B = input("Please enter Minutes for Bike: ");
    
    long seconds_B;
    seconds_B = input ("Please enter seconds for Bike: ");
//---------------------------------------------------------------------------------------------------
//Calculating total times for each event 
long totalswimTimes = ((hour_S * HourstoSeconds) + (minutes_S * MinutestoSeconds) + seconds_S);
long totalrunTimes = ((hour_R * HourstoSeconds) + (minutes_R * MinutestoSeconds) + seconds_R);
long totalbikeTimes = ((hour_B * HourstoSeconds) + (minutes_B * MinutestoSeconds) + seconds_B);

long time_Total = totalswimTimes + totalrunTimes + totalbikeTimes;
long timeTotal[dataValue] = {totalswimTimes, totalrunTimes, totalbikeTimes, time_Total};
String names[dataValue] = {"Swim: ","Run: ","Bike: ","Total Time: "};
//---------------------------------------------------------------------------------------------------
// Arithmetics to find the Total Time in hours
for (int i = 0; i < dataValue; i++){
Serial.print(names[i]);
Serial.print(timeTotal[i]/HourstoSeconds);
Serial.print(":");
Serial.print((timeTotal[i]%HourstoSeconds)/MinutestoSeconds);
Serial.print(":");
Serial.println((timeTotal[i]%HourstoSeconds)%MinutestoSeconds);
   }
   if (time_Total < fastestAtheleteTime ){
    fastestAtheleteTime = time_Total;
    atheleteNum++;
    Serial.println("New Athelete");
    }
   }
//Showing the fastest Athelete and their times 
Serial.print("Fastest Time Athlete Number: ");
Serial.println(atheleteNum);
Serial.println("Time: ");
Serial.print(fastestAtheleteTime / HourstoSeconds);
Serial.print(":");
Serial.print((fastestAtheleteTime % HourstoSeconds ) / seconds);
Serial.print(":");
Serial.println((fastestAtheleteTime / 1) % MinutestoSeconds);
}
void loop(){
  // put your main code here, to run repeatedly:

}

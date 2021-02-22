function main(){
   putBeeper();
   while(frontIsClear()) {
      move();
      turnLeft();
      move();
      putBeeper();
      turnRight();
   } 
   repeat(3){
      movetoWall();
      while(frontIsClear()) {
         move();
   }
}
   turnRight();
   putBeeper();
   while(frontIsClear()) {
      move();
      turnRight();
      move();
      putBeeper();
      turnLeft();
   }     
}
function turnRight(){
   turnLeft();
   turnLeft();
   turnLeft();
}
function turnAround(){
   turnLeft();
   turnLeft();
}
function movetoWall(){
   if(frontIsBlocked()){
      turnRight();
      move();
   }
}

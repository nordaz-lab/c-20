function main(){
   putBeeper();
   multipleColumn();
   fillWorld();
}
function multipleColumn() {
   if(frontIsBlocked()) {
      turnLeft();
      fillLine();
   }
}
function fillWorld() {
   while(leftIsClear()) {
      fillLine();
      nextRow();
      fillLine();
      
      turnRight();
      if(frontIsBlocked()) {
         turnRight();
      } 
      else {
         nextRow();
      }
   }
   if(beepersPresent()) {
      fillLine();
   }
}
function fillLine() { 
   while(frontIsClear()) {
      move();
      if(frontIsClear()) {
         move();
         putBeeper();
      }
   }
}
function turnRight() {
   turnLeft();
   turnLeft();
   turnLeft();
}
function nextRow() {
   if(beepersPresent()) {
      moveUpRow();
      move();
      putBeeper();
   } 
   else {
      moveUpRow();
      putBeeper();
   }
}
function moveUpRow() {
   if(frontIsBlocked()) {
      turnLeft();
      move();
      turnLeft();
   } 
   else {
      move();
      turnRight();
   }
}


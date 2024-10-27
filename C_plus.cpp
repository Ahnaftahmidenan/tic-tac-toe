#include<iostream>
#include<ctime>
#include<conio.h>
void draw(std::string *space);
void computer(std::string *space);
void Player(std::string *space){
    int player;
    std::cout << "\n";
    std::cout << "Enter index of box(1-9): ";
    std::cin >> player;
    if(player > 0 && player < 10){
        if(space[player - 1] == " "){
            space[player - 1] = "X";
        
                
        }
        else{
                std::cout << "The squre is already filled" << "\n";
               
        } 
    }
    else{
         std::cout << "Please enter between 1 and 9" << std::endl;
           
    }
}
bool Winner(std::string *space){
    if(space[0] != " " && space[0] == space[1] && space[1] == space[2]){
        space[0] == "X" ? std::cout << "You won\n" : std::cout << "You loss\n";
        return false;
    }
  else if(space[3] != " " && space[3] == space[4] && space[4] == space[5]){
        space[3] == "X" ? std::cout << "You won\n" : std::cout << "You loss\n";
        return false;
    }
   else if(space[6] != " " && space[6] == space[7] && space[7] == space[8]){
        space[6] == "X" ? std::cout << "You won\n" : std::cout << "You loss\n";
        return false;
    }
   else if(space[0] != " " && space[0] == space[3] && space[3] == space[6]){
        space[0] == "X" ? std::cout << "You won\n" : std::cout << "You loss\n";
        return false;
    }
   else if(space[1] != " " && space[1] == space[4] && space[4] == space[7]){
        space[1] == "X" ? std::cout << "You won\n" : std::cout << "You loss\n";
        return false;
    }
   else if(space[2] != " " && space[2] == space[5] && space[5] == space[8]){
        space[2] == "X" ? std::cout << "You won\n" : std::cout << "You loss\n";
        return false;
    }
   else if(space[0] != " " && space[0] == space[4] && space[4] == space[8]){
        space[0] == "X" ? std::cout << "You won\n" : std::cout << "You loss\n";
        return false;
    }
   else if(space[2] != " " && space[2] == space[4] && space[4] == space[6]){
        space[2] == "X" ? std::cout << "You won\n" : std::cout << "You loss\n";
        return false;
    }
    else{
        return true;
    }

}
int main(){
	std::string space[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
 
    draw(space);
    bool running = true;
    int count = 0;
    while(true){
	
        Player(space);
        draw(space);
	count += 1;
	if(count >= 9){
		std::cout << " It is a tie" << std::endl;
		break;
	}
        running = Winner(space);
        
        if(!running){
            break;
        }
        computer(space);
        draw(space);
	count += 1;
        running = Winner(space);
        if(!running){
            break;
        }
      
    }
    getch();
    return 0;
}
void draw(std::string *spaces){
    std::cout << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << std::endl;
}
void computer(std::string *spaces){
    int choice;
    srand(time(0));
    while(true){
        if(spaces[0] != " " && spaces[0] == spaces[1] && spaces[2] == " "){
		choice = 2;
	}
	else if(spaces[1] != " " && spaces[1] == spaces[2] && spaces[0] == " "){
		choice = 0;
	}
	else if(spaces[0] != " " && spaces[0] == spaces[2] && spaces[1] == " "){
		choice = 1;
	}
	else if(spaces[0] != " " && spaces[0] == spaces[3] && spaces[6] == " "){
		choice = 6;
	}
	else if(spaces[0] != " " && spaces[0] == spaces[6] && spaces[3] == " "){
		choice = 3;
	}
	else if(spaces[3] != " " && spaces[3] == spaces[6] && spaces[0] == " "){
		choice = 0;
	}
	else if(spaces[3] != " " && spaces[3] == spaces[4] && spaces[5] == " "){
		choice = 5;
	}
	else if(spaces[3] != " " && spaces[3] == spaces[5] && spaces[4] == " "){
		choice = 4;
	}
	else if(spaces[4] != " " && spaces[4] == spaces[5] && spaces[3] == " "){
		choice = 3;
	}
	else if(spaces[6] != " " && spaces[6] == spaces[7] && spaces[8] == " "){
		choice = 8;
	}
	else if(spaces[7] != " " && spaces[7] == spaces[8] && spaces[6] == " "){
		choice = 6;
	}
	else if(spaces[6] != " " && spaces[6] == spaces[8] && spaces[7] == " "){
		choice = 7;
	}
	else if(spaces[1] != " " && spaces[1] == spaces[4] && spaces[7] == " "){
		choice = 7;
	}
	else if(spaces[4] != " " && spaces[4] == spaces[7] && spaces[1] == " "){
		choice = 1;
	}
	else if(spaces[1] != " " && spaces[1] == spaces[7] && spaces[4] == " "){
		choice = 4;
	}
	else if(spaces[2] != " " && spaces[2] == spaces[5] && spaces[8] == " "){
		choice = 8;
	}
	else if(spaces[5] != " " && spaces[5] == spaces[8] && spaces[2] == " "){
		choice = 2;
	}
	else if(spaces[2] != " " && spaces[2] == spaces[8] && spaces[5] == " "){
		choice = 5;
	}
	else if(spaces[0] != " " && spaces[0] == spaces[4] && spaces[8] == " "){
		choice = 8;
	}
	else if(spaces[0] != " " && spaces[0] == spaces[8] && spaces[4] == " "){
		choice = 4;
	}
	else if(spaces[4] != " " && spaces[4] == spaces[8] && spaces[0] == " "){
		choice = 0;
	}
	else if(spaces[2] != " " && spaces[2] == spaces[4] && spaces[6] == " "){
		choice = 6;
	}
	else if(spaces[2] != " " && spaces[2] == spaces[6] && spaces[4] == " "){
		choice = 4;
	}
	else if(spaces[4] != " " && spaces[4] == spaces[6] && spaces[2] == " "){
		choice = 2;
	}
	else{
		
		choice = rand() % 9;
	}
        if(spaces[choice] == " "){
	    
            spaces[choice] = "O";
            break;
        }
    }
}

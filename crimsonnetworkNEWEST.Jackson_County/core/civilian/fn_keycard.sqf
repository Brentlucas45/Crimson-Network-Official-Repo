if(life_inv_keycard < 1) exitWith { hint "You need a key card to sign in";};
player setVariable ["copLevel",1,true]; 
if(life_inv_keycard > 0) exitwith { hint "Sign in succesful";};

if (!life_callBackup) exitWith {hint "You can not do that now!"};
 
_backupTime = 60; 
[player,_backupTime] remoteExec ["life_fnc_backup",west];  
life_callBackup = false;  
sleep _backupTime + 320;  
life_callBackup = true;  
hint format ["%1, You can call Backup again!",name player];
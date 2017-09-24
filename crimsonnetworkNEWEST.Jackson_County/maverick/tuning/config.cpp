/*
	Author: Maverick Applications
	Tuning shop for Life
*/

class Maverick_Tuning
{

	// Map configs
	class Altis
	{
		class Camera
		{
			pos[] = {23675.1,17200.1,2.00144};
			target[] = {23671,17199.4,2.40144};
		};
		class Vehicle
		{
			pos[] = {23669.4,17200.8,1.15015};
			dir = 124.622;
		};
		class Building
		{
			type = "Land_i_Shed_Ind_F";
			pos[] = {23664.2,17196.9,1};
			dir = 0;
		};
	};

	class Tanoa
	{
		class Camera
		{
			pos[] = {1248.85,7316.04,1.78436};
			target[] = {1245.08,7315.57,2.24174};
		};
		class Vehicle
		{
			pos[] = {1243,7317.14,0.774192};
			dir = 127.67;
		};
		class Building
		{
			type = "Land_i_Shed_Ind_F";
			pos[] = {1238.47,7312.86,1};
			dir = 0;
		};
	};

	class Vehicles
	{
		class Offroad_01_base_F
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			}
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class CG_Lamborghini_Aventador_Blue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lambo_veneno_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lambo_veneno_bleu
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lambo_veneno_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lambo_veneno_vert
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lambo_veneno_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lambo_veneno_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lambo_veneno_white
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lambo_veneno_jaune
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_violet
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_bleu
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_vert
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_white
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lamborghini_huracan_jaune
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_rev
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_lp560
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class CG_Lamborghini_Aventador_Black
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_lambo_veneno_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class CG_Lamborghini_Aventador_Green
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class CG_Lamborghini_Aventador_Orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class CG_Lamborghini_Aventador_Purple
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class CG_Lamborghini_Aventador_Red
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class CG_Lamborghini_Aventador_White
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_190e
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_clk_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_clk
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_clk_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_clk_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_clk_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_clk_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_clk_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_clk_violet
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_clk_jaune
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_mercedes_sprinter_van_bleu
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_mercedes_sprinter_van_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_mercedes_sprinter_van_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_mercedes_sprinter_van_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_mercedes_sprinter_van_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_mercedes_sprinter_van_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_mercedes_sprinter_van_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_mercedes_sprinter_van_violet
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_mercedes_sprinter_van_jaune
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Quiet_c65amg_noir_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Quiet_c65amg_blanche_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_mercedes_190_p_mat
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_mercedes_190_p_civ
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Quiet_c65amg_rouge_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Quiet_c65amg_chrome_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_mercedes_190_p_violet
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_mercedes_190_p_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_mercedes_190_p_bleu
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_mercedes_190_p_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_mercedes_190_p_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_mercedes_190_p_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_mercedes_190_p_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_c63_2015_civ
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_c63_2015_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_c63_2015_mat
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_c63_2015_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_c63_2015_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_c63_2015_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_c63_2015_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_c63_2015_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_c63_2015_violet
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_VolksWagenGolfGTiBlack
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_gti
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_VolksWagenGolfGTiwhite
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_gt_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_gt_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_gt_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_gt_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_gt_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_gt_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ADM_Ford_F100
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Jonzie_Raptor
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_raptor_truck_va_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_raptor_truck_va_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_raptor_truck_va_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_raptor_truck_va_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_raptor_truck_va_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_raptor_truck_va_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_FordKaBlack
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_FordKaGrey
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_FordKaBlue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_FordKaRed
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_FordKaWhite
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Ford_Mustang_Black
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Ford_Mustang_DarkBlue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Ford_Mustang_Grey
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Ford_Mustang_Orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Ford_Mustang_Pink
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Ford_Mustang_Purple
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Ford_Mustang_Red
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Ford_Mustang_White
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Ford_Mustang_Yellow
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Jonzie_XB
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class quiet_Ford_Shelby_GT500_Blanche_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class quiet_Ford_Shelby_GT500_bleu_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class quiet_Ford_Shelby_GT500_chrome_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class quiet_Ford_Shelby_GT500_noir_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class quiet_Ford_Shelby_GT500_rouge_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Towtruck
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_F350Blue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_F350Black
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_F350Red
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_F350White
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Jonzie_sti
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Subaru_WRX_Black
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Subaru_WRX_DarkBlue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Subaru_WRX_Grey
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Subaru_WRX_Pink
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Subaru_WRX_Purple
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Subaru_WRX_Red
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_wrx
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class BMW_M5Black
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class BMW_M5Blue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class BMW_M5Red
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class BMW_M5White
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_bmw_1series_m_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_bmw_1series_m_bleu
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_bmw_1series_m_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_bmw_1series_m_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_bmw_1series_m_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_bmw_1series_m_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_bmw_1series_m_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Jonzie_30CSL
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_e36
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_m3
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_BMW_M6_Black
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_BMW_M6_DarkBlue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_BMW_M6_Grey
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_BMW_M6_Pink
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_BMW_M6_Red
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_BMW_M6_White
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_ifa
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_isf
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_Pagani_c_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_Pagani_c_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_Pagani_c_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_Pagani_c_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_Pagani_c_orange
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_Pagani_c_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_agera_p_bleu
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_agera_p_jaune
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Mrshounka_agera_p_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_veyron
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_ccx
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_r34
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gtr_spec_v_2tone1
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gtr_spec_v_2tone2
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gtr_spec_v_2tone4
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gtr_spec_v_2tone5
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gtr_spec_v_gold
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gtr_spec_v_black2
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_EvoXrally_blue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_EvoXrally_red
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_EvoXrally_green
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_EvoXrally_white
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_evox
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Jonzie_Galant
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_audiq7_bleu
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_audiq7_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_audiq7_gris
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_audiq7_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_rs5_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_rs5_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_rs5_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_rs5_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_rs5_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_a3_rs5_jaune
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_r8_spyder
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_r8spyder
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Quiet_v2_r8plus_bleu_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Quiet_v2_r8plus_chrome_f_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Quiet_v2_r8plus_noir_f_f
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_rs4
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_audi_a8_limo_black
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_audi_a8_limo_white
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ADM_1964_impala
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ADM_1969_Camaro
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_TahoeBlue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_TahoeRed
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_TahoeWhite
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class A3L_Camaro
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_monsteur_bleufonce
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_monsteur_noir
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_monsteur_grise
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_monsteur_rose
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class shounka_monsteur_rouge
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class D_Cobalt_Granite
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class D_Cobalt_DarkRed
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class D_Cobalt_White
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class D_Cobalt_Yellow
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class S_PorscheRS_Black
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class S_PorscheRS_White
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class S_PorscheRS_Yellow
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class ivory_911
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_porsche_cayenne_blue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_porsche_cayenne_red
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_porsche_cayenne_grey
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_porsche_cayenne_yellow
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_porsche_cayenne_white
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class cg_porsche_cayenne_violet
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gt_navy_blue
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gt_navy_2tone2
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gt_navy_2tone3
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gt_navy_2tone5
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gt_navy_gold
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class bv_gt_navy_burgundy
		{
			default[] = {{0,0,0,0,0},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class RawModifications
			{
				pool[] = {"HideDoors","HideBackpacks","HideBumper","HideConstruction","HideServices"};
				class HideDoors
				{
					parts[] = {"HideDoor1","HideDoor2","HideDoor3"};
					displayText = "Hide/Show Doors";
					price = 4000;
				};
				class HideBackpacks
				{
					parts[] = {"HideBackpacks"};
					displayText = "Hide/Show Backpacks";
					price = 4000;
				};
				class HideBumper
				{
					parts[] = {"HideBumper1","HideBumper2"};
					displayText = "Hide/Show Bumpers";
					price = 4000;
				};
				class HideConstruction
				{
					parts[] = {"HideConstruction"};
					displayText = "Hide/Show Construction";
					price = 4000;
				};
				class HideServices
				{
					parts[] = {"HideServices"};
					displayText = "Hide/Show Service Lights";
					price = 20000;
				};
			};
			class Colors
			{
				pool[] = {"RGB","Red","RedGlow","YellowMetallic","YellowFade","YellowGlow","BlueMetallic","Chrome"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{

					displayText = "Red (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\firered.rvmat";
				};
				class BlueMetallic
				{

					displayText = "Blue (Metallic)";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blue.rvmat";
				};
				class GreenOcean
				{

					displayText = "Green/Blue Ocean Fade";
					price = 2000;
					texture = "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa";
					material = "maverick\tuning\bin\materials\shine_blueocean.rvmat";
				};
				class RedGlow
				{

					displayText = "Red (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa";
					material = "maverick\tuning\bin\materials\glow_red.rvmat";
				};
				class YellowMetallic
				{
					displayText = "Yellow (Metallic)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\shine_gold.rvmat";
				};
				class YellowFade
				{
					displayText = "Yellow (Fade)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\fade.rvmat";
				};
				class YellowGlow
				{
					displayText = "Yellow (Glow)";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\glow_yellow.rvmat";
				};
				class Chrome
				{
					displayText = "Chrome";
					price = 2000;
					texture = "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa";
					material = "maverick\tuning\bin\materials\chrome.rvmat";
				};
			};
				class Wheels
			{
				pool[] = {"BulletProof"};
				class BulletProof
				{
					displayText = "Bullet Proof Tires";
					price = 50000;
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Quadbike_01_base_F
		{
			default[] = {{},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class Colors
			{
				pool[] = {"RGB"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class SUV_01_base_F
		{
			default[] = {{},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class Colors
			{
				pool[] = {"RGB"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Van_01_transport_base_F
		{
			default[] = {{},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class Colors
			{
				pool[] = {"RGB"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
		class Offroad_02_unarmed_base_F
		{
			default[] = {{},"",0,0,{-1,-1,-1}};
			fetchDefaultFromVehicleState = 1;

			class Colors
			{
				pool[] = {"RGB","Red"};
				class RGB
				{
					displayText = "Custom RGB Vehicle Color";
					price = 25000;
					texture = "";
				};
				class Red
				{
					displayText = "Red";
					price = 2000;
					texture = "a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa";
				};
			};
			class Nitro
			{
				pool[] = {"Nitro1","Nitro2","Nitro3"};
				class Nitro1
				{
					displayText = "Nitro Stage 1";
					timesUseable = 1;
					price = 15000;
				};
				class Nitro2
				{
					displayText = "Nitro Stage 2";
					timesUseable = 2;
					price = 25000;
				};
				class Nitro3
				{
					displayText = "Nitro Stage 3";
					timesUseable = 3;
					price = 40000;
				};
			};
			class Underglow
			{
				pool[] = {"UnderglowRGB"};
				class UnderglowRGB
				{
					displayText = "Custom RGB Vehicle Underglow";
					price = 100000;
				};
			};
		};
	};
};






























/* DIALOG */
class mav_tuning_dialog_main {
    idd = 5100;
    movingEnable = 0;
    enableSimulation = 1;
    duration = 999999;
    class controls {
		class Life_RscText_1000: Life_RscText
		{
			idc = -1;
			x = 0.0359375 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {1,1,1,1};
		};
		class Life_RscText_1001: Life_RscText
		{
			idc = -1;
			text = "VEHICLE TUNING SHOP"; //--- ToDo: Localize;
			x = 0.0410937 * safezoneW + safezoneX;
			y = 0.2514 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0,0,1};
			shadow = 2;
		};
		class Life_RscText_1002: Life_RscText
		{
			idc = -1;
			x = 0.0359375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.473 * safezoneH;
			colorBackground[] = {0.12,0.14,0.16,0.8};
		};
		class Life_RscListbox_1500: Life_RscListbox
		{
			idc = 0;
			x = 0.0410937 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.451 * safezoneH;
			sizeEx = 0.045;
		};
		class Life_RscButtonMenu_2400: Life_RscButtonMenu
		{
			idc = 1;
			text = "LEAVE TUNING SHOP"; //--- ToDo: Localize;
			x = 0.0359375 * safezoneW + safezoneX;
			y = 0.7552 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};

class mav_tuning_dialog_rgbcolor {
    idd = 5200;
    movingEnable = 0;
    enableSimulation = 1;
    duration = 999999;
    class controls {
		class Life_RscText_1000: Life_RscText
		{
			idc = -1;
			x = 0.0359375 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.268125 * safezoneW;
			h = 0.286 * safezoneH;
			colorText[] = {};
			colorBackground[] = {0.12,0.14,0.16,0.8};
		};
		class Life_RscSlider_1900: Life_RscSlider
		{
			idc = 0;
			x = 0.082344 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.022 * safezoneH;
			color[] = { 1, 1, 1, 1 };
    		coloractive[] = { 1, 0, 0, 0.5 };
    		style = 1024;
    		type = 3;
		};
		class Life_RscText_1001: Life_RscText
		{
			idc = -1;
			text = "Red"; //--- ToDo: Localize;
			x = 0.0410937 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Life_RscText_1002: Life_RscText
		{
			idc = -1;
			text = "Green"; //--- ToDo: Localize;
			x = 0.0410937 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Life_RscSlider_1901: Life_RscSlider
		{
			idc = 1;
			x = 0.082344 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.022 * safezoneH;
			color[] = { 1, 1, 1, 1 };
    		coloractive[] = { 1, 0, 0, 0.5 };
    		style = 1024;
    		type = 3;
		};
		class Life_RscSlider_1902: Life_RscSlider
		{
			idc = 2;
			x = 0.082344 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.022 * safezoneH;
			color[] = { 1, 1, 1, 1 };
    		coloractive[] = { 1, 0, 0, 0.5 };
    		style = 1024;
    		type = 3;
		};
		class Life_RscText_1003: Life_RscText
		{
			idc = -1;
			text = "Blue"; //--- ToDo: Localize;
			x = 0.0410937 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Life_RscButtonMenu_2400: Life_RscButtonMenu
		{
			idc = 3;
			text = "APPLY COLOR"; //--- ToDo: Localize;
			x = 0.151437 * safezoneW + safezoneX;
			y = 0.6562 * safezoneH + safezoneY;
			w = 0.152625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Life_RscButtonMenu_2401: Life_RscButtonMenu
		{
			idc = 4;
			text = "ABORT"; //--- ToDo: Localize;
			x = 0.0359375 * safezoneW + safezoneX;
			y = 0.6562 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};
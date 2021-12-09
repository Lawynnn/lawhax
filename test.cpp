if TrainerOrigin == nil then showMessage("Please open from .CT file! Teleport Menu and Import Stat File will not work!")end
MainForm.Panel5.visible = false
MainForm.Caption = "Cayo Perico Cheat Table v2.4"

-- CNetworkPlayerMgr
pCNetPlayerInfo = 0xB0
pCNetPed = 0x1C8
oNumPlayers = 0x180

-- CPedFactory (WorldPTR)
pCPed = 0x8

-- CPed Offsets
oEntityType = 0x2B -- int 156:Player 152:Other
pCNavigation = 0x30
oVisualX = 0x90 oVisualY = 0x94 oVisualZ = 0x98 -- float, vector3
oGod = 0x189 -- int8 0:false 1:true
oHostility = 0x18C
oHealth = 0x280 -- float
oHealthMax = 0x2A0
pAttackers = 0x2A8
pCVehicle = 0xD30
oRagdoll = 0x10B8 -- int 32:false 1/0:true
pCPlayerInfo = 0x10C8
pCPedWeaponManager = 0x10D8
oSeatbelt = 0x140C -- byte 55:false 56:true
oInVehicle = 0x1477 -- int 16:false 0:true
oArmor = 0x14E0 -- not working what

-- CNavigation Offsets
oHeading = 0x20 -- float
oHeading2 = 0x24
oRotation = 0x30 oRotation2 = 0x34 oRotation3 = 0x38 -- float, vector3
oPositionX = 0x50 oPositionY = 0x54 oPositionZ = 0x58

-- CPlayerInfo Offsets
oName = 0x84 -- string[20]
oSwimSpeed = 0x150 -- float
oFrameFlags = 0x1F9
oWalkSpeed = 0x16C
oWanted = 0x868 -- int8
oRunSpeed = 0xCD0 -- float
oStamina = 0xCD4
oStaminaRegen = 0xCD8

-- CPedWeaponManager Offsets
pCWeaponInfo = 0x20
--> CWeaponInfo
oImpactType = 0x20 -- int 3:bullet 5:explosion
oImpactExplosion = 0x24 -- int32
oImpactType2 = 0x54 -- int
pCAmmoInfo = 0x60
pCVehicleWeapon = 0x70
oSpread = 0x7C -- float
oDamage = 0xB0
oForce = 0xD8
oForcePed = 0xDC
oForceVehicle = 0xE0
oForceFlying = 0xE4
oPenetration = 0x110
oMuzzleVelocity = 0x11C
oBulletBatch = 0x124
oReloadVehicleMult = 0x130
oReloadMult = 0x134
oShotTime = 0x13C
oLockRange = 0x288
oRange = 0x28C
--> CAmmoInfo
pCAmmoWrap = 0x8
oMaxAmmo = 0x28
--> CAmmoWrap
pCAmmo = 0x0
--> CAmmmo
oCurrentAmmo = 0x18
--> CVehicleWeapon
--oVImpactType = 0x20 -- int
--oVImpactExplosion = 0x24 -- int32
--oVDamage = 0xB0 -- float

-- CVehicle Offsets
pCModelInfo = 0x20
oVInvisibility = 0x2C -- int
-- pCNavigation = 0x30
pCVehicleDrawHandler = 0x48
oVPositionX = 0x90
oVPositionY = 0x94
oVPositionZ = 0x98 -- float, vector3
oVState = 0xD8 -- int 0:Player 1:NPC 2:Unused 3:Destroyed
-- oGod = 0x189 -- int
oVBurnt = 0x18A -- int 64:off 72:on
oVHealth = 0x280 -- float
oVHealthMax = 0x2A0
oVBoostSpeed = 0x120
oVBoost = 0x320
oVBoostRecharge = 0x324
oVHealth2 = 0x840
oVHealth3 = 0x844 -- used
oVEngineHealth = 0x908 -- used
pCHandlingData = 0x938
oVDirt = 0x9F8 -- float
oBulletproofTires = 0x943 --int
oLightMult = 0xA14 -- float
oVGravity = 0xC5C -- float
oCurPassenger = 0xC62
oMk2Missiles = 0x12A4 -- int
oAircraftBomb = 0x12B4
oCountermeasures = 0x12B8

--> CHandlingData Offsets
oMass = 0xC -- float
oBouyancy = 0x40 -- float
oAcceleration = 0x4C
oDriveInertia = 0x54
oInitialDriveForce = 0x60
oBrakeForce = 0x6C
oHandbrakeForce = 0x7C
oTractionCurveMax = 0x88
oTractionCurveMin = 0x90
oCollisionMult = 0xF0
oWeaponMult = 0xF4
oDeformationMult = 0xF8
oEngineMult = 0xFC
oThrust = 0x338

--> CVehicleDrawHandler Offsets
pCVehicleVisual = 0x20
oNeonR = 0x3A2 -- int
oNeonG = 0x3A1
oNeonB = 0x3A0
oNeonLeft = 0x402
oNeonRight = 0x403
oNeonFront = 0x404
oNeonBack = 0x405
oEMS = 0x3D6
oBrakes = 0x3D7
oTransmission = 0x3D8
oHorn = 0x3D9
oSuspension = 0x3DA
oArmor = 0x3DB
oTurbo = 0x3DD
oXenonLight = 0x3E1
oSmokeR = 0x3FC
oSmokeG = 0x3FD
oSmokeB = 0x3FE
oWindows = 0x3FF
oColorLight = 0x406

--> CVehicleVisual
oPrimaryR = 0xA6 -- int
oPrimaryG = 0xA5
oPrimaryB = 0xA4
oSecondaryR = 0xAA
oSecondaryG = 0xA9
oSecondaryB = 0xA8
oLicensePlate = 0x130 -- dword / byte array [8]

--> CModelInfo
oModelHash = 0x18 -- int
oCamDist = 0x38 -- float
oVName = 0x298 -- string [10]
oVMaker = 0x2A4 -- string [10]
oVExtras = 0x58B -- byte
oVParachute = 0x58C

-- CReplayInterface Offsets
pCVehicleInterface = 0x10
pCPedInterface = 0x18
pCPickupInterface = 0x20
pVehList = 0x180
oVehNum = 0x190
pPedList = 0x100
oPedNum = 0x110
pPickupList = 0x100
oPickupNum = 0x110

function TCOMP(T,C,...) for K,V in pairs(C) do T[K]=V end if select('#',...)>0 then return TCOMP(T,...) else return T end end

function getAddresses(symbol)
   if not symbol then
   printf("WorldPTR: %x",readPointer('WorldPTR'))
   printf("BlipPTR: %x",readPointer('BlipPTR'))
   printf("GlobalPTR: %x",readPointer('GlobalPTR'))
   printf("ReplayInterfacePTR: %x",readPointer('ReplayInterfacePTR'))
   printf("LocalScriptsPTR: %x",readPointer('LocalScriptsPTR'))
   printf("PlayerCountPTR: %x",readPointer('PlayerCountPTR'))
   else
   printf("%s: %x",symbol,readPointer(symbol))
   end
end

-- Global Function
function GA(Index)
    local p=getAddress('GlobalPTR')
    return readQword(p+(8*(Index>>0x12&0x3F)))+(8*(Index&0x3FFFF))
end
function GG(Type,Index)
    if Type=="i" then return readInteger(GA(Index))
    elseif Type=="f" then return readFloat(GA(Index))
    elseif Type=="s" then return readString(GA(Index))
    else return "NULL" end
end
function SG(Type,Index,Value)
    if Type=="i" then writeInteger(GA(Index),Value)
    elseif Type=="f" then writeFloat(GA(Index),Value)
    elseif Type=="s" then writeString(GA(Index),Value)
    else return "NULL" end
end
function PLAYER_ID() return readInteger(GA(2440049)) end
function Cayo(player) return GA(1704127+823+56+player) end
function Casino(player) return GA(1697303+2325+player) end
function CasinoPotential(id) return GA(262145+28086+id) end
function CasinoAI(id) return GA(262145+28098+id) end
function Doomsday(player) return GA(1693565+812+50+player) end
function Apart(player) return GA(1666210+3008+player) end

-- JOAAT converter
function joaat(str)
  local Uint32 = 0xffffffff;
  hash = 0;
  str = str:lower();
  for i = 1, str:len() do
  hash = hash + str:byte(i);
  hash = hash + (hash << 10);
  hash = hash ~ ((hash & Uint32) >> 6);
  end
  hash = hash + (hash << 3);
  hash = hash ~ ((hash & Uint32) >> 11);
  hash = hash + (hash << 15);
  return hash & Uint32
end

-- Teleport Function
lastX,lastY,lastZ = 0,0,0
function round(float,digits) return string.format("%."..digits.."f",float);end
function findIn(input,value)
      for _ in pairs(input) do
      if value == input[_] then return true end
      end
   return false
end

function getBlipCoords(id,color)
   local ptr = getAddress("BlipPTR")
   for i = 1, 2000, 1 do
     local blip = readPointer(ptr + (i * 8))
     if blip <= 0 then goto continue end
     local blipId = readInteger(blip + 0x40)
     local blipColor = readBytes(blip + 0x48)
     if findIn(id,blipId) then
		  local x = round(readFloat(blip + 0x10),3)
        local y = round(readFloat(blip + 0x14),3)
        local z = round(readFloat(blip + 0x18),3)
        if color then
           if type(color) == 'table' and findIn(color,blipColor) then
             x = round(readFloat(blip + 0x10),3)
             y = round(readFloat(blip + 0x14),3)
             z = round(readFloat(blip + 0x18),3)
           elseif type(color) ~= 'table' then
             printf("ID: %i Color: %i\nX:%s Y:%s Z:%s",blipId,blipColor,x,y,z)
             break
           else goto continue end
        end
        return x,y,z,blipId,blipColor,blip
     end
     ::continue::
   end
end

function teleportBlip(id,color,height)
   local x,y,z = getBlipCoords(id,color)
   if height == nil then height = 0 end
   if x and y and z then teleport(x,y,z+height) end
end

function teleport(x,y,z)
   local ptr = readPointer("[WorldPTR]+pCPed")
   if readBytes(ptr + oInVehicle) == 0 then
      ptr = readPointer(ptr + pCVehicle)
   end
   local CNavigation = readPointer(ptr + pCNavigation)
   writeFloat(CNavigation + oPositionX, x)
   writeFloat(CNavigation + oPositionY, y)
   writeFloat(CNavigation + oPositionZ, z)
   writeFloat(ptr + oVisualX, x)
   writeFloat(ptr + oVisualY, y)
   writeFloat(ptr + oVisualZ, z)
end

function teleportWaypoint(height)
   local godAdr = getAddress("[[[WorldPTR]+pCPed]+pCVehicle]+oGod")
   local curPassenger = readBytes("[[[WorldPTR]+pCPed]+pCVehicle]+oCurPassenger")
   local x,y,z,id,col,wp = getBlipCoords({8})
   if wp then
      local x = round(readFloat(wp + 0x10),3)
      local y = round(readFloat(wp + 0x14),3)
      local z = round(readFloat(wp + 0x18),3)
      if tostring(z) == '20.000' then
         z = -255
         if curPassenger and curPassenger > 1 then
           local i = 1
           repeat
             --z = z+(round(math.pow(i,-0.2),1)*height)
             z = -10 + (i * height)
             teleport(x,y,z)
             sleep(500)
             i = i + 1
           until(isKeyPressed(VK_W) == true)
           if not godm or godm == 0 then
              writeBytes(godAdr,1)
              sleep(3000)
              writeBytes(godAdr,0)
           end
         end
      end
      lastX,lastY,lastZ = x,y,z
      teleport(x,y,z+1)
   elseif not wp and lastX ~= 0 then teleport(lastX,lastY,lastZ+1)
   end
end

function getCurrentCoords()
   local nav=readPointer("[[WorldPTR]+pCPed]+pCNavigation")
   if not nav then return false end
   local head=round(readFloat(nav+oHeading),3)
   local head2=round(readFloat(nav+oHeading2),3)
   local x=round(readFloat(nav+oPositionX),3)
   local y=round(readFloat(nav+oPositionY),3)
   local z=round(readFloat(nav+oPositionZ),3)
   return x,y,z,head,head2
end

-- Save Teleport Location
function saveLocation()
  local x,y,z,LocationName,vtbl='','','','',''
  LocationName=inputQuery('Save Teleport Location','Enter Location Name','')
  if LocationName==nil or LocationName=='' then return end
  x,y,z=getCurrentCoords()
  local fs=assert(io.open(string.format('%s/Teleport Locations.txt',TrainerOrigin), "a"));
  vtbl=string.format('%s x:%s, y:%s, z:%s\n',LocationName,x,y,z)
  fs:write(vtbl);
  fs:close();
end
function getLocation()
  local x,y,z,LocationName,vtbl,tbl_Locations='','','','','',{}
  local fs=assert(io.open(string.format('%s/Teleport Locations.txt',TrainerOrigin), "a+"));
  if fs == nil then fs:write() end
  for c=1,200,1 do
    local line=fs:read("*line")
    if line==nil or line=='' then goto continue; end
    local ls1,ls2=string.find(line,' x:')
    local ls3,ls4=string.find(line,', y:')
    local ls5,ls6=string.find(line,', z:')
    local sbn,sbx,sby,sbz=string.sub(line,1,ls1-1),string.sub(line,ls2+1,ls3-1),string.sub(line,ls4+1,ls5-1),string.sub(line,ls6+1,string.len(line))
    table.insert(tbl_Locations,c,{sbn,sbx,sby,sbz})
  end
  ::continue::
  fs:close();
    return tbl_Locations
end
function teleportMenu()-- Form
  local TPForm=createForm(true)
  TCOMP(TPForm,{Caption="Teleport Menu",Position=poMainFormCenter,Color=0x000000,Width=200,Height=125,Visible=true,BorderStyle="bsToolWindow"});
  local label=createLabel(TPForm)
  TCOMP(label,{Left=20,Top=10,Enabled=true,Visible=true,Color=clNone,Alignment=taLeftJustify});
  local font=label.Font;TCOMP(font,{Name='Calibri',Height=-15,Size=11,Pitch='fpVariable',Quality='fqDraft',Style='[fsBold]',Color=0xff00ff});
  label.Caption='Teleport to..'
  local teleportList=createComboBox(TPForm)
  TCOMP(teleportList,{MultiSelect=false,AutoSize=false,ReadOnly=true,Visible=true,Top=40,Left=20,Width=160,Height=23,DropDownCount=20,Color=0xffffff,Style="csDropDownList"})
  local font2=teleportList.Font;TCOMP(font2,{Color=0x000000,Name='Calibri',Height=-11,Size=8,Style='[bsBold]'});
  local tbl_Locations={};tbl_Locations=getLocation();
  if tbl_Locations==nil then return end
  teleportList.items.add('Teleport Locations:');
  for c,k in pairs(tbl_Locations) do teleportList.items.add(c..":"..k[1]);teleportList.setItemIndex(c-1); end
  teleportList.ItemIndex=0;
  local teleportButton=createButton(TPForm)
  TCOMP(teleportButton,{Caption='Teleport',Left=110,Top=75,Width=70,Height=35,Enabled=true,Visible=true,TabOrder=0,TabStop=true});
  teleportButton.Anchors,teleportButton.BidiMode={akTop,akLeft},bdLeftToRight;
  teleportButton.OnClick=function() local cbi=teleportList.ItemIndex;if cbi~=0 then;teleport(tbl_Locations[cbi][2],tbl_Locations[cbi][3],tbl_Locations[cbi][4]);end;end
  local saveButton=createButton(TPForm)
  TCOMP(saveButton,{Caption='Save',Left=20,Top=75,Width=70,Height=35,Enabled=true,Visible=true,TabOrder=0,TabStop=true});
  saveButton.Anchors,saveButton.BidiMode={akTop,akLeft},bdLeftToRight;
  saveButton.OnClick=function() saveLocation();TPForm.destroy();TPForm = nil;teleportMenu();end
end

-- Get Current Vehicle hash
function getCurrentVeh()
   local modelptr = readPointer('[[[WorldPTR]+pCPed]+pCVehicle]+pCModelInfo')
   if not modelptr then return false end
   local hash = readInteger(modelptr + oModelHash)
   return hash
end

tbl_Vehicles={
{"Adder",3078201489},{"Airbus",1283517198},{"Airtug",1560980623},{"Akula",1181327175},{"Akuma",1672195559},{"Alpha",767087018},{"Alphaz1",2771347558},{"Ambulance",1171614426},{"Annihilator",837858166},{"Apc",562680400},{"Ardent",159274291},{"Armytanker",3087536137},{"Armytrailer",2818520053},{"Armytrailer2",2657817814},{"Asbo",1118611807},{"Asea",2485144969},{"Asea2",2487343317},{"Asterope",2391954683},{"Autarch",3981782132},{"Avarus",2179174271},{"Avenger",2176659152},{"Avenger2",408970549},{"Bagger",2154536131},{"Baletrailer",3895125590},{"Baller",3486135912},{"Baller2",142944341},{"Baller3",1878062887},{"Baller4",634118882},{"Baller5",470404958},{"Baller6",666166960},{"Banshee",3253274834},{"Banshee2",633712403},{"Barracks",3471458123},{"Barracks2",1074326203},{"Barracks3",630371791},{"Barrage",4081974053},{"Bati",4180675781},{"Bati2",3403504941},{"Benson",2053223216},{"Besra",1824333165},{"Bestiagts",1274868363},{"Bf400",86520421},{"Bfinjection",1126868326},{"Biff",850991848},{"Bifta",3945366167},{"Bison",4278019151},{"Bison2",2072156101},{"Bison3",1739845664},{"Bjxl",850565707},{"Blade",3089165662},{"Blazer",2166734073},{"Blazer2",4246935337},{"Blazer3",3025077634},{"Blazer4",3854198872},{"Blazer5",2704629607},{"Blimp",4143991942},{"Blimp2",3681241380},{"Blimp3",3987008919},{"Blista",3950024287},{"Blista2",1039032026},{"Blista3",3703315515},{"Bmx",1131912276},{"Boattrailer",524108981},{"Bobcatxl",1069929536},{"Bodhi2",2859047862},{"Bombushka",4262088844},{"Boxville",2307837162},{"Boxville2",4061868990},{"Boxville3",121658888},{"Boxville4",444171386},{"Boxville5",682434785},{"Brawler",2815302597},{"Brickade",3989239879},{"Brioso",1549126457},{"Bruiser",668439077},{"Bruiser2",2600885406},{"Bruiser3",2252616474},{"Brutus",2139203625},{"Brutus2",2403970600},{"Brutus3",2038858402},{"Btype",117401876},{"Btype2",3463132580},{"Btype3",3692679425},{"Buccaneer",3612755468},{"Buccaneer2",3281516360},{"Buffalo",3990165190},{"Buffalo2",736902334},{"Buffalo3",237764926},{"Bulldozer",1886712733},{"Bullet",2598821281},{"Burrito",2948279460},{"Burrito2",3387490166},
{"Burrito3",2551651283},{"Burrito4",893081117},{"Burrito5",1132262048},{"Bus",3581397346},{"Buzzard",788747387},{"Buzzard2",745926877},{"Cablecar",3334677549},{"Caddy",1147287684},{"Caddy2",3757070668},{"Caddy3",3525819835},{"Camper",1876516712},{"Caracara",1254014755},{"Caracara2",2945871676},{"Carbonizzare",2072687711},{"Carbonrs",11251904},{"Cargobob",4244420235},{"Cargobob2",1621617168},{"Cargobob3",1394036463},{"Cargobob4",2025593404},{"Cargoplane",368211810},{"Casco",941800958},{"Cavalcade",2006918058},{"Cavalcade2",3505073125},{"Cerberus",3493417227},{"Cerberus2",679453769},{"Cerberus3",1909700336},{"Cheburek",3306466016},{"Cheetah",2983812512},{"Cheetah2",223240013},{"Chernobog",3602674979},{"Chimera",6774487},{"Chino",349605904},{"Chino2",2933279331},{"Cliffhanger",390201602},{"Clique",2728360112},{"Club",2196012677},{"Coach",2222034228},{"Cog55",906642318},{"Cog552",704435172},{"Cogcabrio",330661258},{"Cognoscenti",2264796000},{"Cognoscenti2",3690124666},{"Comet2",3249425686},{"Comet3",2272483501},{"Comet4",1561920505},{"Comet5",661493923},{"Contender",683047626},{"Coquette",108773431},{"Coquette2",1011753235},{"Coquette3",784565758},{"Coquette4",2566281822},{"Cruiser",448402357},{"Crusader",321739290},{"Cuban800",3650256867},{"Cutter",3288047904},{"Cyclone",1392481335},{"Daemon",2006142190},{"Daemon2",2890830793},{"Deathbike",4267640610},{"Deathbike2",2482017624},{"Deathbike3",2920466844},{"Defiler",822018448},{"Deluxo",1483171323},{"Deveste",1591739866},{"Deviant",1279262537},{"Diablous",4055125828},{"Diablous2",1790834270},{"Dilettante",3164157193},{"Dilettante2",1682114128},{"Dinghy",1033245328},{"Dinghy2",276773164},{"Dinghy3",509498602},{"Dinghy4",867467158},{"Dloader",1770332643},{"Docktrailer",2154757102},{"Docktug",3410276810},{"Dodo",3393804037},{"Dominator",80636076},{"Dominator2",3379262425},{"Dominator3",3308022675},{"Dominator4",3606777648},{"Dominator5",2919906639},{"Dominator6",3001042683},{"Double",2623969160},{"Drafter",686471183},{"Dubsta",1177543287},{"Dubsta2",3900892662},{"Dubsta3",3057713523},{"Dukes",723973206},{"Dukes2",3968823444},
{"Dukes3",2134119907},{"Dump",2164484578},{"Dune",2633113103},{"Dune2",534258863},{"Dune3",1897744184},{"Dune4",3467805257},{"Dune5",3982671785},{"Duster",970356638},{"Dynasty",310284501},{"Elegy",196747873},{"Elegy2",3728579874},{"Ellie",3027423925},{"Emerus",1323778901},{"Emperor",3609690755},{"Emperor2",2411965148},{"Emperor3",3053254478},{"Enduro",1753414259},{"Entity2",2174267100},{"Entityxf",3003014393},{"Esskey",2035069708},{"Everon",2538945576},{"Exemplar",4289813342},{"F620",3703357000},{"Faction",2175389151},{"Faction2",2504420315},{"Faction3",2255212070},{"Fagaloa",1617472902},{"Faggio",2452219115},{"Faggio2",55628203},{"Faggio3",3005788552},{"Fbi",1127131465},{"Fbi2",2647026068},{"Fcr",627535535},{"Fcr2",3537231886},{"Felon",3903372712},{"Felon2",4205676014},{"Feltzer2",2299640309},{"Feltzer3",2728226064},{"Firetruk",1938952078},{"Fixter",3458454463},{"Flashgt",3035832600},{"Flatbed",1353720154},{"Fmj",1426219628},{"Forklift",1491375716},{"Formula",340154634},{"Formula2",2334210311},{"Fq2",3157435195},{"Freecrawler",4240635011},{"Freight",1030400667},{"Freightcar",184361638},{"Freightcont1",920453016},{"Freightcont2",240201337},{"Freightgrain",642617954},{"Freighttrailer",3517691494},{"Frogger",744705981},{"Frogger2",1949211328},{"Fugitive",1909141499},{"Furia",960812448},{"Furoregt",3205927392},{"Fusilade",499169875},{"Futo",2016857647},{"Gargoyle",741090084},{"Gauntlet",2494797253},{"Gauntlet2",349315417},{"Gauntlet3",722226637},{"Gauntlet4",1934384720},{"Gauntlet5",2172320429},{"Gb200",1909189272},{"Gburrito",2549763894},{"Gburrito2",296357396},{"Glendale",75131841},{"Glendale2",3381377750},{"Gp1",1234311532},{"Graintrailer",1019737494},{"Granger",2519238556},{"Gresley",2751205197},{"Gt500",2215179066},{"Guardian",2186977100},{"Habanero",884422927},{"Hakuchou",1265391242},{"Hakuchou2",4039289119},{"Halftrack",4262731174},{"Handler",444583674},{"Hauler",1518533038},{"Hauler2",387748548},{"Havok",2310691317},{"Hellion",3932816511},{"Hermes",15219735},{"Hexer",301427732},{"Hotknife",37348240},{"Hotring",1115909093},{"Howard",3287439187},
{"Hunter",4252008158},{"Huntley",486987393},{"Hustler",600450546},{"Hydra",970385471},{"Imorgon",3162245632},{"Impaler",2198276962},{"Impaler2",1009171724},{"Impaler3",2370166601},{"Impaler4",2550461639},{"Imperator",444994115},{"Imperator2",1637620610},{"Imperator3",3539435063},{"Infernus",418536135},{"Infernus2",2889029532},{"Ingot",3005245074},{"Innovation",4135840458},{"Insurgent",2434067162},{"Insurgent2",2071877360},{"Insurgent3",2370534026},{"Intruder",886934177},{"Issi2",3117103977},{"Issi3",931280609},{"Issi4",628003514},{"Issi5",1537277726},{"Issi6",1239571361},{"Issi7",1854776567},{"Italigtb",2246633323},{"Italigtb2",3812247419},{"Italigto",3963499524},{"Jackal",3670438162},{"Jb700",1051415893},{"Jb7002",394110044},{"Jester",2997294755},{"Jester2",3188613414},{"Jester3",4080061290},{"Jet",1058115860},{"Jetmax",861409633},{"Journey",4174679674},{"Jugular",4086055493},{"Kalahari",92612664},{"Kamacho",4173521127},{"Kanjo",409049982},{"Khamelion",544021352},{"Khanjali",2859440138},{"Komoda",3460613305},{"Krieger",3630826055},{"Kuruma",2922118804},{"Kuruma2",410882957},{"Landstalker",1269098716},{"Landstalker2",3456868130},{"Lazer",3013282534},{"Le7b",3062131285},{"Lectro",640818791},{"Lguard",469291905},{"Limo2",4180339789},{"Locust",3353694737},{"Lurcher",2068293287},{"Luxor",621481054},{"Luxor2",3080673438},{"Lynx",482197771},{"Mamba",2634021974},{"Mammatus",2548391185},{"Manana",2170765704},{"Manana2",1717532765},{"Manchez",2771538552},{"Marquis",3251507587},{"Marshall",1233534620},{"Massacro",4152024626},{"Massacro2",3663206819},{"Maverick",2634305738},{"Menacer",2044532910},{"Mesa",914654722},{"Mesa2",3546958660},{"Mesa3",2230595153},{"Metrotrain",868868440},{"Michelli",1046206681},{"Microlight",2531412055},{"Miljet",165154707},{"Minitank",3040635986},{"Minivan",3984502180},{"Minivan2",3168702960},{"Mixer",3510150843},{"Mixer2",475220373},{"Mogul",3545667823},{"Molotok",1565978651},{"Monroe",3861591579},{"Monster",3449006043},{"Monster3",1721676810},{"Monster4",840387324},{"Monster5",3579220348},{"Moonbeam",525509695},{"Moonbeam2",1896491931},
{"Mower",1783355638},{"Mule",904750859},{"Mule2",3244501995},{"Mule3",2242229361},{"Mule4",1945374990},{"Nebula",3412338231},{"Nemesis",3660088182},{"Neo",2674840994},{"Neon",2445973230},{"Nero",1034187331},{"Nero2",1093792632},{"Nightblade",2688780135},{"Nightshade",2351681756},{"Nightshark",433954513},{"Nimbus",2999939664},{"Ninef",1032823388},{"Ninef2",2833484545},{"Nokota",1036591958},{"Novak",2465530446},{"Omnis",3517794615},{"Openwheel1",1492612435},{"Openwheel2",1181339704},{"Oppressor",884483972},{"Oppressor2",2069146067},{"Oracle",1348744438},{"Oracle2",3783366066},{"Osiris",1987142870},{"Outlaw",408825843},{"Packer",569305213},{"Panto",3863274624},{"Paradise",1488164764},{"Paragon",3847255899},{"Paragon2",1416466158},{"Pariah",867799010},{"Patriot",3486509883},{"Patriot2",3874056184},{"Pbus",2287941233},{"Pbus2",345756458},{"Pcj",3385765638},{"Penetrator",2536829930},{"Penumbra",3917501776},{"Penumbra2",3663644634},{"Peyote",1830407356},{"Peyote2",2490551588},{"Peyote3",1107404867},{"Pfister811",2465164804},{"Phantom",2157618379},{"Phantom2",2645431192},{"Phantom3",177270108},{"Phoenix",2199527893},{"Picador",1507916787},{"Pigalle",1078682497},{"Police",2046537925},{"Police2",2667966721},{"Police3",1912215274},{"Police4",2321795001},{"Policeb",4260343491},{"Policeold1",2758042359},{"Policeold2",2515846680},{"Policet",456714581},{"Polmav",353883353},{"Pony",4175309224},{"Pony2",943752001},{"Pounder",2112052861},{"Pounder2",1653666139},{"Prairie",2844316578},{"Pranger",741586030},{"Predator",3806844075},{"Premier",2411098011},{"Primo",3144368207},{"Primo2",2254540506},{"Proptrailer",356391690},{"Prototipo",2123327359},{"Pyro",2908775872},{"Radi",2643899483},{"Raiden",2765724541},{"Raketrailer",390902130},{"Rallytruck",2191146052},{"Rancherxl",1645267888},{"Rancherxl2",1933662059},{"Rapidgt",2360515092},{"Rapidgt2",1737773231},{"Rapidgt3",2049897956},{"Raptor",3620039993},{"Ratbike",1873600305},{"Ratloader",3627815886},{"Ratloader2",3705788919},{"Rcbandito",4008920556},{"Reaper",234062309},{"Rebel",3087195462},{"Rebel2",2249373259},{"Rebla",83136452},
{"Regina",4280472072},{"Rentalbus",3196165219},{"Retinue",1841130506},{"Retinue2",2031587082},{"Revolter",3884762073},{"Rhapsody",841808271},{"Rhino",782665360},{"Riata",2762269779},{"Riot",3089277354},{"Riot2",2601952180},{"Ripley",3448987385},{"Rocoto",2136773105},{"Rogue",3319621991},{"Romero",627094268},{"Rrocket",916547552},{"Rubble",2589662668},{"Ruffian",3401388520},{"Ruiner",4067225593},{"Ruiner2",941494461},{"Ruiner3",777714999},{"Rumpo",1162065741},{"Rumpo2",2518351607},{"Rumpo3",1475773103},{"Ruston",719660200},{"S80",3970348707},{"Sabregt",2609945748},{"Sabregt2",223258115},{"Sadler",3695398481},{"Sadler2",734217681},{"Sanchez",788045382},{"Sanchez2",2841686334},{"Sanctus",1491277511},{"Sandking",3105951696},{"Sandking2",989381445},{"Savage",4212341271},{"Savestra",903794909},{"Sc1",1352136073},{"Scarab",3147997943},{"Scarab2",1542143200},{"Scarab3",3715219435},{"Schafter2",3039514899},{"Schafter3",2809443750},{"Schafter4",1489967196},{"Schafter5",3406724313},{"Schafter6",1922255844},{"Schlagen",3787471536},{"Schwarzer",3548084598},{"Scorcher",4108429845},{"Scramjet",3656405053},{"Scrap",2594165727},{"Seabreeze",3902291871},{"Seashark",3264692260},{"Seashark2",3678636260},{"Seashark3",3983945033},{"Seasparrow",3568198617},{"Seminole",1221512915},{"Seminole2",2484160806},{"Sentinel",1349725314},{"Sentinel2",873639469},{"Sentinel3",1104234922},{"Serrano",1337041428},{"Seven70",2537130571},{"Shamal",3080461301},{"Sheava",819197656},{"Sheriff",2611638396},{"Sheriff2",1922257928},{"Shotaro",3889340782},{"Skylift",1044954915},{"Slamvan",729783779},{"Slamvan2",833469436},{"Slamvan3",1119641113},{"Slamvan4",2233918197},{"Slamvan5",373261600},{"Slamvan6",1742022738},{"Sovereign",743478836},{"Specter",1886268224},{"Specter2",1074745671},{"Speeder",231083307},{"Speeder2",437538602},{"Speedo",3484649228},{"Speedo2",728614474},{"Speedo4",219613597},{"Squalo",400514754},{"Stafford",321186144},{"Stalion",1923400478},{"Stalion2",3893323758},{"Stanier",2817386317},{"Starling",2594093022},{"Stinger",1545842587},{"Stingergt",2196019706},{"Stockade",1747439474},
{"Stockade3",4080511798},{"Stratum",1723137093},{"Streiter",1741861769},{"Stretch",2333339779},{"Strikeforce",1692272545},{"Stromberg",886810209},{"Stryder",301304410},{"Stunt",2172210288},{"Submersible",771711535},{"Submersible2",3228633070},{"Sugoi",987469656},{"Sultan",970598228},{"Sultan2",872704284},{"Sultanrs",3999278268},{"Suntrap",4012021193},{"Superd",1123216662},{"Supervolito",710198397},{"Supervolito2",2623428164},{"Surano",384071873},{"Surfer",699456151},{"Surfer2",2983726598},{"Surge",2400073108},{"Swift",3955379698},{"Swift2",1075432268},{"Swinger",500482303},{"T20",1663218586},{"Taco",1951180813},{"Tailgater",3286105550},{"Taipan",3160260734},{"Tampa",972671128},{"Tampa2",3223586949},{"Tampa3",3084515313},{"Tanker",3564062519},{"Tanker2",1956216962},{"Tankercar",586013744},{"Taxi",3338918751},{"Technical",2198148358},{"Technical2",1180875963},{"Technical3",1356124575},{"Tempesta",272929391},{"Terbyte",2306538597},{"Tezeract",1031562256},{"Thrax",1044193113},{"Thrust",1836027715},{"Thruster",1489874736},{"Tigon",2936769864},{"Tiptruck",48339065},{"Tiptruck2",3347205726},{"Titan",1981688531},{"Torero",1504306544},{"Tornado",464687292},{"Tornado2",1531094468},{"Tornado3",1762279763},{"Tornado4",2261744861},{"Tornado5",2497353967},{"Tornado6",2736567667},{"Toro",1070967343},{"Toro2",908897389},{"Toros",3126015148},{"Tourbus",1941029835},{"Towtruck",2971866336},{"Towtruck2",3852654278},{"Tr2",2078290630},{"Tr3",1784254509},{"Tr4",2091594960},{"Tractor",1641462412},{"Tractor2",2218488798},{"Tractor3",1445631933},{"Trailerlarge",1502869817},{"Trailerlogs",2016027501},{"Trailers",3417488910},{"Trailers2",2715434129},{"Trailers3",2236089197},{"Trailers4",3194418602},{"Trailersmall",712162987},{"Trailersmall2",2413121211},{"Trash",1917016601},{"Trash2",3039269212},{"Trflat",2942498482},{"Tribike",1127861609},{"Tribike2",3061159916},{"Tribike3",3894672200},{"Trophytruck",101905590},{"Trophytruck2",3631668194},{"Tropic",290013743},{"Tropic2",1448677353},{"Tropos",1887331236},{"Tug",2194326579},{"Tula",1043222410},{"Tulip",1456744817},{"Turismo2",3312836369},
{"Turismor",408192225},{"Tvtrailer",2524324030},{"Tyrant",3918533058},{"Tyrus",2067820283},{"Utillitruck",516990260},{"Utillitruck2",887537515},{"Utillitruck3",2132890591},{"Vacca",338562499},{"Vader",4154065143},{"Vagner",1939284556},{"Vagrant",740289177},{"Valkyrie",2694714877},{"Valkyrie2",1543134283},{"Vamos",4245851645},{"Velum",2621610858},{"Velum2",1077420264},{"Verlierer2",1102544804},{"Vestra",1341619767},{"Vigero",3469130167},{"Vigilante",3052358707},{"Vindicator",2941886209},{"Virgo",3796912450},{"Virgo2",3395457658},{"Virgo3",16646064},{"Viseris",3903371924},{"Visione",3296789504},{"Volatol",447548909},{"Volatus",2449479409},{"Voltic",2672523198},{"Voltic2",989294410},{"Voodoo",2006667053},{"Voodoo2",523724515},{"Vortex",3685342204},{"Vstr",1456336509},{"Warrener",1373123368},{"Washington",1777363799},{"Wastelander",2382949506},{"Windsor",1581459400},{"Windsor2",2364918497},{"Wolfsbane",3676349299},{"Xa21",917809321},{"Xls",1203490606},{"Xls2",3862958888},{"Yosemite",1871995513},{"Yosemite2",1693751655},{"Yosemite3",67753863},{"Youga",65402552},{"Youga2",1026149675},{"Youga3",1802742206},{"Z190",838982985},{"Zentorno",2891838741},{"Zhaba",1284356689},{"Zion",3172678083},{"Zion2",3101863448},{"Zion3",1862507111},{"Zombiea",3285698347},{"Zombieb",3724934023},{"Zorrusso",3612858749},{"Zr380",540101442},{"Zr3802",3188846534},{"Zr3803",2816263004},{"Ztype",758895617},{"Alkonost",3929093893},{"Winky",4084658662},{"Annihilator2",295054921},{"Toreador",1455990255},{"Longfin",1861786828},{"Vetir",2014313426},{"Italirsx",3145241962},{"Weevil",1644055914},{"Veto",3437611258},{"Veto2",2802050217},{"Verus",298565713},{"Slamtruck",3249056020},{"Manchez2",1086534307},{"Brioso2",1429622905},{"Dingy5",3314393930},{"Squaddie",4192631813},{"Patrolboat",4018222598},{"Avisa",2588363614},{"Seasparrow2",1229411063},{"Seasparrow3",1593933419},{"Kosatka",1336872304}
}
tbl_Colors={
"0:Metallic Black","1:Metallic Graphite Black","2:Metallic Black Steal","3:Metallic Dark Silver","4:Metallic Silver","5:Metallic Blue Silver","6:Metallic Steel Gray","7:Metallic Shadow Silver","8:Metallic Stone Silver","9:Metallic Midnight Silver","10:Metallic Gun Metal","11:Metallic Anthracite Grey","12:Matte Black","13:Matte Gray","14:Matte Light Grey","15:Util Black","16:Util Black Poly","17:Util Dark silver","18:Util Silver","19:Util Gun Metal","20:Util Shadow Silver","21:Worn Black","22:Worn Graphite","23:Worn Silver Grey","24:Worn Silver","25:Worn Blue Silver","26:Worn Shadow Silver","27:Metallic Red","28:Metallic Torino Red","29:Metallic Formula Red","30:Metallic Blaze Red","31:Metallic Graceful Red","32:Metallic Garnet Red","33:Metallic Desert Red","34:Metallic Cabernet Red","35:Metallic Candy Red","36:Metallic Sunrise Orange","37:Metallic Classic Gold","38:Metallic Orange","39:Matte Red","40:Matte Dark Red","41:Matte Orange","42:Matte Yellow","43:Util Red","44:Util Bright Red","45:Util Garnet Red","46:Worn Red","47:Worn Golden Red","48:Worn Dark Red","49:Metallic Dark Green","50:Metallic Racing Green","51:Metallic Sea Green","52:Metallic Olive Green","53:Metallic Green","54:Metallic Gasoline Blue Green","55:Matte Lime Green","56:Util Dark Green","57:Util Green","58:Worn Dark Green","59:Worn Green","60:Worn Sea Wash","61:Metallic Midnight Blue","62:Metallic Dark Blue","63:Metallic Saxony Blue","64:Metallic Blue","65:Metallic Mariner Blue","66:Metallic Harbor Blue","67:Metallic Diamond Blue","68:Metallic Surf Blue","69:Metallic Nautical Blue","70:Metallic Bright Blue","71:Metallic Purple Blue","72:Metallic Spinnaker Blue","73:Metallic Ultra Blue","74:Metallic Bright Blue","75:Util Dark Blue","76:Util Midnight Blue","77:Util Blue","78:Util Sea Foam Blue","79:Uil Lightning blue","80:Util Maui Blue Poly","81:Util Bright Blue","82:Matte Dark Blue","83:Matte Blue","84:Matte Midnight Blue","85:Worn Dark blue","86:Worn Blue","87:Worn Light blue","88:Metallic Taxi Yellow","89:Metallic Race Yellow","90:Metallic Bronze","91:Metallic Yellow Bird","92:Metallic Lime",
"93:Metallic Champagne","94:Metallic Pueblo Beige","95:Metallic Dark Ivory","96:Metallic Choco Brown","97:Metallic Golden Brown","98:Metallic Light Brown","99:Metallic Straw Beige","100:Metallic Moss Brown","101:Metallic Biston Brown","102:Metallic Beechwood","103:Metallic Dark Beechwood","104:Metallic Choco Orange","105:Metallic Beach Sand","106:Metallic Sun Bleeched Sand","107:Metallic Cream","108:Util Brown","109:Util Medium Brown","110:Util Light Brown","111:Metallic White","112:Metallic Frost White","113:Worn Honey Beige","114:Worn Brown","115:Worn Dark Brown","116:Worn straw beige","117:Brushed Steel","118:Brushed Black steel","119:Brushed Aluminium","120:Chrome","121:Worn Off White","122:Util Off White","123:Worn Orange","124:Worn Light Orange","125:Metallic Securicor Green","126:Worn Taxi Yellow","127:police car blue","128:Matte Green","129:Matte Brown","130:Worn Orange","131:Matte White","132:Worn White","133:Worn Olive Army Green","134:Pure White","135:Hot Pink","136:Salmon pink","137:Metallic Vermillion Pink","138:Orange","139:Green","140:Blue","141:Mettalic Black Blue","142:Metallic Black Purple","143:Metallic Black Red","144:hunter green","145:Metallic Purple","146:Metaillic V Dark Blue","147:MODSHOP BLACK1","148:Matte Purple","149:Matte Dark Purple","150:Metallic Lava Red","151:Matte Forest Green","152:Matte Olive Drab","153:Matte Desert Brown","154:Matte Desert Tan","155:Matte Foilage Green","156:DEFAULT ALLOY COLOR","157:Epsilon Blue"
}
tbl_Wheels={
{"Sport","1:Inferno","2:Deep Five","3:Lozspeed Mk.V","4:Diamond Cut","5:Chrono","6:Feroci RR","7:FiftyNine","8:Mercie","9:Synthetic Z","10:Organic Type O","11:Endo v.1","12:GT One","13:Duper 7","14:Uzer","15:GroundRide","16:S Racer","17:Venum","18:Cosmo","19:Dash VIP","20:Ice Kid","21:Ruff Weld","22:Wangan Master","23:Super Five","24:Endo v.2","25:Split Six"},
{"Muscle","1:Classic Five","2:Dukes","3:Muscle Freak","4:Kracka","5:Azreal","6:Mecha","7:Black Top","8:Drag SPL","9:Revolver","10:Classic Rod","11:Fairlie"},
{"Lowrider","1:Flare","2:Wired","3:Triple Golds","4:Big Worm","5:Seven Fives","6:Split Six","7:Fresh Mesh","8:Lead Sled","9:Turbine","10:Super Fin","11:Classic Rod","12:Dollar","13:Dukes","14:Low Five","15:Gooch"},
{"SUV","1:VIP","2:Benefactor","3:Cosmo","4:Bippu","5:Royal Six","6:Fagorme","7:Deluxe","8:Iced Out","9:Cognescenti","10:LozSpeed Ten","11:Supernova","12:Obey RS","13:LozSpeed Baller","14:Extravaganzo","15:Split Six","16:Empowered","17:Sunrise","18:Dash VIP","19:Cutter"},
{"Offroad","1:Raider","2:Mudslinger","3:Nevis","4:Cairngorm","5:Amazon","6:Challenger","7:Dune Basher","8:Five Star","9:Rock Crawler","10:Mil Spec Steelie"},
{"Tuner","1:Cosmo","2:Super Mesh","3:Outsider","4:Rollas","5:Driftmeister","6:Slicer","7:El Quattro","8:Dubbed","9:Five Star","10:Sideways","11:Apex","12:Stanced EG","13:Countersteer","14:Endo v.1","15:Endo v.2 Dish","16:Gruppe Z","17:Choku Dori","18:Chicane","19:Saisoku","20:Dished Eight","21:Fujiwara","22:Zokusha","23:Battle VIII","24:Rally Master"},
{"Bike Wheels","1:Speedway","2:Street Special","3:Racer","4:Track Star","5:Overlord","6:Trident","7:Triple Threat","8:Stiletto","9:Wires","10:Bobber","11:Solidus","12:Ice Shield","13:Loops"},
{"High End","1:Shadow","2:Hypher","3:Blade","4:Diamond","5:Supa Gee","6:Chromatic Z","7:Mercie Ch.Lip","8:Obey RS","9:GT Chrome","10:Cheetah RR","11:Solar","12:Split Ten","13:Dash VIP","14:LozSpeed Ten","15:Carbon Inferno","16:Carbon Shadow","17:Carbonic Z","18:Carbon Solar","19:Cheetah Carbon R","20:Carbon S Racer"},
{"Benny's Original","1:OG Hunnets","2:OG Hunnets (Chrome)","3:Knock-Offs","4:Knock-Offs (Chrome)","5:Spoked Out","6:Spoked Out (Chrome)","7:Vintage Wire","8:Vintage Wire (Chrome)","9:Smoothie","10:Smoothie (Chrome)","11:Smoothie (Solid)","12:Rod Me Up","13:Rod Me Up (Chrome)","14:Rod Me Up (Solid)","15:Clean","16:Lotta Chrome","17:Spindles","18:Viking","19:Triple Spoke","20:Pharohe","21:Tiger Style","22:Three Wheelin","23:Big Bar","24:Hiohazard","25:Waves","26:lick Lick","27:Spiralizer","28:Hypnotics","29:Psycho-Delic","30:Half Cut","31:Super Electric"},
{"Benny's Bespoke","1:Chrome OG Hunnets","2:Gold OG Hunnets","3:Chrome Wires","4:Gold Wires","5:Chrome Spoked Out","6:Gold Spoked Out","7:Chrome Knock-Offs","8:Gold Knock-Offs","9:Chrome Bigger Worm","10:Gold Bigger Worm","11:Chrome Vintage Wire","12:Gold Vintage Wire","13:Chrome Classic Wire","14:Gold Classic Wire","15:Chrome Smoothie","16:Gold Smoothie","17:Chrome Classic Rod","18:Gold Classic Rod","19:Chrome Dollar","20:Gold Dollar","21:Chrome Mighty Star","22:Gold Mighty Star","23:Chrome Decadent Dish","24:Gold Decadent Dish","25:Chrome Razor Style","26:Gold Razor Style","27:Chrome Celtic Knot","28:Gold Celtic Knot","29:Chrome Warrior Dish","30:Gold Warrior Dish","31:Gold Big Dog Spokes"}
}
tbl_Lights={
"3:Blue","4:Light Blue","5:Green","6:Light Green","7:Light Yellow","8:Yellow","9:Orange","10:Red","11:Light Pink","12:Pink","13:Purple","14:Light Purple"
}
tbl_BennysDesign={
"31:White Lines","62:Classic WW","93:Retro WW","124:Red Lines","155:Blue Lines","186:Atomic"
}
tbl_Horns={
"1:Truck","2:Cop Buzzer","3:Clown","4:Musical Horn 1","5:Musical Horn 2","6:Musical Horn 3","7:Musical Horn 4","8:Musical Horn 5","9:Sad Trombone","10:Classical Horn 1","11:Classical Horn 2","12:Classical Horn 3","13:Classical Horn 4","14:Classical Horn 5","15:Classical Horn 6","16:Classical Horn 7","17:Do","18:Re","19:Mi","20:Fa","21:So","22:La","23:Ti","24:Do (High)","25:Jazz Horn 1","26:Jazz Horn 2","27:Jazz Horn 3","28:Jazz Horn Loop","29:Star Spangled 1","30:Star Spangled 2","31:Star Spangled 3","32:Star Spangled 4","33:Classical Horn Loop 1","34:Classical Horn 8","35:Classical Horn Loop 2","39:Halloween 1","40:Halloween 2","42:Halloween 3","43:San Andreas Loop","46:Liberty City Loop","47:Jingle Bells","48:Sleigh Bells","49:Deck the Halls","50:Sleigh Bells Loop","51:Organ Song","53:Air Horn 1","54:Short Air Horn 1","55:Air Horn 2","56:Short Air Horn 2","57:Air Horn 3","58:Short Air Horn 3"
}

function FindVehicleName(Hash)
    if not Hash or Hash==0 then return false end
    for k,v in pairs(tbl_Vehicles) do
        if tonumber(Hash)==tonumber(v[2]) then return v[1] end
    end
    return false
end
function GetVehicleSlots()
    tbl_GSV={}
    local max_slots=GG('i',1323678)
    for i=0,max_slots,1 do
        local hash=GG('i',1323678+1+(i*141)+66)
        local name=FindVehicleName(hash)
        if name then
            table.insert(tbl_GSV, {i,name,hash,GG('s',1323678+1+(i*141)+1)})
        end
    end
end
-- Spawn Vehicle Function
CREATE_VEHICLE = function (Hash,navAddress,dist,mod,pegasus)
   Hash = joaat(Hash)
   local plate
   if mod[1] == 0 then plate = 'i' else
     plate = 's'
     SG('i',2462286+27+1,0)
   end
   local x = readFloat(navAddress + oPositionX)
   local y = readFloat(navAddress + oPositionY)
   local z = readFloat(navAddress + oPositionZ)
   local head = readFloat(navAddress + oHeading)
   local head2 = readFloat(navAddress + oHeading2)
   x = x - (head2 * dist)
   y = y + (head * dist)
   z = z + 0.5
   SG('f',2462286+7+0, x)
   SG('f',2462286+7+1, y)
   SG('f',2462286+7+2, z)
   SG('i',2462286+27+66, Hash)
   SG('i',2462286+3, pegasus)
   SG('i',2462286+5,1)         -- can spawn flag must be odd
   SG('i',2462286+2,1)         -- spawn toggle gets reset to 0 on car spawn
   SG(plate,2462286+27+1, mod[1]) -- License plate
   SG('i',2462286+27+5, mod[2]) -- primary -1 auto 159
   SG('i',2462286+27+6, mod[3]) -- secondary -1 auto 159
   SG('i',2462286+27+7, mod[4]) -- pearlescent
   SG('i',2462286+27+8, mod[5]) -- wheel color
   SG('i',2462286+27+15, mod[20][1]) -- primary weapon
   --SG('i',2462286+27+19, -1)
   SG('i',2462286+27+20, mod[20][2]) -- secondary weapon
   SG('i',2462286+27+21, mod[6]) -- engine (0-3)
   SG('i',2462286+27+22, mod[7]) -- brakes (0-6)
   SG('i',2462286+27+23, mod[8]) -- transmission (0-9)
   SG('i',2462286+27+24, mod[9]) -- horn (0-77)
   SG('i',2462286+27+25, mod[10]) -- suspension (0-13)
   SG('i',2462286+27+26, mod[11]) -- armor (0-18)
   SG('i',2462286+27+27, mod[12]) -- turbo (0-1)
   SG('i',2462286+27+28, 1) -- weaponised ownerflag
   SG('i',2462286+27+32, mod[13]) -- colored light (0-14)
   SG('i',2462286+27+33, mod[14][2]) -- wheel selection
   SG('i',2462286+27+60, 1)
   SG('i',2462286+27+62, mod[15][1]) -- Tire smoke color R
   SG('i',2462286+27+63, mod[15][2]) -- G
   SG('i',2462286+27+64, mod[15][3]) -- B
   SG('i',2462286+27+65, mod[16]) -- Window tint 0-6
   SG('i',2462286+27+67, mod[17]) -- Livery
   SG('i',2462286+27+69, mod[14][1]) -- Wheel type
   SG('i',2462286+27+74, mod[18][1]) -- Neon R 0-255
   SG('i',2462286+27+75, mod[18][2]) -- G
   SG('i',2462286+27+76, mod[18][3]) -- B
   SG('i',2462286+27+77, 4030726305) -- vehstate
   writeBytes(GA(2462286+27+77)+1,mod[19]) -- 2:bulletproof 0:false
   SG('i',2462286+27+95, 14) -- ownerflag
   SG('i',2462286+27+94, 2) -- personal car ownerflag
end

-- Mini Garage Form
function vehicleMenu()
    if not VehicleForm then
    VehicleForm=createForm(true)
    TCOMP(VehicleForm,{Caption='Vehicle Menu',Width=325,Height=335,Position='poMainFormCenter',BorderStyle='bsToolWindow'})
    local garageList=createComboBox(VehicleForm)
    TCOMP(garageList,{Left=10,Top=10,Width=230,Height=33,DropDownCount=20,Color=536870912,Style="csDropDownList"})
    garageList.Items.clear()
    garageList.items.add("Garage Vehicle List")
    TCOMP(garageList,{Text="Garage Vehicle List"})
    local requestButton=createButton(VehicleForm)
    TCOMP(requestButton,{Caption='Request',Left=245,Top=10,Width=75,Height=33,Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight'})
    local vehicleList=createComboBox(VehicleForm)
    TCOMP(vehicleList,{Left=10,Top=45,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    vehicleList.items.add("Vehicle List")
    for k,v in pairs(tbl_Vehicles) do vehicleList.items.add(v[1]) end
    vehicleList.ItemIndex=0
    local vehicleModel=createEdit(VehicleForm)
    TCOMP(vehicleModel,{Left=10,Top=80,Width=230,Height=33,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,TextHint="Model Name"})
    local spawnButton=createButton(VehicleForm)
    TCOMP(spawnButton,{Caption='Spawn',Left=245,Top=45,Width=75,Height=70,Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight'})
    local spawnMaxButton=createButton(VehicleForm)
    TCOMP(spawnMaxButton,{Caption='Maxed',Left=245,Top=115,Width=75,Height=70,Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight'})
    local advancedToggle=createToggleBox(VehicleForm)
    TCOMP(advancedToggle,{Caption='Advance',Left=245,Top=255,Width=75,Height=70,Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight'})
    -- Modifications
    local plateEdit=createEdit(VehicleForm)
    TCOMP(plateEdit,{Left=10,Top=117,Width=230,Height=33,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,MaxLength=8,TextHint="License Plate"})
    local primaryList=createComboBox(VehicleForm)
    TCOMP(primaryList,{Left=10,Top=150,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    primaryList.items.add("Primary Color")
    for k,v in pairs(tbl_Colors) do primaryList.items.add(v) end
    primaryList.ItemIndex=0
    local secondaryList=createComboBox(VehicleForm)
    TCOMP(secondaryList,{Left=10,Top=185,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    secondaryList.items.add("Secondary Color")
    for k,v in pairs(tbl_Colors) do secondaryList.items.add(v) end
    secondaryList.ItemIndex=0
    local wheelType=createComboBox(VehicleForm)
    TCOMP(wheelType,{Left=10,Top=220,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    wheelType.items.add("Wheel Type")
    for k,v in pairs(tbl_Wheels) do wheelType.items.add(v[1]) end
    wheelType.ItemIndex=0
    local wheelID=createComboBox(VehicleForm)
    TCOMP(wheelID,{Left=10,Top=255,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    wheelID.items.add("Wheel Selection")
    wheelID.ItemIndex=0
    local lights=createComboBox(VehicleForm)
    TCOMP(lights,{Left=10,Top=290,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    lights.items.add("Colored Lights")
    lights.ItemIndex=0
    for k,v in pairs(tbl_Lights) do lights.items.add(v) end
    local pearlescentList=createComboBox(VehicleForm)
    TCOMP(pearlescentList,{Left=330,Top=10,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    pearlescentList.items.add("Pearlescent Color")
    for k,v in pairs(tbl_Colors) do pearlescentList.items.add(v) end
    pearlescentList.ItemIndex=0
    local wheelColorList=createComboBox(VehicleForm)
    TCOMP(wheelColorList,{Left=330,Top=45,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    wheelColorList.items.add("Wheel Color")
    for k,v in pairs(tbl_Colors) do wheelColorList.items.add(v) end
    wheelColorList.ItemIndex=0
    local bennysList=createComboBox(VehicleForm)
    TCOMP(bennysList,{Left=330,Top=80,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    bennysList.items.add("Benny's Wheel Design")
    for k,v in pairs(tbl_BennysDesign) do bennysList.items.add(v) end
    bennysList.ItemIndex=0
    local hornList=createComboBox(VehicleForm)
    TCOMP(hornList,{Left=330,Top=115,Width=230,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    hornList.items.add("Horn List")
    for k,v in pairs(tbl_Horns) do hornList.items.add(v) end
    hornList.ItemIndex=0
    local neonLabel=createLabel(VehicleForm)
    TCOMP(neonLabel,{Caption="Neon :",Left=330,Top=152,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight'})
    neonLabel.Font.Size=9
    local neonR=createEdit(VehicleForm)
    TCOMP(neonR,{Left=400,Top=152,Width=50,Height=33,TextHint="R",Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,MaxLength=3})
    local neonG=createEdit(VehicleForm)
    TCOMP(neonG,{Left=455,Top=152,Width=50,Height=33,TextHint="G",Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,MaxLength=3})
    local neonB=createEdit(VehicleForm)
    TCOMP(neonB,{Left=510,Top=152,Width=50,Height=33,TextHint="B",Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,MaxLength=3})
    local smokeLabel=createLabel(VehicleForm)
    TCOMP(smokeLabel,{Caption="Smoke :",Left=330,Top=190,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight'})
    smokeLabel.Font.Size=9
    local smokeR=createEdit(VehicleForm)
    TCOMP(smokeR,{Left=400,Top=190,Width=50,Height=33,TextHint="R",Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,MaxLength=3})
    local smokeG=createEdit(VehicleForm)
    TCOMP(smokeG,{Left=455,Top=190,Width=50,Height=33,TextHint="G",Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,MaxLength=3})
    local smokeB=createEdit(VehicleForm)
    TCOMP(smokeB,{Left=510,Top=190,Width=50,Height=33,TextHint="B",Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,MaxLength=3})

    -- Functions
    function getVehicleOptions(model,max)
        local lc=plateEdit.Text
        local c1=primaryList.ItemIndex-1
        local c2=secondaryList.ItemIndex-1
        local c3=pearlescentList.ItemIndex-1
        local c4=wheelColorList.ItemIndex-1
        local w1=wheelType.ItemIndex-1
        local w2=wheelID.ItemIndex
        local w3=bennysList.ItemIndex
        local hn=hornList.ItemIndex
        if w3 > 0 then w3=bennysList.Items[w3]:match("([^,]+):") end
        if hn > 0 then hn=hornList.Items[hn]:match("([^,]+):")
        else hn = -1 end
        local cl=lights.ItemIndex+2
        local nr,ng,nb=neonR.Text,neonG.Text,neonB.Text
        local sr,sg,sb=smokeR.Text,smokeG.Text,smokeB.Text
        if lc == nil or lc == '' then lc = 0 end
        if w2 == 0 then w2 = -1 end
        local wp,wp2 = 2,1
        if model == 'apc' or model == 'deluxo' then
          wp = -1
        elseif model == 'bombushka' then
          wp = 1
        elseif model == 'tampa3' or model == 'insurgent3' or model == 'halftrack' then
          wp = 3
        elseif model == 'barrage' then
          wp = 30
        end
        local mod
        if max then
          mod = {
          lc,c1,c2,c3,c4,4,3,3,hn,8,5,1,cl,{w1,w2+w3},{sr,sg,sb},-1,0,{nr,ng,nb},2,{wp,wp2}
          }
        else
          mod = {
          lc,c1,c2,c3,c4,-1,-1,-1,hn,-1,-1,0,cl,{w1,w2+w3},{sr,sg,sb},-1,0,{nr,ng,nb},0,{1,1}
          }
        end
        return mod
    end
    garageList.OnDropDown=function()
        garageList.Items.clear()
        garageList.items.add("Garage Vehicle List")
        GetVehicleSlots()
        for k,v in pairs(tbl_GSV) do
            garageList.items.add(string.format('[%i] %s (%s)',v[1],v[2],v[4]))
        end
        garageList.ItemIndex=0
    end
    requestButton.OnClick=function()
        local id=garageList.ItemIndex
        if id==-1 or id==0 then return end
        SG('i',2540384+962,tbl_GSV[id][1])
        SG('i',2540384+959,1)
        Sleep(1000)
        garageList.Items.clear()
        garageList.Items.add("Garage Vehicle List")
        garageList.ItemIndex=0
    end
    spawnButton.OnClick=function()
        local nav = readPointer("[[WorldPTR]+pCPed]+pCNavigation")
        local id=vehicleList.ItemIndex
        if vehicleModel.Text == '' then
           if id<=0 then return end
           local mod = getVehicleOptions(tbl_Vehicles[id][1])
           CREATE_VEHICLE(tbl_Vehicles[id][1],nav,5,mod,0)
        else
           local mod = getVehicleOptions(vehicleModel.Text)
           CREATE_VEHICLE(vehicleModel.Text,nav,7,mod,0)
        end
    end
    spawnMaxButton.OnClick=function()
        local nav = readPointer("[[WorldPTR]+pCPed]+pCNavigation")
        local id=vehicleList.ItemIndex
        if vehicleModel.Text == '' then
           if id<=0 then return end
           local mod = getVehicleOptions(tbl_Vehicles[id][1],true)
           CREATE_VEHICLE(tbl_Vehicles[id][1],nav,5,mod,0)
        else
           local mod = getVehicleOptions(vehicleModel.Text,true)
           CREATE_VEHICLE(vehicleModel.Text,nav,7,mod,0)
        end
    end
    wheelID.OnDropDown=function ()
        local wheelType = wheelType.ItemIndex
        if wheelType > 0 then
        wheelID.Items.clear()
        wheelID.items.add("Wheel Selection")
        for k,v in pairs(tbl_Wheels[wheelType]) do wheelID.items.add(v) end
        wheelID.Items.delete(1)
        wheelID.ItemIndex=0
        end
    end
    advancedToggle.OnClick=function()
        if advancedToggle.Checked == true then VehicleForm.Width=575
        else VehicleForm.Width=325 end
    end
    VehicleForm.OnClose=function() VehicleForm.hide() end
    end
    VehicleForm.show()
end

-- Get Local Script Function
function GetLocalScript(Name)
	local a=getAddress('LocalScriptsPTR')
	for i=0,52,1 do
		local p=readPointer(readPointer(a)+(i*0x8))
		local lc_p,lc_n=readInteger(p+0xB0),readString(p+0xD0)
		if lc_n==nil then goto continue
		elseif lc_n==Name and lc_p~=0 then return p+0xB0 end
		::continue::
	end
	return false
end

-- Casino Things
CTCP={} -- Casino Three Card Poker
function CTCP.LA(Index) return readQword(getAddress('three_card_poker_ptr'))+(8*Index) end
function CTCP.GL(Index) return readInteger(CTCP.LA(Index)) end
function CTCP.SL(Index,Value) writeInteger(CTCP.LA(Index),Value) end
CST={} -- Casino Slots
function CST.LA(Index) return readQword(getAddress('casino_slots_ptr'))+(8*Index) end
function CST.GL(Index) return readInteger(CST.LA(Index))end
function CST.SL(Index,Value) writeInteger(CST.LA(Index),Value)end
function CST.Set_Jackpot_On_All_Slots(ID) --// ID 0-7 need only to be set once
	local l_address=GetLocalScript('casino_slots')
	if not l_address then showMessage("Please go inside the casino before activating!") return end
	unregisterSymbol('casino_slots_ptr') registerSymbol('casino_slots_ptr',l_address,true)
	for f=0,2,1 do
		for i=0,63,1 do CST.SL(1354+1+1+(f*65)+1+i,ID)end
	end
    rigged=1
end
function CTCP.Straight_Flush()
	local l_address=GetLocalScript("three_card_poker")
	if not l_address then showMessage("Please go inside the casino before activating!") return end
	unregisterSymbol('three_card_poker_ptr') registerSymbol('three_card_poker_ptr',l_address,true)
	local current_table=CTCP.GL(755+1+(PLAYER_ID()*9)+2)
	local i=122+168+1+(current_table*55)+2
	CTCP.SL(i+1,50) CTCP.SL(1846,50)  -- 1st Card
	CTCP.SL(i+2,51) CTCP.SL(1847,51)  -- 2nd Card
	CTCP.SL(i+3,52) CTCP.SL(1848,52)  -- 3rd Card
end

-- Business Things
tbl_Business={--[[Meth,Weed,Cocaine,Cash,Documents]]}
tbl_BusinessLocations={
  {{1,"Paleto Bay"},{6,"El Burro Heights"},{11,"Grand Senora Desert"},{16,"Terminal"}},
  {{2,"Mount Chiliad"},{7,"Downtown Vinewood"},{12,"San Chianski"},{17,"Elysian Island"}},
  {{3,"Paleto Bay"},{8,"Morningwood"},{13,"Alamo Sea"},{18,"Elysian Island"}},
  {{4,"Paleto Bay"},{9,"Vespucci Canals"},{14,"Grand Senora Desert"},{19,"Cypress Flats"}},
  {{5,"Paleto Bay"},{10,"Textile City"},{15,"Grapeseed"},{20,"Elysian Island"}}
}

-- Bunker Deliver
function deliverBunker(amount,value)
   if value == nil then
   value= readInteger("[GTA5.exe+025F2F30]+128") end
   local cargo= readInteger("[[GlobalPTR-128]+1180]+37C0")
   local total= amount*cargo/value
   writeInteger("[[GlobalPTR-128]+1180]+3F68", total)
   writeInteger("[[GlobalPTR-128]+1180]+46E0", 1)
   writeFloat(GA(262145+21045),1)
   SG('i',262145+21228,1)
   SG('i',262145+21232,1)
   SG('i',262145+21222,1)
   SG('i',262145+21230,1)
   SG('i',262145+21235,1)
   SG('i',262145+21224,1)
   sleep(300)
   writeFloat(GA(262145+21045),1.5)
   SG('i',262145+21228,1800000)
   SG('i',262145+21232,900000)
   SG('i',262145+21222,900000)
   SG('i',262145+21230,900000)
   SG('i',262145+21235,900000)
   SG('i',262145+21224,900000)
end

-- Stat Editor
function setStat(stat,value)
   local char,hash
   if stat:match("MP") == nil then
      char = "MP"..GG('i',1312763).."_"
      hash = joaat(char..stat)
   else hash = joaat(stat) end
   local oldhash = GG('i',1388013+4)
   local oldvalue = GG('i',939452+5526)
   SG('i',1388013+4,hash)
   SG('i',939452+5526,value)
   SG('i',1377236+1139,-1)
   sleep(1000)
   SG('i',1388013+4,oldhash)
   SG('i',939452+5526,oldvalue)
end
function readStats()
  local tbl_Stats={}
  local FileName=inputQuery('Open Stat Text file','Text File name without .txt','')
  if FileName==nil or FileName=='' then return end
  local fs=assert(io.open(string.format('%s/%s.txt',TrainerOrigin,FileName), "r"));
  local k,int32=1,false
  for c=1,200,1 do
    local line=fs:read("*line")
    if line==nil or line=='' then goto continue end
    if line=="INT32" then int32 = true goto int end
    if c%2==1 and int32==false then
       tbl_Stats[k] = {line}
    elseif c%2==0 and int32==true then
       tbl_Stats[k] = {line}
    else
       tbl_Stats[k][2] = line
       k=k+1
    end
    ::int::
  end
  ::continue::
  fs:close();
  return tbl_Stats
end
function applyStats()
    local char = GG('i',1312763)
    local tbl_Stats = readStats()
    if tbl_Stats == nil then goto continue end
    local i = 0
    for _ in pairs(tbl_Stats) do i=i+1 end
    for c,k in pairs(tbl_Stats) do
       if k[1]:match("$") then k[1]=k[1]:match("$([^,]+)") end
       k[1]=k[1]:sub(1,2)..char..k[1]:sub(4)
       printf("Applying %i/%i",c,i)
       --print(k[1]..'\n'..k[2])
       setStat(k[1],k[2])
    end
    ::continue::
end

-- Create Ambient Pickups
function createAmbientPickup(value,dist,height,x,y,z)
    if dist==nil then dist=0 end
    if height==nil then height=0 end
    local nav=readPointer("[[WorldPTR]+pCPed]+pCNavigation")
    local head=readFloat(nav + oHeading)
    local head2=readFloat(nav + oHeading2)
    local x,y,z
    if not x then x=readFloat(nav + oPositionX) end
    if not y then y=readFloat(nav + oPositionY) end
    if not z then z=readFloat(nav + oPositionZ) end
    SG('f',2515202+3,x-(head2*(dist)))
    SG('f',2515202+4,y+(head*(dist)))
    SG('f',2515202+5,z+height)
    SG('i',2515202+1,value)
    local iParam=GG('i',2515202)
    if iParam==nil then return end
    if iParam~=0 then iParam=0 SG('i',2515202,iParam) end
    SG('i',4264051+1+(iParam*85)+66+2,2)
    SG('i',2515208,1)
end
function setPickup(hash)
    hash = joaat(hash)
    local CPickupInterface=readPointer("ReplayInterfacePTR")+pCPickupInterface
   local PickupCount=readInteger(readPointer(CPickupInterface)+oPickupNum)
   local PickupList=readPointer(CPickupInterface)+pPickupList
   if not PickupList then return end
   for i=0,PickupCount,1 do
       	local p=readPointer(PickupList)+(i*0x10)
        if not p then goto continue end
        local PickupHash=readInteger(readPointer(p)+0x488)
        if not PickupHash then goto continue end
        if PickupHash==4263048111 then writeInteger(readPointer(p)+0x488,hash) end
        ::continue::
    end
end
function setModel(hash)
   hash = joaat(hash)
   local ptr_prop_cash_pile_01="[[[[[ReplayInterfacePTR]+20]+B0]+0]+490]+E80"
   writeInteger(ptr_prop_cash_pile_01,hash)
end
function checkPickup()
   local CPickupInterface=readPointer("ReplayInterfacePTR")+pCPickupInterface
   local PickupCount=readInteger(readPointer(CPickupInterface)+oPickupNum)
   local PickupList=readPointer(CPickupInterface)+pPickupList
   if not PickupList then return end
   for i=0,PickupCount,1 do
      local p=readPointer(PickupList)+(i*0x10)
      if not p then goto continue end
      local PickupHash=readInteger(readPointer(p)+0x488)
      if not PickupHash then goto continue end
      print(PickupHash)
      ::continue::
   end
end
function createPickup(amount,dist,height,pickup,model,x,y,z)
   if model then if model ~= "prop_cash_pile_01" then
   setModel(model) end end
   createAmbientPickup(amount,dist,height,x,y,z)
   sleep(200)
   if pickup then setPickup(pickup) end
end

-- Weapon Dropper
tbl_Weapons={
{"  --( Handguns )--"},{"AP Pistol","pickup_weapon_appistol"},{"Ceramic Pistol","pickup_weapon_ceramicpistol"},{"Combat Pistol","pickup_weapon_combatpistol"},{"Double Action","pickup_weapon_doubleaction"},{"Flaregun","pickup_weapon_flaregun"},{"Heavy Pistol","pickup_weapon_heavypistol"},{"Marksman Pistol","pickup_weapon_marksmanpistol"},{"Navy Revolver","pickup_weapon_navyrevolver"},{"Pistol","pickup_weapon_pistol"},{"Pistol Mk2","pickup_weapon_pistol_mk2"},{"Pistol 50","pickup_weapon_pistol50"},{"Perico Pistol","pickup_weapon_gadgetpistol"},{"Heavy Revolver","pickup_weapon_revolver"},{"Heavy Revolver Mk2","pickup_weapon_revolver_mk2"},{"SNS Pistol","pickup_weapon_snspistol"},{"SNS Pistol Mk2","pickup_weapon_snspistol_mk2"},{"Stun Gun","pickup_weapon_stungun"},{"Up-n-Atomizer","pickup_weapon_raypistol"},{"Vintage Pistol","pickup_weapon_vintagepistol"},{"  --( Rifles )--"},{"Advanced Rifle","pickup_weapon_advancedrifle"},{"Assault Rifle","pickup_weapon_assaultrifle"},{"Assault Rifle Mk2","pickup_weapon_assaultrifle_mk2"},{"Bullpup Rifle","pickup_weapon_bullpuprifle"},{"Bullpup Rifle Mk2","pickup_weapon_bullpuprifle_mk2"},{"Carbine Rifle","pickup_weapon_carbinerifle"},{"Carbine Rifle Mk2","pickup_weapon_carbinerifle_mk2"},{"Compact Rifle","pickup_weapon_compactrifle"},{"Military Rifle","pickup_weapon_militaryrifle"},{"Special Carbine","pickup_weapon_specialcarbine"},{"Special Carbine Mk2","pickup_weapon_specialcarbine_mk2"},{"  --( Shotguns )--"},{"Assault Shotgun","pickup_weapon_assaultshotgun"},{"Autoshotgun","pickup_weapon_autoshotgun"},{"Combat Shotgun","pickup_weapon_combatshotgun"},{"Double Barrel Shotgun","pickup_weapon_dbshotgun"},{"Heavy Shotgun","pickup_weapon_heavyshotgun"},{"Musket","pickup_weapon_musket"},{"Pumpshotgun","pickup_weapon_pumpshotgun"},{"Pumpshotgun Mk2","pickup_weapon_pumpshotgun_mk2"},{"Sawed-Off Shotgun","pickup_weapon_sawnoffshotgun"},{"  --( SMGs )--"},{"Assault SMG","pickup_weapon_assaultsmg"},{"Combat PDW","pickup_weapon_combatpdw"},{"Gusenberg","pickup_weapon_gusenberg"},{"Machine Pistol","pickup_weapon_machinepistol"},
{"Micro SMG","pickup_weapon_microsmg"},{"Mini SMG","pickup_weapon_minismg"},{"SMG","pickup_weapon_smg"},{"SMG Mk2","pickup_weapon_smg_mk2"},{"  --( MGs )--"},{"Combat MG","pickup_weapon_combatmg"},{"Combat MG Mk2","pickup_weapon_combatmg_mk2"},{"MG","pickup_weapon_mg"},{"Unholy Hellbringer","pickup_weapon_raycarbine"},{"  --( Snipers )--"},{"Heavysniper","pickup_weapon_heavysniper"},{"Heavysniper Mk2","pickup_weapon_heavysniper_mk2"},{"Marksman Rifle","pickup_weapon_marksmanrifle"},{"Marksman Rifle Mk2","pickup_weapon_marksmanrifle_mk2"},{"Sniper Rifle","pickup_weapon_sniperrifle"},{"  --( Heavies )--"},{"Compact Grenade Launcher","pickup_weapon_compactlauncher"},{"Firework","pickup_weapon_firework"},{"Grenade Launcher","pickup_weapon_grenadelauncher"},{"Grenade Launcher Smoke","weapon_grenadelauncher_smoke"},{"Homing Launcher","pickup_weapon_hominglauncher"},{"Minigun","pickup_weapon_minigun"},{"RPG","pickup_weapon_rpg"},{"Railgun","pickup_weapon_railgun"},{"Widowmaker","pickup_weapon_rayminigun"}
}
tbl_Misc={
{"  --( Misc )--"},{"Parachute","pickup_parachute"},{"Armor","pickup_armor_standard"},{"Health Medkit","pickup_health_standard"},{"Snack","pickup_health_snack"},{"  --( Melee )--"},{"Baseball Bat","pickup_weapon_bat"},{"Battle Axe","pickup_weapon_battleaxe"},{"Bottle","pickup_weapon_bottle"},{"Crowbar","pickup_weapon_crowbar"},{"Dagger","pickup_weapon_dagger"},{"Flashlight","pickup_weapon_flashlight"},{"Golf Club","pickup_weapon_golfclub"},{"Hammer","pickup_weapon_hammer"},{"Hatchet","pickup_weapon_hatchet"},{"Knuckles","pickup_weapon_knuckle"},{"Knife","pickup_weapon_knife"},{"Machete","pickup_weapon_machete"},{"Pool Cue","pickup_weapon_poolcue"},{"Stone Hatchet","pickup_weapon_stone_hatchet"},{"Switchblade","pickup_weapon_switchblade"},{"Nightstick","pickup_weapon_nightstick"},{"Wrench","pickup_weapon_wrench"},{"  --( Explosives )--"},{"Grenade","pickup_weapon_grenade"},{"Sticky Bomb","pickup_weapon_stickybomb"},{"Molotov","pickup_weapon_molotov"},{"BZ Gas","pickup_weapon_bzgas"},{"Tear Gas","pickup_weapon_smokegrenade"},{"Proxy Mine","pickup_weapon_proxmine"},{"Pipebomb","pickup_weapon_pipebomb"},{"Flare","pickup_weapon_flare"},{"Snowball","pickup_weapon_snowball"},{"Baseball","pickup_weapon_ball"},{"Jerry Can","pickup_weapon_petrolcan"},{"Hazard Can","pickup_weapon_hazardcan"},{"Fire Extinguisher","pickup_weapon_fireextinguisher"}
}
function weaponMenu()
    if not WeaponForm then
    WeaponForm=createForm(true)
    TCOMP(WeaponForm,{Caption='Item Dropper',Width=290,Height=120,Position='poMainFormCenter',BorderStyle='bsToolWindow',Align='alNone',Visible=true})
    local weaponList=createComboBox(WeaponForm)
    TCOMP(weaponList,{Left=10,Top=10,Width=190,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    weaponList.items.add("Main Weapon List")
    for k,v in pairs(tbl_Weapons) do weaponList.items.add(v[1]) end
    weaponList.ItemIndex=0
    local selfButton=createButton(WeaponForm)
    TCOMP(selfButton,{Caption='Self',Left=205,Top=10,Width=75,Height=33,Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight'})
	 local miscList=createComboBox(WeaponForm)
    TCOMP(miscList,{Left=10,Top=50,Width=190,Height=33,DropDownCount=20,Align='alNone',Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight',CharCase='ecNormal',Color=536870912,Style="csDropDownList"})
    miscList.items.add("Miscellaneous List")
    for k,v in pairs(tbl_Misc) do miscList.items.add(v[1]) end
    miscList.ItemIndex=0
    local frontButton=createButton(WeaponForm)
    TCOMP(frontButton,{Caption='Front',Left=205,Top=50,Width=75,Height=33,Enabled=true,Visible=true,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight'})
    local Label=createLabel(WeaponForm)
    TCOMP(Label,{Caption="Some doesn't work!",Left=10,Top=85,Anchors='[akTop,akLeft]',BidiMode='bdLeftToRight'})
    Label.Font.Size=7
    Label.Font.Color=clRed
    selfButton.OnClick=function()
        local id=weaponList.ItemIndex
		  local id2=miscList.ItemIndex
		  if id>0 and id2<=0 then
           if tbl_Weapons[id][2] then
             createPickup(9999,0,2,tbl_Weapons[id][2])
           end
        elseif id<=0 and id2>0 then
           if tbl_Misc[id2][2] then
             createPickup(9999,0,2,tbl_Misc[id2][2])
           end
		  else weaponList.ItemIndex=0 miscList.ItemIndex=0 end
        end
    frontButton.OnClick=function()
        local id=weaponList.ItemIndex
		  local id2=miscList.ItemIndex
		  if id>0 and id2<=0 then
           if tbl_Weapons[id][2] then
             createPickup(9999,5,2,tbl_Weapons[id][2])
           end
        elseif id<=0 and id2>0 then
           if tbl_Misc[id2][2] then
             createPickup(9999,5,2,tbl_Misc[id2][2])
           end
        else weaponList.ItemIndex=0 miscList.ItemIndex=0
        end
    end
    WeaponForm.OnClose=function() WeaponForm.hide()
    --WeaponForm.destroy() WeaponForm = nil end
    end
  end
  WeaponForm.show()
end

-- Test Replay Interfaces
function testOffset(target,offset)
   if target == 'veh' then
      local interface,count,list = getVehInterface()
   else
      local interface,count,list = getPedInterface()
   end
   for i=0,count,1 do
      local entity = readPointer(list+i*0x10)
      if not entity then goto continue end
      print(i,readBytes(entity + offset))
   ::continue::
   end
end

-- Ped Replay Interface
function getPeds()
   local interface=readPointer("[ReplayInterfacePTR]+pCPedInterface")
   local count=readInteger(interface+oPedNum)
   local list=readPointer(interface+pPedList)
   local tbl_Peds = {}
   for i=0,count,1 do
      local Ped = readPointer(list+i*0x10)
      if not Ped then goto continue end
      if readBytes(Ped + oEntityType) == 156 then goto continue end
      table.insert(tbl_Peds,Ped)
   ::continue::
   end
   return tbl_Peds
end
function killPeds(target)
   local peds = getPeds()
   for k,v in pairs(peds) do
      local Ped = getAddress(v)
      local pedHostility = readBytes(Ped+oHostility)
      if not pedHostility then goto continue end
      if target then
        if pedHostility > 1 then writeFloat(Ped+oHealth,0) end
      else writeFloat(Ped+oHealth,0) end
   ::continue::
   end
end
function killPedVehs(target)
   local peds = getPeds()
   for k,v in pairs(peds) do
      local Ped = getAddress(v)
      local pedHostility = readBytes(Ped+oHostility)
      if not pedHostility then goto continue end
      local pedVeh = readPointer(Ped + pCVehicle)
      if not pedVeh then goto continue end
      local function destroy()
        writeFloat(pedVeh + oVHealth,-1)
        writeFloat(pedVeh + oVHealth2,-1)
        writeFloat(pedVeh + oVHealth3,-1)
        writeFloat(pedVeh + oVEngineHealth,-1)
      end
      if target then
        if pedHostility > 1 then destroy() end
      else destroy() end
   ::continue::
   end
end
function tpPeds(target)
   local x,y,z = getCurrentCoords()
   local peds = getPeds()
   for k,v in pairs(peds) do
      local Ped = getAddress(v)
      if readFloat(Ped + oHealth) == 0 then goto continue end
      local pedNav = readPointer(Ped + pCNavigation)
      if not pedNav then goto continue end
      local pedHostility = readBytes(Ped+oHostility)
      local function teleport()
        writeFloat(pedNav + oPositionX,x)
        writeFloat(pedNav + oPositionY,y)
        writeFloat(pedNav + oPositionZ,z+(i*0.1))
        writeFloat(Ped + oVisualX,x)
        writeFloat(Ped + oVisualY,y)
        writeFloat(Ped + oVisualZ,z+(i*0.1))
      end
      if target ~= nil then
        if pedHostility > 1 then teleport() end
      else teleport()
      end
   ::continue::
   end
end

-- Vehicle Replay Interface functions
function getVehs()
   local interface=readPointer("[ReplayInterfacePTR]+pCVehicleInterface")
   local count=readInteger(interface+oVehNum)
   local list=readPointer(interface+pVehList)
   local tbl_Vehs = {}
   for i=0,count,1 do
      local Veh = readPointer(list+i*0x10)
      if not Veh then goto continue end
      table.insert(tbl_Vehs,Veh)
   ::continue::
   end
   return tbl_Vehs
end
function killVehs()
   local vehs = getVehs()
   for k,v in pairs(vehs) do
      local Veh = getAddress(v)
      local vehState = readBytes(Veh + oVState)
      if not vehState then goto continue end
      writeFloat(Veh + oVHealth,-1)
      writeFloat(Veh + oVHealth2,-1)
      writeFloat(Veh + oVHealth3,-1)
      writeFloat(Veh + oVEngineHealth,-1)
   ::continue::
   end
end
function reviveVehs()
   local vehs = getVehs()
   for k,v in pairs(vehs) do
      local Veh = getAddress(v)
      local vehState = readBytes(Veh + oVState)
      if vehState ~= 3 then goto continue end
      local vehMax = readFloat(Veh + oVHealthMax)
      writeBytes(Veh + oVState,2)
      writeFloat(Veh + oVHealth,vehMax)
      writeFloat(Veh + oVHealth2,vehMax)
      writeFloat(Veh + oVHealth3,vehMax)
      writeFloat(Veh + oVEngineHealth,vehMax)
   ::continue::
   end
end

-- Playerlist Menu
function playerListMenu()
  if not playerlistForm then
    getPlayerList()
    local playerListForm=createForm(true)
    TCOMP(playerListForm,{Caption='Session Player List',Width=400,Height=400,Position='poMainFormCenter',BorderStyle='bsSizeToolWin',Align='alNone',Visible=true})
    local playerList=createListBox(playerListForm)
    TCOMP(playerList,{Left=5,Top=5,Height=390,Width=195})
    playerList.Font.Size = 8
    local update=createToggleBox(playerListForm)
    TCOMP(update,{Caption='Update',Left=210,Top=350,Height=40,Width=90})
    local updateInterval=createEdit(playerListForm)
    TCOMP(updateInterval,{TextHint='Interval',Text=3000,Left=305,Top=355,Height=40,Width=50,MaxLength=4,NumbersOnly=true})
    local ms=createLabel(playerListForm)
    TCOMP(ms,{Caption='ms',Left=360,Top=360,Height=40,Width=120})
    local updateTimer=createTimer(playerListForm,false)
    updateTimer.Interval = 3000
    local tpButton=createButton(playerListForm)
    TCOMP(tpButton,{Caption='Teleport',Left=210,Top=5,Height=40,Width=180})
    local infoMemo=createMemo(playerListForm)
    TCOMP(infoMemo,{Left=210,Top=50,Height=295,Width=180,ReadOnly=true,Scrollbars=ssAutoVertical})
    infoMemo.Font.Size = 9
    for k,v in pairs(tbl_Players) do playerList.Items.add(v[2]) end
    if playerList.Items.Count > 0 then playerList.ItemIndex=0 end
    playerList.OnClick = function()
       if playerList.Items.Count < 1 then return end
       local index = playerList.ItemIndex + 1
       if index < 1 then return end
       local id = tbl_Players[index][1]
       local CPed = tbl_Players[index][3]
       local s = getPlayerInfo(CPed)
       local x,y,z = getPlayerCoords(CPed)
       local inb = false
       if z and tonumber(z) < -25.0 then inb = true end
       infoMemo.Lines.Text = string.format([[Health: %s
Max Health: %s
Wanted Level: %i
Run Speed: %s
God Mode: %s
No Ragdoll: %s
In Building: %s

X: %s
Y: %s
Z: %s]],s[1][1],s[1][2],s[1][3],s[1][4],s[1][5],s[1][6],inb,x,y,z)
    end
    update.OnClick = function()
       local function updateList()
         local lastIndex = playerList.ItemIndex
         local lastTop = playerList.TopIndex
         local count = playerList.Items.Count
         local i=0
         getPlayerList()
         for _ in pairs(tbl_Players) do i=i+1 end
         if count ~= i then
            playerList.ItemIndex = -1
            playerList.Items.clear()
            if i ~= 0 then
               for k,v in pairs(tbl_Players) do playerList.Items.add(v[2]) end
               if i >= lastIndex then
                  playerList.ItemIndex = lastIndex-1
                  playerList.TopIndex = lastTop
               end
            end
         end
       end
       if update.Checked == true then
          updateTimer.OnTimer = function() updateList() end
          updateList()
          updateTimer.Enabled = true
       else
          updateTimer.Enabled = false
       end
    end
    updateInterval.OnChange = function()
       local new = tonumber(updateInterval.Text)
       if new and new >= 500 then
          updateTimer.Interval = new
       else updateTimer.Interval = 3000
       end
    end
    tpButton.OnClick = function()
       if playerList.Items.Count < 1 then return end
       local index = playerList.ItemIndex + 1
       if index < 1 then return end
       local id = tbl_Players[index][1]
       local addr = tbl_Players[index][3]
       local x,y,z = getPlayerCoords(addr)
       if not x then return end
       teleport(x,y,z+1)
    end
    playerListForm.OnResize = function()
       local w,h = playerListForm.Width,playerListForm.Height
       if h < 230 then
        playerListForm.Height = 230
       else
        playerList.Height = h - 10
        infoMemo.Height = h - 105
        update.Top = h - 50
        updateInterval.Top = h - 45
        ms.Top = h - 40
       end
       if w < 350 then
        playerListForm.Width = 350
       else
        if w < 450 then infoMemo.Font.Size = 7
        elseif w < 550 then infoMemo.Font.Size = 8
        else infoMemo.Font.Size = 9
        end
        tpButton.Width = w - 220
        infoMemo.Width = w - 220
        update.Width = w - 310
        updateInterval.Left = w - 95
        ms.Left = w - 40
       end
    end
    playerListForm.OnClose = function()
       updateTimer.destroy()
       playerListForm.destroy()
       playerListForm = nil
    end
  end
end

function getPlayerList()
    local CNetworkPlayerMgr=readPointer("PlayerCountPTR")
    tbl_Players = {}
    for i=0,32,1 do
      local isHost = GG('i',1630317+1+(i*595)+10)
      local CNetGamePlayer = readPointer(CNetworkPlayerMgr + oNumPlayers + (i*8)) if not CNetGamePlayer then goto continue end
      local CPlayerInfo = readPointer(CNetGamePlayer + pCNetPlayerInfo) if not CPlayerInfo then goto continue end
      local CPed = readPointer(CPlayerInfo + pCNetPed)
      local Name = readString(CPlayerInfo + oName)
      if isHost == 1 then Name = Name..' (Host)' end
		table.insert(tbl_Players,{i,Name,CPed})
    	::continue::
	end
end

function getPlayerCoords(CPed)
   local CNavigation = readPointer(CPed + pCNavigation)
   if not CNavigation then return false end
   local head=round(readFloat(CNavigation + oHeading),3)
   local head2=round(readFloat(CNavigation + oHeading2),3)
   local x=round(readFloat(CNavigation + oPositionX),3)
   local y=round(readFloat(CNavigation + oPositionY),3)
   local z=round(readFloat(CNavigation + oPositionZ),3)
   return x,y,z,head,head2
end

function getPlayerInfo(CPed)
   local tbl_info = {}
   local CPlayerInfo = readPointer(CPed + pCPlayerInfo)
   if not CPlayerInfo then return end
   local health=round(readFloat(CPed + oHealth),1)
   local maxhealth=round(readFloat(CPed + oHealthMax),1)
   local wanted=readBytes(CPlayerInfo + oWanted)
   local runspd=round(readFloat(CPlayerInfo + oRunSpeed),1)
   local isGod,noRagdoll
   if readBytes(CPed + oGod)==1 then isGod='true' else isGod='false' end
   if readBytes(CPed + oRagdoll)==32 then noRagdoll='false' else noRagdoll='true' end
   table.insert(tbl_info,{health,maxhealth,wanted,runspd,isGod,noRagdoll})
   return tbl_info
end

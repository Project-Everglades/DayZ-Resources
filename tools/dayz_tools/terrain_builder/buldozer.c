static void BuldozerMain() {
    // name of this file depends on the user-name (its buldozer.c when buldozer is launched with -name=Buldozer)
    // same is applied to the name of this method (<username>Main)
    // press F10 (default shortcut) to run this script in Buldozer (only available when connected to Terrain Builder)

    /*
    // Useful calls
    // sets terrain and object view distance and saves the value into the profile
    GetGame().GetWorld().SetPreferredViewDistance(1500);
    */
    
    /*
    // sets terrain view distance for current bz session / mission
    GetGame().GetWorld().SetViewDistance(2200);
    */
    GetGame().GetWorld().SetViewDistance(1500);
    
    /*
    // sets an object view distance for current bz session / mission
    GetGame().GetWorld().SetObjectViewDistance(2200);
    */
    GetGame().GetWorld().SetObjectViewDistance(1200);
    
    /*
    // changes overall brightness of the scene
    // 0 dark, 0< < 1 = light, 1 > darker
    GetGame().GetWorld().SetAperture(1);
    */
    GetGame().GetWorld().SetAperture(1);
    
    /*
    // enables/disables water in buldozer
    bool waterVisible = true;
    GetGame().GetWorld().SetBuldozerWaterEnabled(waterVisible);
    */
    
    
    /*
    // weather setup - sets clear no rain weather with next change happening in 8hrs
    Weather wo = GetGame().GetWeather();
    wo.GetRain().Set(0, 28800, 0);
    wo.GetFog().Set(0, 28800, 0);
    wo.GetOvercast().Set(0, 28800, 0);
    */
    Weather wo = GetGame().GetWeather();
    wo.GetRain().Set(0, 0, 28800);
    wo.GetFog().Set(0, 0, 28800);
    wo.GetOvercast().Set(0, 0, 28800);
    wo.SetWindMaximumSpeed(1);
    wo.SetWindFunctionParams(0.1, 0.1, 25);
    
    /*
    // mission date and time setup (y,m,d,hr,mn)
    GetGame().GetWorld().SetDate(1994, 9, 11, 12, 0);
    */
    GetGame().GetWorld().SetDate(2020, 12, 25, 11, 0);
}

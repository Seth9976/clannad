// 函数: sub_65f9b0
// 地址: 0x65f9b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = SteamAPI_GetHSteamUser()
int32_t edi = SteamAPI_GetHSteamPipe()
int32_t eax_1

if (edi != 0)
    eax_1 = SteamInternal_CreateInterface("SteamClient017")
    *arg1 = eax_1
    
    if (eax_1 != 0)
        eax_1 = (*(*eax_1 + 0x14))(eax, edi, "SteamUser019")
        arg1[1] = eax_1
        
        if (eax_1 != 0)
            eax_1 = (*(**arg1 + 0x20))(eax, edi, "SteamFriends015")
            arg1[2] = eax_1
            
            if (eax_1 != 0)
                eax_1 = (*(**arg1 + 0x24))(edi, "SteamUtils008")
                arg1[3] = eax_1
                
                if (eax_1 != 0)
                    eax_1 = (*(**arg1 + 0x28))(eax, edi, "SteamMatchMaking009")
                    arg1[4] = eax_1
                    
                    if (eax_1 != 0)
                        eax_1 = (*(**arg1 + 0x2c))(eax, edi, "SteamMatchMakingServers002")
                        arg1[7] = eax_1
                        
                        if (eax_1 != 0)
                            eax_1 =
                                (*(**arg1 + 0x34))(eax, edi, "STEAMUSERSTATS_INTERFACE_VERSION011")
                            arg1[5] = eax_1
                            
                            if (eax_1 != 0)
                                eax_1 =
                                    (*(**arg1 + 0x3c))(eax, edi, "STEAMAPPS_INTERFACE_VERSION008")
                                arg1[6] = eax_1
                                
                                if (eax_1 != 0)
                                    eax_1 = (*(**arg1 + 0x40))(eax, edi, "SteamNetworking005")
                                    arg1[8] = eax_1
                                    
                                    if (eax_1 != 0)
                                        eax_1 = (*(**arg1 + 0x44))(eax, edi, 
                                            "STEAMREMOTESTORAGE_INTERFACE_VERSION013")
                                        arg1[9] = eax_1
                                        
                                        if (eax_1 != 0)
                                            eax_1 = (*(**arg1 + 0x48))(eax, edi, 
                                                "STEAMSCREENSHOTS_INTERFACE_VERSION002")
                                            arg1[0xa] = eax_1
                                            
                                            if (eax_1 != 0)
                                                eax_1 = (*(**arg1 + 0x5c))(eax, edi, 
                                                    "STEAMHTTP_INTERFACE_VERSION002")
                                                arg1[0xb] = eax_1
                                                
                                                if (eax_1 != 0)
                                                    eax_1 = (*(**arg1 + 0x60))(eax, edi, 
                                                        "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001")
                                                    arg1[0xc] = eax_1
                                                    
                                                    if (eax_1 != 0)
                                                        eax_1 = (*(**arg1 + 0x64))(eax, edi, 
                                                            "SteamController003")
                                                        arg1[0xd] = eax_1
                                                        
                                                        if (eax_1 != 0)
                                                            eax_1 = (*(**arg1 + 0x68))(eax, edi, 
                                                                "STEAMUGC_INTERFACE_VERSION008")
                                                            arg1[0xe] = eax_1
                                                            
                                                            if (eax_1 != 0)
                                                                eax_1 = (*(**arg1 + 0x6c))(eax, edi, 
                                                                    "STEAMAPPLIST_INTERFACE_VERSION001")
                                                                arg1[0xf] = eax_1
                                                                
                                                                if (eax_1 != 0)
                                                                    eax_1 = (*(**arg1 + 0x70))(eax, edi, 
                                                                        "STEAMMUSIC_INTERFACE_VERSION001")
                                                                    arg1[0x10] = eax_1
                                                                    
                                                                    if (eax_1 != 0)
                                                                        eax_1 = (*(**arg1 + 0x74))(eax, edi, 
                                                                            "STEAMMUSICREMOTE_INTERFACE_VERSION001")
                                                                        arg1[0x11] = eax_1
                                                                        
                                                                        if (eax_1 != 0)
                                                                            eax_1 = (*(**arg1 + 0x78))(eax, edi, 
                                                                                "
                                                                                    STEAMHTMLSURFACE_INTERFACE_VERSION_003")
                                                                            arg1[0x12] = eax_1
                                                                            
                                                                            if (eax_1 != 0)
                                                                                eax_1 = (*(**arg1 + 0x88))(eax, edi, 
                                                                                    "STEAMINVENTORY_INTERFACE_V001")
                                                                                arg1[0x13] = eax_1
                                                                                
                                                                                if (eax_1 != 0)
                                                                                    int32_t eax_22 = (*(**arg1 + 0x8c))(
                                                                                        eax, edi, "STEAMVIDEO_INTERFACE_V001")
                                                                                    arg1[0x14] = eax_22
                                                                                    eax_22.b = eax_22 != 0
                                                                                    return eax_22

eax_1.b = 0
return eax_1

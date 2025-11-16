// 函数: sub_4c0310
// 地址: 0x4c0310
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = data_208c70c

if (eax != 0)
    int32_t i = 0
    HMIXER var_38
    int32_t var_28
    MIXERCONTROLDETAILS pmxcd
    
    if (arg1 != 0)
        int32_t i_1 = 0
        
        if (eax s> 0)
            void* esi_1 = &data_208c85c
            void* var_34 = &data_208c85c
            uint32_t eax_1
            
            do
                eax_1 = mixerOpen(&var_38, *(esi_1 - 0xc), 0, 0, 0)
                
                if (eax_1 == 0)
                    pmxcd.dwControlID = *esi_1
                    pmxcd.cChannels = *(esi_1 + 4)
                    pmxcd..hwndOwner = *(esi_1 + 8)
                    pmxcd.paDetails = &var_28
                    pmxcd.cbStruct = 0x18
                    pmxcd.cbDetails = 4
                    
                    if (mixerGetControlDetailsA(var_38, &pmxcd, 0) == 0)
                        int32_t ecx_25 = data_208c710 * *(esi_1 + 0xc) s/ 0xff * data_208c714
                            s/ 0xff * data_208c718 s/ 0xff * data_208c71c s/ 0xff * data_208c720
                            s/ 0xff * data_208c724 s/ 0xff * data_208c728
                        int32_t ecx_51 = data_208c710 * *(var_34 + 0x10) s/ 0xff * data_208c714
                            s/ 0xff * data_208c718 s/ 0xff * data_208c71c s/ 0xff * data_208c720
                            s/ 0xff * data_208c724 s/ 0xff * data_208c728
                        var_28 = ecx_25 s/ 0xff
                        int32_t var_24_1 = ecx_51 s/ 0xff
                        mixerSetControlDetails(var_38, &pmxcd, 0)
                        esi_1 = var_34
                        i = i_1
                    
                    eax_1 = mixerClose(var_38)
                
                i += 1
                esi_1 += 0x20
                i_1 = i
                var_34 = esi_1
            while (i s< data_208c70c)
            
            return eax_1
    else if (eax s> 0)
        int32_t* esi_2 = &data_208c85c
        
        do
            eax = mixerOpen(&var_38, esi_2[-3], 0, 0, 0)
            
            if (eax == 0)
                pmxcd.dwControlID = *esi_2
                pmxcd.cChannels = esi_2[1]
                pmxcd..hwndOwner = esi_2[2]
                pmxcd.paDetails = &var_28
                pmxcd.cbStruct = 0x18
                pmxcd.cbDetails = 4
                
                if (mixerGetControlDetailsA(var_38, &pmxcd, 0) == 0)
                    var_28 = esi_2[3]
                    int32_t var_24_2 = esi_2[4]
                    mixerSetControlDetails(var_38, &pmxcd, 0)
                
                eax = mixerClose(var_38)
            
            i += 1
            esi_2 = &esi_2[8]
        while (i s< data_208c70c)

return eax

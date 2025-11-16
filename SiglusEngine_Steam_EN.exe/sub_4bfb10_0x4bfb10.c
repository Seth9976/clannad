// 函数: sub_4bfb10
// 地址: 0x4bfb10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
data_208c70c = 0
uint32_t result = mixerGetNumDevs()
uint32_t result_1 = result
uint32_t uMxId = 0
uint32_t result_2 = result_1
uint32_t uMxId_1 = 0

if (result_1 s> 0)
    uint32_t cChannels_1 = 1
    
    do
        HMIXER var_194
        result = mixerOpen(&var_194, uMxId, 0, 0, 0)
        
        if (result == 0)
            MIXERCAPSA pmxcaps
            
            if (mixerGetDevCapsA(uMxId, &pmxcaps, 0x30) == 0)
                int32_t i = 0
                int32_t i_1 = 0
                
                if (pmxcaps.cDestinations s> 0)
                    do
                        MIXERLINEA pmxl
                        pmxl.cbStruct = 0xa8
                        pmxl.dwDestination = i
                        
                        if (mixerGetLineInfoA(var_194, &pmxl, 0) == 0 && pmxl.dwComponentType == 4)
                            int32_t j = 0
                            int32_t j_1 = 0
                            
                            if (pmxl.cConnections s> 0)
                                do
                                    MIXERLINEA pmxl_1
                                    pmxl_1.cbStruct = 0xa8
                                    pmxl_1.dwDestination = i
                                    pmxl_1.dwSource = j
                                    
                                    if (mixerGetLineInfoA(var_194, &pmxl_1, 1) == 0
                                            && pmxl_1.dwComponentType == arg1)
                                        uint32_t cControls = pmxl_1.cControls
                                        
                                        if (cControls != 0)
                                            uint32_t eax_6 = cControls * 0x94
                                            int32_t var_1ac = 0
                                            uint32_t var_190 = 0
                                            sub_4d6960(eax_6, &var_190, &var_1ac, eax_6, 
                                                "MixerControl")
                                            uint32_t esi = var_190
                                            MIXERLINECONTROLSA pmxlc
                                            pmxlc.dwLineID = pmxl_1.dwLineID
                                            pmxlc.cControls = pmxl_1.cControls
                                            pmxlc.cbStruct = 0x18
                                            pmxlc..dwControlID = 0
                                            pmxlc.cbmxctrl = 0x94
                                            pmxlc.pamxctrl = esi
                                            
                                            if (mixerGetLineControlsA(var_194, &pmxlc, 0) == 0)
                                                uint32_t cControls_1 = pmxlc.cControls
                                                int32_t ebx = 0
                                                
                                                if (cControls_1 s> 0)
                                                    int32_t* esi_1 = esi + 0xc
                                                    
                                                    do
                                                        if (esi_1[-1] == 0x50030001)
                                                            int32_t eax_10 = *esi_1
                                                            uint32_t cChannels = pmxl_1.cChannels
                                                            uint32_t ecx_2 = eax_10 u>> 0x1f
                                                            
                                                            if ((eax_10.b & 1) != 0)
                                                                cChannels = cChannels_1
                                                            
                                                            int32_t eax_11
                                                            
                                                            if ((eax_10.b & 2) == 0)
                                                                eax_11 = 1
                                                            else
                                                                eax_11 = esi_1[1]
                                                            
                                                            if ((cChannels == 1 || cChannels == 2)
                                                                    && eax_11 == 1 && ecx_2 == 0)
                                                                uint32_t eax_12 = cChannels << 2
                                                                uint32_t var_1a8 = ecx_2
                                                                var_190 = ecx_2
                                                                sub_4d6960(eax_12, &var_190, &var_1a8, 
                                                                    eax_12, "MixerDetail")
                                                                MIXERCONTROLDETAILS pmxcd
                                                                pmxcd.dwControlID = esi_1[-2]
                                                                pmxcd..hwndOwner = esi_1[1]
                                                                pmxcd.cChannels = cChannels
                                                                uint32_t edi_1 = var_190
                                                                pmxcd.cbStruct = 0x18
                                                                pmxcd.cbDetails = 4
                                                                pmxcd.paDetails = edi_1
                                                                
                                                                if (mixerGetControlDetailsA(var_194, 
                                                                        &pmxcd, 0) == 0)
                                                                    int32_t edx_3 = data_208c70c
                                                                    
                                                                    if (edx_3 == 0x20)
                                                                        break
                                                                    
                                                                    int32_t ecx_5 = edx_3 << 5
                                                                    data_208c70c = edx_3 + 1
                                                                    *(ecx_5 + 0x208c850) = uMxId_1
                                                                    *(ecx_5 + 0x208c854) = i_1
                                                                    *(ecx_5 + 0x208c858) = j_1
                                                                    *(ecx_5 + &data_208c85c) =
                                                                        pmxcd.dwControlID
                                                                    *(ecx_5 + 0x208c860) = pmxcd.cChannels
                                                                    *(ecx_5 + 0x208c864) = pmxcd..hwndOwner
                                                                    *(ecx_5 + 0x208c868) = *edi_1
                                                                    *(ecx_5 + 0x208c86c) = *(edi_1 + 4)
                                                                
                                                                sub_4d6c40(&var_1a8, &var_190)
                                                                cControls_1 = pmxlc.cControls
                                                        
                                                        ebx += 1
                                                        esi_1 = &esi_1[0x25]
                                                    while (ebx s< cControls_1)
                                                
                                                j = j_1
                                            
                                            sub_4d6c40(&var_1ac, &var_190)
                                            i = i_1
                                    
                                    j += 1
                                    j_1 = j
                                while (j s< pmxl.cConnections)
                        
                        i += 1
                        i_1 = i
                    while (i s< pmxcaps.cDestinations)
                    
                    uMxId = uMxId_1
                
                result_1 = result_2
            
            result = mixerClose(var_194)
        
        uMxId += 1
        uMxId_1 = uMxId
    while (uMxId s< result_1)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

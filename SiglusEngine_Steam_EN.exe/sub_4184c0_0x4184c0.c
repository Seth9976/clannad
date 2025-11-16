// 函数: sub_4184c0
// 地址: 0x4184c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = arg1
void* esi = data_1cd6408
void* edi = data_1cd6404
uint32_t result = eax - 1

if (eax == 1)
    int32_t* ecx_13 = *(esi + 0x18)
    
    if (ecx_13 != 0xffffffff)
        result = sub_426640(ecx_13, &arg1)
        uint32_t ecx_14 = arg1
        
        if (ecx_14 s>= 2)
            int32_t eax_18 = *(esi + 0x244)
            *(esi + 0x254) = 0x3c
            
            if (*(edi + 0x274) == 0)
                if (eax_18 s< ecx_14 - 1)
                    *(esi + 0x244) = eax_18 + 1
                    
                    if (eax_18 + 1 s>= ecx_14 - 1)
                        *(esi + 0x244) = ecx_14 - 1
                        *(esi + 0x254) = 0xa
                else
                    *(esi + 0x244) = ecx_14 - 1
                    *(edi + 0x274) = 1
                
                ecx_14 = arg1
            else if (eax_18 s> 0)
                *(esi + 0x244) = eax_18 - 1
                
                if (eax_18 - 1 s<= 0)
                    *(esi + 0x244) = 0
                    *(esi + 0x254) = 0xa
            else
                sub_418410(eax_18, esi, edi, 1)
                ecx_14 = arg1
            
            result = *(esi + 0x244)
            
            if (result s< 0 || result s>= ecx_14)
                *(esi + 0x244) = 0
else
    uint32_t result_1 = result
    result -= 1
    
    if (result_1 == 1)
        int32_t* ecx_1 = *(esi + 0x1c)
        
        if (ecx_1 != 0xffffffff)
            result = sub_426640(ecx_1, &arg1)
            
            if (arg1 s>= 2)
                *(esi + 0x26c) = 0x50
                void* eax_1 = nullptr
                int32_t edx_2 = data_1320e8c
                int32_t ecx_2 = *(esi + 0x10)
                
                if (edx_2 != 0 && ecx_2 s>= 0 && ecx_2 s< data_1320e90)
                    eax_1 = ecx_2 * 0xa8 + edx_2
                
                int32_t ecx_3 = data_703668
                
                if (ecx_3 s> 0xffffffff && eax_1 != 0)
                    result = *(eax_1 + 0xa4)
                    
                    if (result s> 0xffffffff)
                        if (result s< 0 || result s>= data_1321e94 || ecx_3 s< 0
                                || ecx_3 s>= data_1321e98)
                            return sub_418410(result, esi, edi, 2)
                        
                        result = zx.d(*((result << 6) + ecx_3 + &data_1320e94))
                        
                        if (result == 0)
                            return sub_418410(result, esi, edi, 2)
                
                result = sub_445700()
                
                if (result == 0)
                    return sub_418410(result, esi, edi, 2)
                
                if (result == 1)
                    if (*(edi + 0x278) == 0xffffffff)
                        if ((sub_4d18c0(result + 1) & 1) == 0)
                            *(edi + 0x278) = modu.dp.d(0:(sub_4d18c0(2)), arg1 - 1) + 2
                        else
                            *(edi + 0x278) = arg1
                    
                    int32_t eax_8 = *(edi + 0x278)
                    
                    if (eax_8 s> 0)
                        int32_t ecx_7 = *(esi + 0x25c)
                        
                        if (ecx_7 s< eax_8 - 1)
                            *(esi + 0x25c) = ecx_7 + 1
                            int32_t eax_11 = *(edi + 0x278) - 1
                            
                            if (ecx_7 + 1 s< eax_11)
                                result = arg1
                            else
                                *(esi + 0x25c) = eax_11
                                *(esi + 0x26c) = 0xa
                                result = arg1
                        else
                            *(esi + 0x25c) = eax_8 - 1
                            *(edi + 0x278) = 0
                            result = arg1
                    else if (eax_8 != 0)
                        result = arg1
                    else
                        int32_t eax_12 = *(esi + 0x25c)
                        
                        if (eax_12 s> 0)
                            *(esi + 0x25c) = eax_12 - 1
                            
                            if (eax_12 - 1 s> 0)
                                result = arg1
                            else
                                *(esi + 0x25c) = 0
                                *(esi + 0x26c) = 0xa
                                result = arg1
                        else
                            *(esi + 0x25c) = 0
                            
                            if ((sub_4d18c0(2) & 1) == 0)
                                *(edi + 0x278) = modu.dp.d(0:(sub_4d18c0(2)), arg1 - 1) + 2
                                result = arg1
                            else
                                result = arg1
                                *(edi + 0x278) = result
                    
                    int32_t ecx_11 = *(esi + 0x25c)
                    
                    if (ecx_11 s< 0 || ecx_11 s>= result)
                        *(esi + 0x25c) = 0
                else if (result == 2)
                    return sub_418410(result, esi, edi, 2)

return result

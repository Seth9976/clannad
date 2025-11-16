// 函数: sub_499a9b
// 地址: 0x499a9b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_30 = edi
uint32_t __security_cookie_3 = __security_cookie_1
uint32_t __security_cookie_2 = arg1

if (arg2 != 0 && arg1 != 0)
    int32_t i = 0
    int32_t j_2 = *((arg3 << 2) + &data_ac8548)
    uint32_t eax_1 = *arg1
    int32_t edx_2 = eax_1 * j_2
    uint32_t esi_1 = zx.d(*(arg1 + 0xb))
    
    if (esi_1 == 1)
        char* edi_18 = ((eax_1 - 1) u>> 3) + arg2
        char* esi_14 = ((edx_2 - 1) u>> 3) + arg2
        int32_t var_1c_4 = 7 - ((eax_1 - 1) & 7)
        int32_t var_14_4 = 7 - ((edx_2 - 1) & 7)
        
        if (eax_1 u> 0)
            do
                int32_t ecx_32
                ecx_32.b = var_1c_4.b
                eax_1.b = *edi_18
                eax_1.b u>>= ecx_32.b
                eax_1.b &= 1
                char var_15_3 = eax_1.b
                
                if (j_2 s> 0)
                    int32_t j_5 = j_2
                    
                    while (true)
                        eax_1.b <<= var_14_4.b
                        *esi_14 = ((0x7f7f s>> (7 - var_14_4.b)).b & *esi_14) | eax_1.b
                        
                        if (var_14_4 != 7)
                            var_14_4 += 1
                        else
                            var_14_4 = 0
                            esi_14 -= 1
                        
                        int32_t j_6 = j_5
                        j_5 -= 1
                        
                        if (j_6 == 1)
                            break
                        
                        eax_1.b = var_15_3
                
                if (var_1c_4 != 7)
                    var_1c_4 += 1
                else
                    var_1c_4 = 0
                    edi_18 -= 1
                
                i += 1
            while (i u< *__security_cookie_2)
    else if (esi_1 == 2)
        char* edi_15 = ((eax_1 - 1) u>> 2) + arg2
        char* esi_11 = ((edx_2 - 1) u>> 2) + arg2
        int32_t var_1c_3 = (3 - ((eax_1 - 1) & 3)) << 1
        int32_t var_14_3 = (3 - ((edx_2 - 1) & 3)) << 1
        
        if (eax_1 u> 0)
            do
                int32_t ecx_27
                ecx_27.b = var_1c_3.b
                eax_1.b = *edi_15
                eax_1.b u>>= ecx_27.b
                eax_1.b &= 3
                char var_15_2 = eax_1.b
                
                if (j_2 s> 0)
                    int32_t j_4 = j_2
                    
                    while (true)
                        eax_1.b <<= var_14_3.b
                        *esi_11 = ((0x3f3f s>> (6 - var_14_3.b)).b & *esi_11) | eax_1.b
                        
                        if (var_14_3 != 6)
                            var_14_3 += 2
                        else
                            var_14_3 = 0
                            esi_11 -= 1
                        
                        int32_t j_7 = j_4
                        j_4 -= 1
                        
                        if (j_7 == 1)
                            break
                        
                        eax_1.b = var_15_2
                
                if (var_1c_3 != 6)
                    var_1c_3 += 2
                else
                    var_1c_3 = 0
                    edi_15 -= 1
                
                i += 1
            while (i u< *__security_cookie_2)
    else if (esi_1 == 4)
        char* edi_12 = ((eax_1 - 1) u>> 1) + arg2
        char* esi_8 = ((edx_2 - 1) u>> 1) + arg2
        int32_t var_1c_2 = 4 - (((eax_1 - 1) & 1) << 2)
        int32_t var_14_2 = 4 - (((edx_2 - 1) & 1) << 2)
        
        if (eax_1 u> 0)
            do
                int32_t ecx_20
                ecx_20.b = var_1c_2.b
                eax_1.b = *edi_12
                eax_1.b u>>= ecx_20.b
                eax_1.b &= 0xf
                char var_15_1 = eax_1.b
                
                if (j_2 s> 0)
                    int32_t j_3 = j_2
                    
                    while (true)
                        eax_1.b <<= var_14_2.b
                        *esi_8 = ((0xf0f s>> (4 - var_14_2.b)).b & *esi_8) | eax_1.b
                        
                        if (var_14_2 != 4)
                            var_14_2 += 4
                        else
                            var_14_2 = 0
                            esi_8 -= 1
                        
                        int32_t j_8 = j_3
                        j_3 -= 1
                        
                        if (j_8 == 1)
                            break
                        
                        eax_1.b = var_15_1
                
                if (var_1c_2 != 4)
                    var_1c_2 += 4
                else
                    var_1c_2 = 0
                    edi_12 -= 1
                
                i += 1
            while (i u< *__security_cookie_2)
    else
        uint32_t esi_2 = esi_1 u>> 3
        int32_t ebx_3 = (eax_1 - 1) * esi_2 + arg2
        int32_t var_14_1 = (edx_2 - 1) * esi_2 + arg2
        
        if (eax_1 u> 0)
            do
                void var_10
                int32_t esi_4
                int32_t edi_7
                edi_7, esi_4 = __builtin_memcpy(&var_10, ebx_3, esi_2 u>> 2 << 2)
                __builtin_memcpy(edi_7, esi_4, esi_2 & 3)
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        int32_t edi_8 = var_14_1
                        var_14_1 -= esi_2
                        int32_t esi_5
                        int32_t edi_9
                        edi_9, esi_5 = __builtin_memcpy(edi_8, &var_10, esi_2 u>> 2 << 2)
                        j = j_1
                        j_1 -= 1
                        __builtin_memcpy(edi_9, esi_5, esi_2 & 3)
                    while (j != 1)
                
                ebx_3 -= esi_2
                i += 1
            while (i u< *__security_cookie_2)
    
    __security_cookie_1 = __security_cookie_2
    uint32_t ecx_39 = (zx.d(*(__security_cookie_1 + 0xb)) * edx_2 + 7) u>> 3
    *__security_cookie_1 = edx_2
    *(__security_cookie_1 + 4) = ecx_39

sub_745f2b(__security_cookie_3)
return __security_cookie_1

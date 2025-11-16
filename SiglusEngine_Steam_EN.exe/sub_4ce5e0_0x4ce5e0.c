// 函数: sub_4ce5e0
// 地址: 0x4ce5e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2
void* var_c = arg3
int32_t var_28 = edi
void* var_24 = nullptr
int32_t var_34 = 0

if (arg6 == 1 && arg7 == 0x10 && arg4 s>= arg5 s/ 0xa * 2)
    int32_t eax_5 = arg3 + arg4
    int32_t esi_1 = arg4 + edi
    uint32_t eax_10 = (arg11 + arg10) * 2
    void* var_2c
    void* eax_13
    
    if (eax_10 s<= 0)
        eax_13 = nullptr
        var_2c = nullptr
        var_24 = nullptr
    else
        sub_4d6960(eax_10, &var_24, &var_34, eax_10, "KRCgousei")
        arg3 = var_c
        void* eax_12 = var_24 + (arg10 << 1)
        var_24 = eax_12
        eax_13 = eax_12 - 2
        var_2c = eax_13
    
    arg6 = 0
    void* ebx_1 = edi
    int32_t var_30 = 0
    void* edx_3 = arg3
    int16_t* var_8 = arg3
    void* var_18 = ebx_1
    void* var_20 = nullptr
    
    if (edi u< esi_1)
        while (true)
            if (edx_3 != arg3)
                eax_13, arg3 = sub_4ce350(eax_13, ebx_1, edx_3 - 2, arg8, arg3, eax_5, edi, esi_1)
                ebx_1 = eax_13
                var_18 = ebx_1
            
            if (ebx_1 u>= esi_1)
                break
            
            int32_t var_4c_2 = esi_1
            void* eax_14 = sub_4ce420(eax_13, arg8 * 2, ebx_1, arg3, edi)
            void* eax_17
            
            if (eax_14 + ebx_1 u< esi_1)
                eax_17 = eax_14
            else
                eax_17 = esi_1 - ebx_1
            
            if (eax_17 s< 0)
                eax_17 = nullptr
            
            int32_t edx_6 = 0
            void* var_10_2 = eax_17
            int32_t ecx_4 = eax_17 s>> 1
            int32_t edi_1 = 0
            int16_t* ecx_5 = ebx_1 - 2
            
            if (arg10 s> 0)
                int16_t* ebx_3 = var_2c - ecx_5
                edi_1 = 0
                
                while (ecx_5 u>= var_28)
                    if (ecx_5 u>= esi_1)
                        break
                    
                    eax_17.w = *ecx_5
                    edx_6 += 1
                    *(ebx_3 + ecx_5) = eax_17.w
                    edi_1 += 1
                    ecx_5 -= 2
                    
                    if (edx_6 s>= arg10)
                        break
                
                ebx_1 = var_18
                eax_17 = var_10_2
            
            if (eax_17 s> 0)
                sub_4d1c30(eax_17, ebx_1, var_8, eax_17)
            
            void* edx_9 = var_c
            int32_t eax_18 = 0
            
            if (var_8 != edx_9)
                eax_18 = sub_4cdfa0(0, var_30, var_8, ecx_4, edx_9, eax_5)
                edx_9 = var_c
            
            var_30 = ecx_4
            void* edi_2
            
            if (edi_1 s> 0 || arg6 s> 0)
                edi_2 = var_24
                sub_4cddf0(eax_18, edx_9, var_8, edx_9, eax_5, edi_2, edi_1, arg6, eax_18)
            else
                edi_2 = var_24
            
            int32_t edx_10 = 0
            arg6 = 0
            int32_t ecx_11 = ecx_4 * 2
            void* eax_20 = ecx_11 + ebx_1
            int32_t var_3c_1 = ecx_11
            
            if (arg11 s> 0)
                int16_t* edi_3 = edi_2 - eax_20
                
                while (eax_20 u>= var_28)
                    if (eax_20 u>= esi_1)
                        break
                    
                    ecx_11.w = *eax_20
                    edx_10 += 1
                    arg6 += 1
                    *(edi_3 + eax_20) = ecx_11.w
                    eax_20 += 2
                    
                    if (edx_10 s>= arg11)
                        break
                
                ebx_1 = var_18
                ecx_11 = var_3c_1
            
            var_20 += var_10_2
            eax_13 = ecx_4 + arg9
            edi = var_28
            edx_3 = var_8 + ecx_11
            var_8 = edx_3
            ebx_1 += eax_13 << 1
            var_18 = ebx_1
            
            if (ebx_1 u>= esi_1)
                break
            
            arg3 = var_c
    
    sub_4d6c40(&var_34, &var_24)
    int32_t edi_5 = 0x64
    void* esi_5 = var_c + (((var_20 s>> 1) - 0x64) << 1)
    
    while (esi_5 u>= var_c)
        if (esi_5 u>= eax_5)
            break
        
        int32_t ecx_14 = sx.d(*esi_5) * edi_5
        edi_5 -= 1
        *esi_5 = (ecx_14 s/ 0x64).w
        esi_5 += 2
        
        if (edi_5 s<= 0)
            break
    
    return var_20

return arg4

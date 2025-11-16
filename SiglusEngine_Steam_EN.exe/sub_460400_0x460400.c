// 函数: sub_460400
// 地址: 0x460400
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg10
char* esi = arg9
uint32_t var_18 = arg3

if (esi != 0 && *esi != 0 && ebx.b != 0)
    sub_57e4a0(arg5, esi)
else if (arg5 u<= 0x3f)
    sub_57e420(arg5 * 0x3920 + &data_f89afc)

if (data_702fc0 != 0 && esi != 0 && *esi != 0)
    if (data_1cd5369 != 0)
        sub_460160()
        sub_460160()
        data_1cd5369 = 0
    
    sub_460100(esi)

int32_t result = arg6

if (*(result + 0x44) != 0 && esi != 0 && *esi != 0 && ebx.b != 0)
    int32_t ebx_1 = 6
    void* ecx_4 = *(arg7 + 0x5c)
    int32_t eax_2 = *(arg7 + 0x50)
    void* edx_2 = *(arg7 + 0x60) + ecx_4
    void* var_8_1 = edx_2
    int32_t var_14 = eax_2
    int32_t var_10
    uint32_t var_c
    
    if (eax_2 != 0)
        uint32_t ecx_5 = 0
        char* edi_1 = esi
        var_c = 0
        bool cond:2_1
        
        do
            eax_2.b = *edi_1
            
            if (eax_2.b u< 0x80)
                edi_1 = &edi_1[1]
                ecx_5 += edx_2 s>> 1
            else if (eax_2.b u< 0xa0)
                if (eax_2.b u< 0xfe)
                    goto label_4604e4
                
                edi_1 = &edi_1[1]
                ecx_5 += edx_2 s>> 1
            else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                edi_1 = &edi_1[1]
                ecx_5 += edx_2 s>> 1
            else
            label_4604e4:
                eax_2 = sub_4ebbb0(edi_1)
                var_10 = eax_2
                
                if (eax_2 != 0)
                    edi_1 = &edi_1[8]
                    edx_2 = var_8_1
                    ecx_5 = var_c + edx_2
                else
                    edi_1 = &edi_1[2]
                    edx_2 = var_8_1
                    ecx_5 = var_c + edx_2
            
            cond:2_1 = *edi_1 != 0
            var_c = ecx_5
        while (cond:2_1)
        eax_2 = *(arg6 + 0x3c)
        
        if (var_14 != 1)
            if (ecx_5 s< eax_2)
                int32_t ebx_4 = eax_2
                eax_2 = 6
                ebx_1 = ebx_4 - ecx_5 - 8
                
                if (ebx_1 s< 6)
                    ebx_1 = 6
        else if (ecx_5 s< eax_2)
            ebx_1 = (eax_2 - ecx_5) s>> 1
            
            if (ebx_1 s< 6)
                ebx_1 = 6
    
    int32_t var_38_1 = 1
    int32_t var_44_1
    int32_t var_40_1
    int32_t var_3c_1
    
    if (arg4 != 0)
        var_3c_1 = 0xffffffff
        var_40_1 = 0xffffffff
        var_44_1 = 0xffffffff
    else
        var_3c_1 = arg4
        var_40_1 = arg4
        var_44_1 = arg4
    
    int32_t edx_4 = sub_4c6e40(eax_2, ecx_4, ecx_4, var_44_1, var_40_1, var_3c_1)
    int32_t ecx_9
    
    if (var_18 != 0)
        ecx_9 = *(arg7 + 0x12c)
        
        if (ecx_9 s< 0 || ecx_9 s>= 0x100)
            ecx_9 = 0xfe
        
        if (arg4 == 0)
            result = 0xffffffff
        else
            result = *(arg7 + 0x130)
            
            if (result s< 0 || result s>= 0x100)
                int16_t eax_8 = *(arg8 + 0x32)
                
                if (eax_8 s< 0)
                    result = 0xffffffff
                else
                    edx_4 = 0x100
                    
                    result = eax_8 s>= 0x100 ? 0xffffffff : 0xff
    else
        ecx_9 = sx.d(*(arg8 + 0x30))
        
        if (arg4 == 0)
            result = 0xffffffff
        else
            int16_t result_1 = *(arg8 + 0x32)
            
            if (result_1 s< 0)
                result = 0xffffffff
            else
                edx_4 = 0x100
                
                if (result_1 s>= 0x100)
                    result = 0xffffffff
                else
                    result = sx.d(result_1)
    
    char* edi_3 = &(&data_12a2990)[ecx_9 * 2]
    
    if (ecx_9 u> 0xff)
        edi_3 = &data_12a2990
    
    void* ecx_10
    
    if (result u> 0xff)
        ecx_10 = nullptr
    else
        ecx_10 = &(&data_12a2990)[result * 2]
    
    arg9 = ecx_10
    
    if (*esi != 0)
        void* ebx_6 = ebx_1
        
        do
            result.b = *esi
            
            if (result.b u< 0x80)
            label_4606c6:
                void* var_38_4 = ecx_10
                uint32_t edx_7 = zx.d(result.b)
                int32_t var_48_3 = *(arg7 + 0x5c)
                var_c = edx_7
                edx_4 = sub_57e530(arg7, edx_7, arg6, var_48_3, ebx_6, ecx_10, edi_3)
                result = var_8_1 s>> 1
                esi = &esi[1]
                ebx_6 += result
            else
                if (result.b u< 0xa0)
                    if (result.b u>= 0xfe)
                        goto label_4606c6
                else if (result.b u<= 0xdf || result.b u>= 0xfe)
                    goto label_4606c6
                
                uint32_t var_28
                uint32_t var_24
                uint32_t var_20
                char* ecx_12 = sub_4eba80(&var_c, edx_4, esi, &var_c, &var_28, &var_24, &var_20, 
                    &var_14, &var_18, &var_10)
                
                if (var_10 == 0)
                    void* var_38_3 = arg9
                    result, edx_4 =
                        sub_57e530(arg7, var_c, arg6, *(arg7 + 0x5c), ebx_6, ecx_12, edi_3)
                    esi = &esi[2]
                    ebx_6 += var_8_1
                else
                    char* eax_10 = edi_3
                    
                    if (arg2 == 0 && var_18 == 0)
                        eax_10 = nullptr
                    
                    result, edx_4 = sub_45e0d0(arg6, var_14, arg6 + 0x48, *(arg7 + 0x5c), ebx_6, 6, 
                        eax_10, arg9, 0xffffffff, 0)
                    esi = &esi[8]
                    ebx_6 += var_8_1
            
            ecx_10 = arg9
        while (*esi != 0)

return result

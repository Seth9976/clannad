// 函数: sub_4c7f10
// 地址: 0x4c7f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t esi = arg6

if (esi == 0x815c)
    esi = 0x849f

int32_t eax
int32_t edx
eax, edx = sub_4d0f10(&data_20ae920, 0x1c041d4)

if (eax != 0)
    sub_4c5860()
    edx = sub_4cfd70(&data_20ae920, 0x1c041d4)

BOOL var_14
int32_t* var_2c = &var_14
int32_t j_3
int32_t* var_30 = &j_3
int32_t* var_40
int32_t* var_3c
uint32_t j_5
int16_t* result = sub_4c5b60(&j_5, edx, esi, var_40, var_3c, &j_5, &arg6)
void* result_1 = result
uint32_t ecx_3
uint32_t j_4

if (result_1 != 0)
    ecx_3 = arg6
    j_4 = j_5
    arg6 = ecx_3
label_4c7fcf:
    
    if (j_4 s> 0 && ecx_3 s> 0)
        int32_t eax_5 = arg7 + j_3
        int32_t j_2 = data_1c04200
        int32_t eax_7 = j_2 - var_14
        arg8 += eax_7
        j_5 = 0
        var_14 = 0
        
        if (esi == 0x815c || esi == 0x849f || esi == 0x84aa)
            sub_4d6960(eax_7, &var_14, &j_5, j_2 * ecx_3, "keisen_moji")
            int32_t eax_9
            int32_t edx_5
            edx_5:eax_9 = sx.q(j_4)
            j_2 = data_1c04200
            j_3 = j_2
            uint32_t i_1 = arg6
            void* esi_3 = ((eax_9 - edx_5) s>> 1) + result_1
            result_1 = var_14
            char* result_2 = result_1
            
            if (i_1 s> 0)
                var_14 = i_1
                uint32_t i
                
                do
                    if (j_2 s> 0)
                        int32_t j_1 = j_2
                        int32_t j
                        
                        do
                            i_1.b = *esi_3
                            *result_2 = i_1.b
                            result_2 = &result_2[1]
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        i_1 = var_14
                    
                    esi_3 += j_4
                    i = i_1
                    i_1 -= 1
                    var_14 = i_1
                while (i != 1)
                j_2 = j_3
            
            ecx_3 = arg6
            j_4 = j_2
        
        int32_t eax_11 = data_13740ac
        int32_t esi_5 = arg8 - 1
        uint32_t eax_32
        int32_t eax_53
        uint32_t esi_6
        int32_t esi_7
        
        if (eax_11 == 0 || eax_11 == 1)
            int32_t ecx_18
            ecx_18.b = j_2 s> 0x10
            bool cond:1_1 = data_1c041fc != 0
            var_14 = ecx_18 + 1
            
            if (cond:1_1)
                if (arg3 == 0)
                    esi_7 = arg6
                else
                    if (arg13 != 0 || arg10 == 0 || data_13740ac == 0)
                        esi_7 = arg6
                    else
                        esi_7 = arg6
                        sub_4c7750(arg5, arg4, arg3, arg5, result_1, j_4, esi_7, 
                            eax_5 + ecx_18 + 1, ecx_18 + 1 + esi_5, *arg10, arg10[1], arg10[2])
                    
                    if (arg9 != 0)
                        uint32_t eax_83 = zx.d(*arg9)
                        sub_4c7750(eax_83, arg4, arg3, arg5, result_1, j_4, esi_7, eax_5, esi_5, 
                            eax_83.b, arg9[1], arg9[2])
                
                if (arg2 != 0)
                    if (arg12 != 0 && data_13740ac != 0)
                        sub_4c7750(arg5, arg4, arg2, arg5, result_1, j_4, esi_7, eax_5 + var_14, 
                            esi_5 + var_14, *arg12, arg12[1], arg12[2])
                    
                    if (arg13 == 0 && arg11 != 0)
                        eax_53 = zx.d(*arg11)
                        sub_4c7750(eax_53, arg4, arg2, arg5, result_1, j_4, esi_7, eax_5, esi_5, 
                            eax_53.b, arg11[1], arg11[2])
            else
                if (arg3 == 0)
                    esi_6 = arg6
                else
                    if (arg13 != 0 || arg10 == 0 || data_13740ac == 0)
                        esi_6 = arg6
                    else
                        esi_6 = arg6
                        sub_4c7470(arg5, arg4, arg3, arg5, result_1, j_4, esi_6, 
                            eax_5 + ecx_18 + 1, ecx_18 + 1 + esi_5, *arg10, arg10[1], arg10[2])
                    
                    if (arg9 != 0)
                        uint32_t eax_63 = zx.d(*arg9)
                        sub_4c7470(eax_63, arg4, arg3, arg5, result_1, j_4, esi_6, eax_5, esi_5, 
                            eax_63.b, arg9[1], arg9[2])
                
                if (arg2 != 0)
                    if (arg12 != 0 && data_13740ac != 0)
                        sub_4c7470(arg5, arg4, arg2, arg5, result_1, j_4, esi_6, eax_5 + var_14, 
                            esi_5 + var_14, *arg12, arg12[1], arg12[2])
                    
                    if (arg13 == 0 && arg11 != 0)
                        eax_32 = zx.d(*arg11)
                        sub_4c7470(eax_32, arg4, arg2, arg5, result_1, j_4, esi_6, eax_5, esi_5, 
                            eax_32.b, arg11[1], arg11[2])
        else if (data_1c041fc != 0)
            if (arg3 != 0 && arg13 == 0 && arg10 != 0)
                sub_4c7c50(arg5, arg4, arg3, arg5, result_1, j_4, ecx_3, eax_5, esi_5, *arg10, 
                    arg10[1], arg10[2], 1)
            
            if (arg3 == 0 || arg9 == 0)
                esi_7 = arg6
            else
                esi_7 = arg6
                sub_4c7750(eax_5 + 1, arg4, arg3, arg5, result_1, j_4, esi_7, eax_5 + 1, esi_5 + 1, 
                    *arg9, arg9[1], arg9[2])
            
            if (arg2 != 0)
                if (arg12 != 0 && data_13740ac != 0)
                    sub_4c7c50(arg5, arg4, arg2, arg5, result_1, j_4, esi_7, eax_5, esi_5, *arg12, 
                        arg12[1], arg12[2], 1)
                
                if (arg13 == 0 && arg11 != 0)
                    eax_53 = eax_5 + 1
                    sub_4c7750(eax_53, arg4, arg2, arg5, result_1, j_4, esi_7, eax_53, esi_5 + 1, 
                        *arg11, arg11[1], arg11[2])
        else
            if (arg3 != 0 && arg13 == 0 && arg10 != 0)
                sub_4c7c50(arg5, arg4, arg3, arg5, result_1, j_4, ecx_3, eax_5, esi_5, *arg10, 
                    arg10[1], arg10[2], 0)
            
            if (arg3 == 0 || arg9 == 0)
                esi_6 = arg6
            else
                esi_6 = arg6
                sub_4c7470(eax_5 + 1, arg4, arg3, arg5, result_1, j_4, esi_6, eax_5 + 1, esi_5 + 1, 
                    *arg9, arg9[1], arg9[2])
            
            if (arg2 != 0)
                if (arg12 != 0 && data_13740ac != 0)
                    sub_4c7c50(arg5, arg4, arg2, arg5, result_1, j_4, esi_6, eax_5, esi_5, *arg12, 
                        arg12[1], arg12[2], 0)
                
                if (arg13 == 0 && arg11 != 0)
                    eax_32 = eax_5 + 1
                    sub_4c7470(eax_32, arg4, arg2, arg5, result_1, j_4, esi_6, eax_32, esi_5 + 1, 
                        *arg11, arg11[1], arg11[2])
        return sub_4d6c40(&j_5, &var_14)
else
    result = sub_4c6f70(&var_14, &j_3, esi, &var_14)
    
    if (result != 0)
        uint32_t eax_3 = zx.d(result[1])
        j_4 = zx.d(*result)
        result_1 = &result[2]
        arg6 = eax_3
        result = sub_4c5a70(eax_3, j_4, result_1, eax_3, j_3, var_14, esi)
        
        if (result_1 != 0)
            ecx_3 = arg6
            goto label_4c7fcf
return result

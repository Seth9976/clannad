// 函数: sub_58c910
// 地址: 0x58c910
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg3
int32_t ebx = 0
int32_t var_c = edx

if (arg8 s> arg5)
    return 0

int32_t edi = arg4

if (arg9 s< edi)
    return 0

int32_t esi = arg11

if (arg6 s<= esi && arg7 s>= arg10)
    if (edx == arg2)
        int32_t ecx_3 = arg6 - edi + arg8
        
        if (ecx_3 s<= esi)
            int32_t edx_2 = arg10
            
            if (ecx_3 - arg8 + arg9 s>= edx_2)
                arg5 = 0
                
                if (arg6 s> edx_2)
                    edx_2 = arg6
                
                if (arg7 s< esi)
                    esi = arg7
                
                int32_t i_7 = 0xffffffff
                int32_t i_9 = 0
                int32_t i = 0
                
                if (arg9 - arg8 + 1 s> 0)
                    do
                        if (ecx_3 s< edx_2)
                        label_58c9cb:
                            
                            if (ecx_3 == esi)
                                break
                        else if (ecx_3 s<= esi)
                            if (i_7 == 0xffffffff)
                                i_7 = i
                                arg5 = ecx_3
                            
                            i_9 = i
                            goto label_58c9cb
                        
                        i += 1
                        ecx_3 += 1
                    while (i s< arg9 - arg8 + 1)
                    
                    if (i_7 != 0xffffffff)
                        *arg12 = 0
                        *arg13 = i_7
                        *arg14 = arg5
                        *arg15 = i_9 - i_7 + 1
                        return 1
    else if (edx s<= arg2)
        int32_t ecx_12
        
        if (arg6 s>= arg10)
            ecx_12 = 0
        else
            int32_t eax_28
            int32_t edx_8
            edx_8:eax_28 = sx.q((arg10 - arg6) * edx)
            edi += divs.dp.d(edx_8:eax_28, arg2)
            ecx_12 = mods.dp.d(edx_8:eax_28, arg2)
            edx = var_c
            arg6 = arg10
        
        int32_t eax_31 = arg7
        
        if (eax_31 s> esi)
            eax_31 = esi
        
        if (edi s<= arg9)
            int32_t eax_32 = eax_31 - arg6
            
            if (divs.dp.d(sx.q((eax_32 + 2) * edx + ecx_12), arg2) + edi s>= arg8)
                int32_t i_8 = 0xffffffff
                arg5 = 0
                int32_t i_1 = 0
                int32_t i_6 = 0
                
                if (eax_32 + 1 s> 0)
                    do
                        if (edi s>= arg8)
                            if (i_8 == 0xffffffff)
                                arg5 = edi
                                *arg12 = ecx_12
                                i_8 = i_1
                            
                            i_6 = i_1
                        
                        ecx_12 += var_c
                        
                        if (ecx_12 s>= arg2)
                            ecx_12 -= arg2
                            edi += 1
                        
                        if (edi s> arg9)
                            break
                        
                        i_1 += 1
                    while (i_1 s< eax_32 + 1)
                    
                    if (i_8 != 0xffffffff)
                        *arg13 = arg5 - arg8
                        *arg14 = arg6 + i_8
                        *arg15 = i_6 - i_8 + 1
                        return 1
    else
        int32_t esi_1 = arg6
        int32_t ecx_6
        
        if (edi s< arg8)
            ecx_6 = 0
            int32_t i_10 = arg8 - edi
            
            if (i_10 s> 0)
                int32_t i_2
                
                do
                    ecx_6 += arg2
                    ebx = 0
                    
                    if (ecx_6 s>= edx)
                        ecx_6 -= edx
                        ebx = 1
                        esi_1 += 1
                    
                    i_2 = i_10
                    i_10 -= 1
                while (i_2 != 1)
        else if (edi s<= arg8)
            ecx_6 = 0
            ebx = 1
        else
            int32_t i_11 = edi - arg8
            esi_1 -= 1
            ecx_6 = edx
            
            if (i_11 s> 0)
                int32_t i_3
                
                do
                    ecx_6 -= arg2
                    ebx = 0
                    
                    if (ecx_6 s<= 0)
                        ecx_6 += edx
                        ebx = 1
                        esi_1 -= 1
                    
                    i_3 = i_11
                    i_11 -= 1
                while (i_3 != 1)
        
        if (esi_1 s<= arg11)
            int32_t eax_13 = arg9 - arg8
            int32_t edx_4 = arg10
            
            if (divs.dp.d(sx.q((eax_13 + 2) * arg2 + ecx_6), var_c) + esi_1 s>= edx_4)
                int32_t eax_20 = arg11
                
                if (arg6 s> edx_4)
                    edx_4 = arg6
                
                if (arg7 s< eax_20)
                    eax_20 = arg7
                
                arg8 = 0xffffffff
                int32_t var_c_1 = 0
                int32_t i_4 = 0
                int32_t i_5 = 0
                
                if (eax_13 + 1 s> 0)
                    do
                        if (ebx == 1)
                            if (esi_1 s>= edx_4 && esi_1 s<= eax_20)
                                if (arg8 == 0xffffffff)
                                    arg8 = i_4
                                    var_c_1 = esi_1
                                    *arg12 = ecx_6
                                
                                i_5 = i_4
                            
                            ebx = 0
                        
                        if (esi_1 == eax_20)
                            break
                        
                        ecx_6 += arg2
                        
                        if (ecx_6 s>= var_c)
                            ecx_6 -= var_c
                            ebx = 1
                            esi_1 += 1
                        
                        i_4 += 1
                    while (i_4 s< eax_13 + 1)
                    
                    if (arg8 != 0xffffffff)
                        *arg13 = arg8
                        *arg14 = var_c_1
                        *arg15 = i_5 - arg8 + 1
                        return 1

return 0

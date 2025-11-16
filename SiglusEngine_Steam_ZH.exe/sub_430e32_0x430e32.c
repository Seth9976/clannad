// 函数: sub_430e32
// 地址: 0x430e32
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
void* ecx = arg2
int32_t edx = *(ecx + 4)
int32_t edi
int32_t var_18 = edi
int32_t edi_1 = 0
int32_t var_1c_1

if (edx == 1)
    void* edx_3 = *(ecx + 8)
    
    if (edx_3 != 0)
        int32_t ebx_2 = *(edx_3 + 4)
        
        if (ebx_2 == 3)
            int32_t edx_4 = *(edx_3 + 0x10)
            
            if (edx_4 s< 5 || edx_4 s> 8)
                *arg4 = 2
            else
                *arg4 = 3
            
            *arg5 = 1
            *arg6 = 1
            *arg7 = 0
            *arg8 = 0
            *arg9 = 4
            return 0
        
        if (ebx_2 != 0xd)
            var_1c_1 = *arg3
            sub_42aba3(arg1 + 0x28, arg10, 0, 
                "ID3DXEffectCompiler: State '%s' was assigned an unsupported value")
        else
            arg2 = ecx
            
            while (true)
                if (*(ecx + 4) != 1)
                    return 0x80004005
                
                void* eax_3 = *(ecx + 8)
                
                if (eax_3 == 0)
                    return 0x80004005
                
                if (*(eax_3 + 4) != 0xd)
                    return 0x80004005
                
                void* eax_4 = *(eax_3 + 0x10)
                
                if (eax_4 == 0)
                    return 0x80004005
                
                int32_t eax_5 = sub_42f655(arg1, eax_4, arg4, arg5, arg6, arg7, arg8, arg9)
                
                if (eax_5 s< 0)
                    return eax_5
                
                int32_t ecx_3 = *arg4
                
                if ((ecx_3 != 3 && ecx_3 != 2 && ecx_3 != 1) || *arg6 != 1 || *arg5 != 1
                        || *arg7 != 0 || *arg8 != 0)
                    int32_t var_20_4 = 0
                    break
                
                void* ecx_4 = *(arg2 + 0xc)
                edi_1 += 1
                arg2 = ecx_4
                
                if (ecx_4 != 0)
                    ecx = arg2
                    continue
                
                int32_t ecx_5 = arg3[1]
                int32_t var_1c_5
                
                if (ecx_5 == 3 || ecx_5 == 0xf20000)
                    var_1c_5 = 3
                else
                    var_1c_5 = 2
                
                *arg4 = var_1c_5
                *arg5 = edi_1
                *arg6 = 1
                *arg7 = 0
                *arg8 = 0
                *arg9 = edi_1 << 2
                return eax_5
            
            sub_42aba3(arg1 + 0x28, arg10, 0, 
                "ID3DXEffectCompiler: Initializers must be numeric scalars")
else if (edx == 0xd)
    int32_t eax_2 = sub_42f655(arg1, *(ecx + 0x10), arg4, arg5, arg6, arg7, arg8, arg9)
    
    if (eax_2 s< 0 || *arg4 != 0)
        return eax_2
    
    int32_t var_20_2 = 0
    sub_42aba3(arg1 + 0x28, arg10, 0, "ID3DXEffectCompiler: Assignment cannot be a structure")
else
    var_1c_1 = *arg3
    sub_42aba3(arg1 + 0x28, arg10, 0, 
        "ID3DXEffectCompiler: State '%s' was assigned an unsupported value")
return 0x80004005

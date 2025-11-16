// 函数: sub_5ee250
// 地址: 0x5ee250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10
int32_t eax_1

if (arg15 s< 0)
    var_10 = arg7
    eax_1 = arg5
else
    var_10 = arg5
    eax_1 = arg7

int32_t edx = arg16
int32_t esi = arg8
int32_t ecx = *arg18

if (edx s>= 0)
    esi = arg6

int32_t i_2 = arg18[3] - ecx + 1
int32_t* result = arg8 - arg6 + 1
int32_t var_14 = ecx
void* edi = nullptr
int32_t i_3 = i_2
int32_t* result_1 = result

if (i_2 s> 0)
    int32_t i_1 = i_2
    result = ecx * arg10
    arg18 = result
    int32_t i
    
    do
        if (ecx s>= arg12 && ecx s<= arg14)
            void* eax_7
            void* edx_2
            
            if (arg15 s< 0)
                eax_7 = arg17[1]
                edx_2 = *arg17
            else
                eax_7 = *arg17
                edx_2 = arg17[1]
            
            if (eax_7 s<= arg13 && edx_2 s>= arg11)
                int32_t edx_4 = edx_2 - eax_7 + 1
                void* ecx_3 = arg18 + eax_7 + arg9
                
                if (eax_7 s< arg11)
                    eax_7 = arg11
                
                void* eax_8 = edx_2
                
                if (eax_8 s> arg13)
                    eax_8 = arg13
                
                int32_t var_44_1 = arg8
                int32_t var_48_1 = arg7
                int32_t var_4c_1 = arg6
                int32_t var_50_1 = arg5
                int32_t eax_13 = eax_7 + arg18 + arg9
                sub_5ef270(eax_13, edx_4, ecx_3, eax_13, eax_8 + arg18 + arg9, arg3, arg2, arg4, 
                    var_10, esi, eax_1, esi)
                i_2 = i_3
                ecx = var_14
            
            edx = arg16
            result = arg18
        
        edi += result_1
        
        while (edi s>= i_2)
            edi -= i_2
            
            if (edx s< 0)
                esi -= 1
            else
                esi += 1
        
        result += arg10
        ecx += 1
        i = i_1
        i_1 -= 1
        var_14 = ecx
        arg18 = result
    while (i != 1)

return result

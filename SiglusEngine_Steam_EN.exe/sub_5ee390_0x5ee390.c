// 函数: sub_5ee390
// 地址: 0x5ee390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

double var_20 = arg5
double var_28 = arg6
int64_t var_48 = 0x4020000000000000
double xmm0_3 = 0.5
int32_t var_18 = arg8 << 2

if (arg1 s< 0xffffffff)
    arg1 = 0xffffffff

if (arg3 s> arg8 - 1)
    arg3 = arg8 - 1

if (arg2 s< 0xffffffff)
    arg2 = 0xffffffff

int32_t result = arg4

if (result s> arg9 - 1)
    arg4 = arg9 - 1

int32_t ecx_4 = arg13
int32_t* edi = arg10

while (true)
    int32_t var_38_1 = (int.q(fconvert.t(var_20) - fconvert.t(xmm0_3))).d
    
    if (var_38_1 s>= arg1 && var_38_1 s<= arg3)
        result = (int.q(fconvert.t(var_28) - fconvert.t(xmm0_3))).d
        
        if (result s>= arg2 && result s<= arg4)
            int32_t* esi_1 = arg7 + ((result * arg8 + var_38_1) << 2)
            result = *esi_1
            uint32_t ebx_3 = result u>> 0x18
            
            if (ebx_3 != 0)
                if (ebx_3 != 0xff)
                    int32_t edx_5 = *((ebx_3 << 2) + data_1cd4328)
                    int32_t ebx_7
                    ebx_7.b = *esi_1
                    int32_t eax_7
                    eax_7.b = *edi
                    *edi = eax_7.b + (*(((ebx_7 - eax_7) << 2) + edx_5)).b
                    int32_t ebx_11
                    ebx_11.b = *(esi_1 + 1)
                    int32_t eax_9
                    eax_9.b = *(edi + 1)
                    *(edi + 1) = eax_9.b + (*(((ebx_11 - eax_9) << 2) + edx_5)).b
                    int32_t ebx_15
                    ebx_15.b = *(esi_1 + 2)
                    int32_t eax_11
                    eax_11.b = *(edi + 2)
                    result = eax_11 + *(((ebx_15 - eax_11) << 2) + edx_5)
                    *(edi + 2) = result.b
                else
                    *edi = result
    
    int32_t temp0_1 = ecx_4
    ecx_4 -= 1
    
    if (temp0_1 == 1)
        break
    
    var_20 = fconvert.d(fconvert.t(var_20) + fconvert.t(arg11))
    var_28 = fconvert.d(fconvert.t(var_28) + fconvert.t(arg12))
    edi = &edi[1]

return result

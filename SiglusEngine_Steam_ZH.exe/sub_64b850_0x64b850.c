// 函数: sub_64b850
// 地址: 0x64b850
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1

if (eax s> arg4 - 1)
    eax = arg4 - 1

int32_t result = arg2

if (result s> arg5 - 1)
    result = arg5 - 1

double xmm0_2 = 0.5
arg2 = result
int32_t ecx_2 = arg7
int32_t* edi = arg6

while (true)
    int32_t var_1c_1 = (int.q(fconvert.t(arg8) - fconvert.t(xmm0_2))).d
    
    if (var_1c_1 s>= 0 && var_1c_1 s<= eax)
        result = (int.q(fconvert.t(arg9) - fconvert.t(xmm0_2))).d
        
        if (result s>= 0 && result s<= arg2)
            result = *(arg3 + ((result * arg4 + var_1c_1) << 2))
            *edi = result
    
    int32_t temp0_1 = ecx_2
    ecx_2 -= 1
    
    if (temp0_1 == 1)
        break
    
    arg8 = fconvert.d(fconvert.t(arg8) + fconvert.t(arg10))
    arg9 = fconvert.d(fconvert.t(arg9) + fconvert.t(arg11))
    edi = &edi[1]

return result

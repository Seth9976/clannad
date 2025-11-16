// 函数: sub_4074f0
// 地址: 0x4074f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg2
int32_t mxcsr
int16_t x87control
int16_t x87control_2
long double st0
st0, x87control_2 = sub_5f2080(mxcsr, 
    sub_5f2c90(mxcsr, x87control, fconvert.t(1f) / float.t(*edi), float.t(edi[1])), 
    fconvert.d(arg1))
int32_t result = __ftol(x87control_2, st0)
int32_t i_2 = *edi

while (true)
    int32_t ecx_1 = 1
    int32_t edx_1 = 1
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            ecx_1 *= result
            edx_1 *= result + 1
            i = i_1
            i_1 -= 1
        while (i != 1)
        edi = arg2
    
    int32_t esi_1 = edi[1]
    
    if (ecx_1 s<= esi_1)
        if (edx_1 s> esi_1)
            break
        
        if (ecx_1 s<= esi_1)
            result += 1
            continue
    
    result -= 1

return result

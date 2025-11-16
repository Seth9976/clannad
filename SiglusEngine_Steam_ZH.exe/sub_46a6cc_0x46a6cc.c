// 函数: sub_46a6cc
// 地址: 0x46a6cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
int32_t i = 0
int32_t edi
int32_t var_60 = edi
*ebx = 0
ebx[1] = 0
int32_t var_54[0x10]

if (arg4 != 0)
    __builtin_memset(&var_54, 0, 0x40)

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
arg2.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(arg2.w | 0xc00)
int16_t eax_2 = arg2.w
void* var_8_1 = arg3 + 0xc

do
    arg2 = *var_8_1
    
    if (arg4 != 0)
        arg2 = fconvert.s(fconvert.t(arg2) + fconvert.t(var_54[i]))
    
    int32_t var_10_1 =
        int.d(fconvert.t(fconvert.s(fconvert.t(arg2) * fconvert.t(15f) + fconvert.t(0.5f))))
    void* ecx_1 = &ebx[i u>> 3]
    *ecx_1 = *ecx_1 u>> 4 | var_10_1 << 0x1c
    
    if (arg4 != 0)
        long double x87_r7_7 = float.t(var_10_1)
        
        if (var_10_1 s< 0)
            x87_r7_7 = x87_r7_7 + fconvert.t(4.2949673e+09f)
        
        int32_t esi_3 = i & 3
        long double x87_r7_9 = fconvert.t(arg2) - x87_r7_7 * fconvert.t(0.0666666701f)
        int32_t __saved_ebp
        
        if (esi_3 != 3)
            (&__saved_ebp)[i - 0x13] =
                fconvert.s(fconvert.t(0.4375f) * x87_r7_9 + fconvert.t((&__saved_ebp)[i - 0x13]))
        
        if (i u< 0xc)
            if (esi_3 != 0)
                (&__saved_ebp)[i - 0x11] = fconvert.s(fconvert.t(0.1875f) * x87_r7_9
                    + fconvert.t((&__saved_ebp)[i - 0x11]))
            
            (&__saved_ebp)[i - 0x10] =
                fconvert.s(fconvert.t(0.3125f) * x87_r7_9 + fconvert.t((&__saved_ebp)[i - 0x10]))
            
            if (esi_3 != 3)
                (&__saved_ebp)[i - 0xf] =
                    fconvert.s(x87_r7_9 * fconvert.t(0.0625f) + fconvert.t((&__saved_ebp)[i - 0xf]))
    
    var_8_1 += 0x10
    i += 1
while (i u< 0x10)

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(eax_2)
return sub_469950(arg3, x87control_1, &ebx[2], 0f, arg4)

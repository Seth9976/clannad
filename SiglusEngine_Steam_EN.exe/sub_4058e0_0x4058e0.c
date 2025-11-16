// 函数: sub_4058e0
// 地址: 0x4058e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* i_3 = *arg1
int32_t eax_2
eax_2.b = ((i_3 << 2) + 3).b & 0xfc
__chkstk(eax_2)
int32_t* edi = arg3
sub_4059d0(i_3, arg1[6], arg2, edi, 140f, 0xffffffff)
int32_t __saved_edi

if (i_3 s> 0)
    int32_t* eax_4 = edi
    arg3 = i_3
    bool cond:0_1
    
    do
        long double x87_r6_2 = fconvert.t(*(arg2 i- edi + eax_4)) - fconvert.t(*eax_4)
        eax_4 = &eax_4[1]
        *(&__saved_edi - edi + eax_4 - 4) = fconvert.s(x87_r6_2)
        cond:0_1 = arg3 != 1
        arg3 -= 1
    while (cond:0_1)

int80_t result = sub_4059d0(i_3, arg1[6], &__saved_edi, edi, 0f, *(arg1[1] + 0x80))

if (i_3 s> 0)
    int32_t* eax_7 = &__saved_edi
    int32_t* i_2 = i_3
    int32_t* i
    
    do
        long double x87_r5_2 = fconvert.t(*(arg2 i- &__saved_edi + eax_7)) - fconvert.t(*eax_7)
        eax_7 = &eax_7[1]
        i = i_2
        i_2 -= 1
        eax_7[-1] = fconvert.s(x87_r5_2)
    while (i != 1)
    
    if (i_3 s> 0)
        int32_t ebx_1 = &__saved_edi - edi
        int32_t* i_1
        
        do
            int32_t eax_8
            int16_t x87control
            eax_8, x87control = __ftol(x87control, fconvert.t(*edi) + fconvert.t(0.5))
            
            if (eax_8 s>= 0x28)
                eax_8 = 0x27
            else if (eax_8 s< 0)
                eax_8 = 0
            
            edi = &edi[1]
            i_1 = i_3
            i_3 -= 1
            edi[-1] = fconvert.s(fconvert.t(*(arg1[1] + (eax_8 << 2) + 0x150))
                + fconvert.t(*(edi + ebx_1 - 4)))
        while (i_1 != 1)

return result

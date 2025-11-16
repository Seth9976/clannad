// 函数: sub_76258c
// 地址: 0x76258c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r0

if (data_4ecd220 != 0)
    int32_t eax_2 = arg1 & 0x7f80
    bool cond:0_1 = eax_2 != 0x1f80
    
    if (eax_2 == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        eax_2.w = temp0_1
        eax_2.w &= 0x7f
        cond:0_1 = eax_2.w != 0x7f
    
    if (not(cond:0_1))
        return __CIlog10_pentium4(x87_r0) __tailcall

return sub_76602e(arg2, x87_r0) __tailcall

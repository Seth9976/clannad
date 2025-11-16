// 函数: sub_4d2633
// 地址: 0x4d2633
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg2

if (eax == 0xffffffff)
    void* eax_1 = *(arg6 + 0x100)
    
    if (eax_1 == 0)
        eax = 0
    else
        void* ecx_1 = *(eax_1 + 0x3c)
        
        if (ecx_1 == 0 || *(ecx_1 + 4) != 0xd)
            eax = 0
        else
            eax = *(ecx_1 + 0x44)
            arg1 = *(ecx_1 + 0x40)
            
            if (eax == 0xffffffff)
                eax = 0

int32_t var_10 = eax
int32_t var_14 = arg1

if (zx.d(arg3) == 2 || zx.d(arg3) == 6)
    int32_t var_2c_1 = arg5
    void var_24
    sub_42aba3(*(arg6 + 0xc4), &var_24, arg4 + 0x1388, "%s")
    *(arg6 + 0xd4) = 1

return 0

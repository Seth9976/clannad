// 函数: sub_5ad640
// 地址: 0x5ad640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax

if (arg2 == GetWindowLongW(*(arg1 + 0xe4), 0xfffffff4).w)
    eax = *(arg3 + 8)
    
    if (eax == 0xfffffffd)
        sub_5ad770(arg1)
        LRESULT eax_1
        eax_1.b = 1
        return eax_1
    
    if (eax == 0xffffff41)
        int32_t var_c_1 = *(data_bac408 + 0xa4) + 0xfb0
        sub_587f60(arg3 + 0x2c, *(arg3 + 0xc), arg1 + 0xe0, *(arg3 + 0x10), arg3 + 0x2c)

eax.b = 1
return eax

// 函数: sub_58ad40
// 地址: 0x58ad40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1

if (arg2 == GetWindowLongW(*(arg1 + 0xe4), 0xfffffff4).w)
    int32_t ecx = *(arg3 + 8)
    
    if (ecx == 0xfffffffd)
        sub_58c000(arg1)
        LRESULT eax_1
        eax_1.b = 1
        return eax_1
    
    if (ecx == 0xffffff41)
        int32_t ecx_2 = *(arg3 + 0xc)
        
        if (ecx_2 s>= 0)
            sub_58c210(arg1, ecx_2, arg3 + 0x2c)

int32_t eax
eax.b = 1
return eax

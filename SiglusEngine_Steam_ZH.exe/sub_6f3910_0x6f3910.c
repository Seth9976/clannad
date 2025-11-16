// 函数: sub_6f3910
// 地址: 0x6f3910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *arg1
int32_t var_c = 0

if (ecx != 0)
    int32_t* var_8 = nullptr
    int32_t eax_2
    int32_t ecx_1
    eax_2, ecx_1 = (*(*ecx + 0x48))(ecx, 0, &var_8)
    
    if (eax_2 s>= 0)
        int32_t var_18_2 = ecx_1
        sub_6f65e0(arg2, var_8)
        return arg2
    
    void var_2c
    int16_t* eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_52e820(&var_2c, u"GetSurfaceLevel")
    sub_6f1a40(eax_3, edx_1, eax_2, var_2c)

__builtin_memset(arg2, 0, 0x14)
return arg2

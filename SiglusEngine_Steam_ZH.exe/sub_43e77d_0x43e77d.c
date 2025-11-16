// 函数: sub_43e77d
// 地址: 0x43e77d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
int32_t edi
int32_t var_c = edi

if (esi != 0)
    if (sub_43e52c(arg3, &arg2) s< 0)
        sub_43713d(arg1, arg1 + 0x20, 0xbf4, "vector dimension must be a literal scalar expression")
    else if (arg2 u< 1 || arg2 u> 4)
        int32_t var_10_2 = 4
        sub_43713d(arg1, arg1 + 0x20, 0xbec, "vector dimension must be between 1 and %u")
    else
        void*** eax_3 = sub_42cfa1(0x24)
        
        if (eax_3 != 0)
            return sub_46bbbb(eax_3, 1, *(esi + 0x14), 1, arg2, 0)

return nullptr

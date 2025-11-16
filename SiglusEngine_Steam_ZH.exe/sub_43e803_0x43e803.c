// 函数: sub_43e803
// 地址: 0x43e803
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* edi_1 = arg2

if (edi_1 != 0)
    int32_t eax_1 = sub_43e52c(arg3, &arg3)
    int32_t eax_2
    
    if (eax_1 s>= 0)
        eax_2 = sub_43e52c(arg4, &arg2)
    
    if (eax_1 s< 0 || eax_2 s< 0)
        sub_43713d(arg1, arg1 + 0x20, 0xbf5, "matrix dimensions must be literal scalar expressions")
    else if (arg3 u< 1 || arg3 u> 4 || arg2 u< 1 || arg2 u> 4)
        int32_t var_10_3 = 4
        sub_43713d(arg1, arg1 + 0x20, 0xbed, "matrix dimensions must be between 1 and %u")
    else
        void*** eax_3 = sub_42cfa1(0x24)
        
        if (eax_3 != 0)
            return sub_46bbbb(eax_3, 2, *(edi_1 + 0x14), arg3, arg2, 0)

return nullptr

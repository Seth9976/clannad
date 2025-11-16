// 函数: sub_437606
// 地址: 0x437606
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* esi = arg3
int32_t edi
int32_t var_14 = edi

if ((*(arg2 + 0x10) & *(esi + 0x10)) != 0)
    sub_43713d(arg1, arg1 + 0x20, 0xbe8, "duplicate usages specified")

if (*(arg2 + 0x14) != 0)
    int32_t eax_2 = *(esi + 0x14)
    
    if (eax_2 != 0)
        __builtin_memcpy(arg1 + 0x20, eax_2 + 0x10, 0x20)
        sub_436ffd(arg1, "syntax error")
        esi = arg3

*(arg2 + 0x10) |= *(esi + 0x10)

if (*(arg2 + 0x14) == 0)
    int32_t* esi_2 = *(esi + 0x14)
    
    if (esi_2 != 0)
        int32_t eax_4 = sub_46b5aa(esi_2)
        *(arg2 + 0x14) = eax_4
        
        if (eax_4 == 0)
            return 0x8007000e

return 0

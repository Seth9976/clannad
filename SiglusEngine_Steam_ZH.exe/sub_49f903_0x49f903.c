// 函数: sub_49f903
// 地址: 0x49f903
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *(arg3 + 0x14)
void* edx_1 = *(eax_1 + (arg2 << 2))
void* ecx_1 = *(eax_1 + (arg1 << 2))
int32_t eax_2 = *(ecx_1 + 4)
int32_t esi = *(edx_1 + 4)

if (eax_2 u>= esi)
    if (eax_2 u> esi)
        return 1
    
    long double x87_r7_1 = fconvert.t(*(ecx_1 + 0x20))
    long double temp1_1 = fconvert.t(*(edx_1 + 0x20))
    x87_r7_1 - temp1_1
    eax_2.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double x87_r7_2 = fconvert.t(*(ecx_1 + 0x20))
        long double temp2_1 = fconvert.t(*(edx_1 + 0x20))
        x87_r7_2 - temp2_1
        eax_2.w = (x87_r7_2 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe
        
        if ((eax_2:1.b & 0x41) != 0)
            return 0
        
        return 1

return 0xffffffff

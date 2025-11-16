// 函数: sub_65ccd0
// 地址: 0x65ccd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi_1 = arg2 - arg3
int32_t i = edi_1 s/ 0xe

if (i s> 1)
    int64_t* esi_1 = arg2 - 0xe
    
    do
        int32_t var_24_1 = arg4
        int32_t var_c_1 = esi_1[1].d
        int16_t var_8_1 = *(esi_1 + 0xc)
        int64_t var_14 = *esi_1
        *esi_1 = *arg3
        esi_1[1].d = arg3[1].d
        *(esi_1 + 0xc) = *(arg3 + 0xc)
        int32_t eax_10 = (edi_1 - 0xe) s/ 0xe
        sub_65d050(eax_10, nullptr, arg3, eax_10, &var_14)
        esi_1 -= 0xe
        edi_1 = esi_1 - arg3 + 0xe
        i = edi_1 s/ 0xe
    while (i s> 1)

return i

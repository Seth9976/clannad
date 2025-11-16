// 函数: sub_633f60
// 地址: 0x633f60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi_1 = arg2 - arg3
void* i = edi_1 & 0xfffffff8

if (i s> 8)
    int32_t* esi_1 = arg2 - 8
    
    do
        int32_t var_10 = *esi_1
        int32_t var_c_1 = esi_1[1]
        *esi_1 = *arg3
        esi_1[1] = arg3[1]
        int32_t eax_6 = (edi_1 - 8) s>> 3
        sub_634630(eax_6, nullptr, arg3, eax_6, &var_10, arg4)
        esi_1 -= 8
        edi_1 = esi_1 - arg3 + 8
        i = edi_1 & 0xfffffff8
    while (i s> 8)

return i

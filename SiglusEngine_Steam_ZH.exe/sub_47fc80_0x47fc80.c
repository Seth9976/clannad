// 函数: sub_47fc80
// 地址: 0x47fc80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** var_8 = arg1
int32_t result = sub_458ce7(arg1[0x17] << 2, &var_8)

if (result s< 0)
    return result

void*** eax_2 = var_8
int32_t edi
int32_t var_14_1 = edi
int32_t eax_3 = (*eax_2)[4](eax_2)
void*** eax_4 = var_8
int32_t esi_2
int32_t edi_2
edi_2, esi_2 = __builtin_memcpy((*eax_4)[3](eax_4), arg1[0x16], eax_3 u>> 2 << 2)
__builtin_memcpy(edi_2, esi_2, eax_3 & 3)
*arg2 = var_8
return 0

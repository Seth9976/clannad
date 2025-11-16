// 函数: sub_675200
// 地址: 0x675200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* ecx = data_bac45c
int32_t edi = *(*(ecx + 0x10) + 8)
int32_t eax_1
void* esi_2

if (arg3 s>= edi)
    eax_1 = *(data_bac4ac + 0xa4)
    esi_2 = (arg3 - edi) * 0x164 + *(*(ecx + 0x64) * 0xb8 + eax_1 + 0xa4)
else
    eax_1 = data_bac4b0
    esi_2 = arg3 * 0x164 + *(eax_1 + 0xa4)

return sub_6752c0(eax_1, arg2, esi_2, arg4, arg5, arg6) != 0

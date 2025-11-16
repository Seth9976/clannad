// 函数: sub_4825e8
// 地址: 0x4825e8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
arg1[1] = arg2
*arg1 = &data_ac79bc
arg1[2] = *arg3
void* edi_2 = &arg1[3]
void* esi_1 = arg3 + 4
*edi_2 = *esi_1
void* edi_3 = edi_2 + 4
void* esi_2 = esi_1 + 4
*edi_3 = *esi_2
*(edi_3 + 4) = *(esi_2 + 4)
arg1[6] = 1
arg1[7] = *arg4
int32_t* esi_5 = arg1[7]
int32_t i = 0
arg1[8] = arg4[1]
arg1[9] = arg4[2]
arg1[0xa] = 0
arg1[0xb] = 1
arg1[0xc] = 0

if (esi_5 != 0 && *esi_5 u> 0)
    do
        int32_t eax_4 = sub_48259b(*(esi_5[3] + (i << 2)))
        arg1[0xa] |= eax_4
        int32_t eax_6 = sub_4825bc(*(esi_5[3] + (i << 2)))
        arg1[0xb] &= eax_6
        i += 1
    while (i u< *arg1[7])

return arg1

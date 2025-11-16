// 函数: sub_675130
// 地址: 0x675130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_bac460
int32_t edi = *(data_bac45c + 0x64)
*(sub_548970(ecx + 4, *(ecx + 0xb8) - 1, 1) + 0x2d0) = *(arg4 + 0x10)
sub_65a2f0()
sub_698240(edi, arg3)
void* ecx_2 = data_bac460
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_548970(ecx_2 + 4, *(ecx_2 + 0xb8) - 1, 1)
result[0xc2] = arg3
result[0xb2] = 3
result[0xb3].w = 0
result[0xc0] = edi
result[0xc1] = edi

for (void* i = *(arg4 + 4); i u< *(arg4 + 8); i += 0x164)
    int32_t eax_6 = *(i + 4)
    
    if (eax_6 == 0xa)
        sub_677bb0(*(i + 8))
    else if (eax_6 != 0x14)
        sub_677cd0(i + 0x24)
    else
        sub_60c680(data_bac49c + 0xc, i + 0xc)

result.b = 1
return result

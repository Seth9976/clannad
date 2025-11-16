// 函数: sub_673510
// 地址: 0x673510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *(data_bac408 + 0xa4)
int32_t eax = *(ecx + 0xf7c)
int32_t result

if (eax == 0)
    result.b = *(ecx + 0xf81)
label_673542:
    
    if (result.b != 0)
        result.b = 0
        return result
else
    if (eax == 1)
        result.b = *(ecx + 0xf82)
        goto label_673542
    
    if (eax == 2)
        result.b = *(ecx + 0xf83)
        goto label_673542
int32_t* ecx_1 = data_bac458
sub_62f9b0(ecx_1, ecx_1[0x57] - 0x158)
void* esi = data_bac458
sub_54ae40(*(esi + 0x15c) - 0xcc)
*(esi + 0x15c) -= 0x158
int32_t eax_3
eax_3.b = 1
return 1

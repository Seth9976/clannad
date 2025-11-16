// 函数: sub_4e10a0
// 地址: 0x4e10a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
void* edi_1 = *(arg1 + 0x1cc)
int32_t eax_1 = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t ecx = *(arg1 + 4)
*(edi_1 + 8) = eax_1
int32_t eax_2 = (*ecx)(arg1, 1, 0x400)
int32_t edx = *(arg1 + 4)
*(edi_1 + 0xc) = eax_2
*(edi_1 + 0x10) = (*edx)(arg1, 1, 0x400)
int32_t eax_5 = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t* ecx_1 = *(edi_1 + 0xc)
*(edi_1 + 0x14) = eax_5
int32_t* edi_3 = *(edi_1 + 0x10) - ecx_1
int32_t* eax_7 = *(edi_1 + 8) - ecx_1
int32_t* edi_5 = eax_5 - ecx_1
int32_t result_1 = 0x5b6900
int32_t ebx = 0xff1daf00
int32_t esi_1 = 0xff4d0b80
int32_t edx_1 = 0x2c8d00
int32_t* var_10 = eax_7
int32_t result

while (true)
    *(eax_7 + ecx_1) = esi_1 s>> 0x10
    *ecx_1 = ebx s>> 0x10
    *(edi_3 + ecx_1) = result_1
    *(edi_5 + ecx_1) = edx_1
    result = result_1 - 0xb6d2
    edx_1 -= 0x581a
    esi_1 += 0x166e9
    ebx += 0x1c5a2
    ecx_1 = &ecx_1[1]
    result_1 = result
    
    if (edx_1 s< 0xffd4cb1a)
        break
    
    eax_7 = var_10

return result

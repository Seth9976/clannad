// 函数: sub_621b20
// 地址: 0x621b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(data_bac4a0 + 0x1a8) != 0)
    void* eax
    eax.b = 0
    return eax

int32_t* edi = data_bac458
int32_t eax_1 = *edi

if (eax_1 == 0xe || eax_1 == 0xf || eax_1 == 0x10)
    eax_1.b = 0
    return eax_1

int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2fa0be83, edi[0x57] - edi[0x56])
int32_t edx_1 = edx s>> 6
int32_t esi_2 = (edx_1 u>> 0x1f) + edx_1
int32_t edx_2 = 0

if (esi_2 s> 0)
    int32_t* ecx_2 = edi[0x56]
    
    do
        int32_t eax_4 = *ecx_2
        
        if (eax_4 == 0xe || eax_4 == 0xf || eax_4 == 0x10)
            eax_4.b = 0
            return eax_4
        
        edx_2 += 1
        ecx_2 = &ecx_2[0x56]
    while (edx_2 s< esi_2)

return sub_620ac0() != 0

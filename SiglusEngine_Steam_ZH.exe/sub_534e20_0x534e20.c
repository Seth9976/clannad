// 函数: sub_534e20
// 地址: 0x534e20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = *(arg1 + 0x424)
void* esi = *(arg1 + 0x420)

if (esi == ebx)
    *(arg1 + 0x424) = esi
    return esi

do
    sub_535e30(esi)
    esi += 0x12c
while (esi != ebx)

int32_t eax = *(arg1 + 0x420)
*(arg1 + 0x424) = eax
return eax

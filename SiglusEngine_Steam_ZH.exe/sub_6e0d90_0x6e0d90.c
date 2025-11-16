// 函数: sub_6e0d90
// 地址: 0x6e0d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg1 + 0x14)
int32_t* eax = *esi

if (eax != 0)
    _fclose(eax)

esi[0xf] = esi[0xe]
int32_t result = esi[0x12]
esi[0x13] = result
*esi = 0
esi[2] = 0
esi[0x15] = 0xffffffff
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
return result

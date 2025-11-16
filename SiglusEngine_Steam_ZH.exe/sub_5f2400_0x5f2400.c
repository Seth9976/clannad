// 函数: sub_5f2400
// 地址: 0x5f2400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg1 + 0xc)

if (esi == 0)
    return 

void* ecx = *esi

if (ecx != 0)
    void* var_10_1 = arg1
    void* var_14_1 = ecx
    sub_579a70(ecx, esi[1])
    j__free(*esi)
    *esi = 0
    esi[1] = 0
    esi[2] = 0

j__free(esi)

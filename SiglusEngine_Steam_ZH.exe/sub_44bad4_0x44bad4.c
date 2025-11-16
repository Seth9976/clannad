// 函数: sub_44bad4
// 地址: 0x44bad4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *(arg1 + 0x20)

if (ecx != 0)
    sub_449049(ecx, 3)
    *(arg1 + 0x20) = 0

while (*(arg1 + 0x24) != 0)
    void* ecx_1 = *(arg1 + 0x24)
    *(arg1 + 0x24) = *(ecx_1 + 0x24)
    *(ecx_1 + 0x24) = 0
    sub_443284(ecx_1, 1)

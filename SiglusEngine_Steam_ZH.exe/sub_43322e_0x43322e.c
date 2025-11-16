// 函数: sub_43322e
// 地址: 0x43322e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *(arg1 + 8)

if (ecx != 0)
    sub_433263(ecx, 3)
    *(arg1 + 8) = 0

while (*(arg1 + 0xc) != 0)
    void* ecx_1 = *(arg1 + 0xc)
    *(arg1 + 0xc) = *(ecx_1 + 0xc)
    *(ecx_1 + 0xc) = 0
    sub_42f289(ecx_1, 1)

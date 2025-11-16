// 函数: sub_44bb59
// 地址: 0x44bb59
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 0x38)
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0

if (eax != 0)
    (*(*eax + 8))(eax)
    *(arg1 + 0x38) = 0

int32_t* ecx_1 = *(arg1 + 0x34)

if (ecx_1 != 0)
    sub_448b87(ecx_1, 3)
    *(arg1 + 0x34) = 0

return sub_44bad4(arg1 + 8) __tailcall

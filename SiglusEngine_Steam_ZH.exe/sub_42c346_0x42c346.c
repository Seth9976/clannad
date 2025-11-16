// 函数: sub_42c346
// 地址: 0x42c346
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x268)
void* ecx = *(eax + 0x38)

if (ecx == 0)
    sub_42aba3(arg1 + 0x18, arg1 + 0x278, 0x5e6, "unexpected #endif")
    *(arg1 + 0x44) = 1
    return 0x80004005

*(arg1 + 0x54) = *(ecx + 4)
*(eax + 0x38) = *(ecx + 0xc)
*(ecx + 0xc) = 0
sub_42b93a(ecx, 1)
return 0

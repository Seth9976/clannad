// 函数: sub_49a426
// 地址: 0x49a426
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char eax = (arg1[0x16]).b

if ((eax & 1) == 0 || (eax & 4) == 0)
    sub_46691d(arg1, "No image in file")
    noreturn

arg1[0x16] |= 0x18

if (arg2 != 0)
    sub_46693e(arg1, "Incorrect IEND chunk length")

return sub_49a08a(arg1, arg2)

// 函数: sub_6690f0
// 地址: 0x6690f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0x80004003

*arg3 = 0
int32_t ecx = *arg2

if (ecx == 0 && arg2[1] == 0 && arg2[2] == 0 && arg2[3] == 0)
    return 0x80004002

if ((ecx != 0x34a715a0 || arg2[1] != 0x11d06587 || arg2[2] != 0x20004a92 || arg2[3] != 0x4dacc7af)
        && (ecx != 0 || arg2[1] != ecx || arg2[2] != 0xc0 || arg2[3] != 0x46000000)
        && sub_5cd6c0(arg2, 0xaf2610) == 0 && sub_5cd6c0(arg2, &arg1[5]) == 0)
    return 0x80004002

*arg3 = arg1
(*(*arg1 + 4))(arg1)
return 0

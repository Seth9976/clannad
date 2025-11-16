// 函数: sub_6ec8a0
// 地址: 0x6ec8a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1[2]
int32_t eax = arg1[3]

if (arg2 == 0)
    return 0

if (eax s< arg2)
    ebx = sub_6ec810(arg1, arg2)
    eax = arg1[3]

arg1[3] = eax - arg2
arg1[2] = (ebx * 2) << (arg2.b - 1)
return ebx u>> (0x20 - arg2.b)

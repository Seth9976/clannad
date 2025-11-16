// 函数: sub_6e19c0
// 地址: 0x6e19c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[3] = 0
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[5] = arg1[4]
int32_t eax_2 = arg2[4]
arg1[3] = eax_2
sub_5979b0(&arg1[4], eax_2)
int32_t ecx_1 = arg1[4]

if (ecx_1 == arg1[5])
    ecx_1 = 0

if ((*(*arg2 + 0xc))(ecx_1, arg1[5] - arg1[4]) != arg1[5] - arg1[4])
    int32_t eax_4
    eax_4.b = 0
    return eax_4

*arg1 = arg2[1]
arg1[1] = arg2[2]
arg1[2] = arg2[3]
arg1[3] = arg2[4]
int32_t eax_8
eax_8.b = 1
return eax_8

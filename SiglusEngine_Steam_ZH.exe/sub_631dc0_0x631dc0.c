// 函数: sub_631dc0
// 地址: 0x631dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x2d].b == 0)
    return (*(*arg1 + 4))(0, arg1[0x2c])

int32_t ebx = arg1[0x2c]
int32_t esi_4 = (arg1[0x2a] - arg1[0x29]) s/ 0x118
sub_6322b0(&arg1[0x29], ebx)
int32_t eax_1 = *arg1

if (ebx s<= esi_4)
    return (*(eax_1 + 4))(0, ebx)

(*(eax_1 + 4))(0, esi_4)
return (**arg1)(esi_4, ebx)

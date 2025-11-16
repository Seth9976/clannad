// 函数: sub_55b2b0
// 地址: 0x55b2b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x2d].b == 0)
    return (*(*arg1 + 4))(0, arg1[0x2c])

int32_t ebx = arg1[0x2c]
int32_t edi_2 = (arg1[0x2a] - arg1[0x29]) s>> 2
sub_55c6f0(&arg1[0x29], ebx)
int32_t eax = *arg1

if (ebx s<= edi_2)
    return (*(eax + 4))(0, ebx)

(*(eax + 4))(0, edi_2)
return (**arg1)(edi_2, ebx)

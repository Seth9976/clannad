// 函数: sub_401540
// 地址: 0x401540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[2]
int32_t ecx = arg1[3]
int32_t ebp = arg1[0x17]
arg1[0xb1](*arg1, 0, 0, 2)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(arg1[0xb3](*arg1))
arg1[4] = eax_3
arg1[5] = edx_1
arg1[2] = arg1[4]
arg1[3] = edx_1
void var_10
uint32_t result
int32_t edx_2
result, edx_2 = sub_401640(arg1, &var_10)

if (edx_2 s<= 0 && (edx_2 s< 0 || result u< 0))
    return result

if (sub_40ffd0(&var_10) == ebp)
    if (sub_4017a0(arg1, 0, 0, result, edx_2, result + 1, adc.d(edx_2, 0, result u>= 0xffffffff), 
            ebp, 0) != 0)
        return 0xffffff80
else if (sub_4017a0(arg1, 0, 0, 0, 0, result + 1, adc.d(edx_2, 0, result u>= 0xffffffff), ebp, 0)
        s< 0)
    return 0xffffff80

sub_4019c0(arg1, eax, ecx)
return sub_401d50(arg1, 0, 0)

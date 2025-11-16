// 函数: sub_99cea0
// 地址: 0x99cea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* eax = arg1[0x10]
int32_t* ecx_1 = *(eax + 0x68)
int32_t eax_2 = *(*(eax + 4) + 0x1c)
sub_99cc30(arg1)
int32_t ecx_3 = arg2[1]
int32_t eax_3 = *arg2
__builtin_memset(&arg1[1], 0, 0x14)
arg1[5] = ecx_3
arg1[4] = eax_3
arg1[3] = eax_3

if (sub_742fa0(&arg1[1], 1) != 0)
    return 0xffffff79

int32_t eax_6 = sub_742fa0(&arg1[1], ecx_1[0xb])

if (eax_6 != 0xffffffff)
    arg1[0xa] = eax_6
    int32_t* eax_7 = *(eax_2 + (eax_6 << 2) + 0x20)
    
    if (eax_7 != 0)
        int32_t eax_8 = *eax_7
        arg1[7] = eax_8
        
        if (eax_8 == 0)
            arg1[6] = 0
            arg1[8] = 0
        label_99cf6c:
            arg1[0xc] = arg2[4]
            arg1[0xd] = arg2[5]
            arg1[0xe] = arg2[6]
            arg1[0xf] = arg2[7]
            arg1[0xb] = arg2[3]
            arg1[9] = 0
            *arg1 = 0
            return 0
        
        arg1[6] = sub_742fa0(&arg1[1], 1)
        int32_t eax_10 = sub_742fa0(&arg1[1], 1)
        arg1[8] = eax_10
        
        if (eax_10 != 0xffffffff)
            goto label_99cf6c

return 0xffffff78

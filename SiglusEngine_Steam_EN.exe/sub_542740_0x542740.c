// 函数: sub_542740
// 地址: 0x542740
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
char* esi = arg3
int32_t ecx = 0xffffffff
var_8 = 0xffffffff

if (esi != 0 && *esi != 0)
    do
        arg1 = *esi
        
        if (arg1 u< 0x80)
        label_542777:
            
            if (arg1 == 0x3f)
                uint32_t eax_2 = sub_542610(&esi[1], &var_8)
                char* ecx_2 = var_8
                *esi = 0
                *arg2 = ecx_2
                return eax_2
            
            esi = &esi[1]
        else if (arg1 u< 0xa0)
            if (arg1 u>= 0xfe)
                goto label_542777
            
            esi = &esi[2]
        else
            if (arg1 u<= 0xdf || arg1 u>= 0xfe)
                goto label_542777
            
            esi = &esi[2]
    while (*esi != 0)

int32_t eax_1 = arg4 - 1

switch (eax_1)
    case 0
        if (data_703844 != 0)
            *arg2 = data_703848
            return eax_1
    case 1
        if (data_70384c != 0)
            *arg2 = data_703850.d
            return eax_1
    case 2
        if (data_703850:4 != 0)
            *arg2 = data_703850:8
            return eax_1
    case 3
        eax_1 = arg5
        
        if (eax_1 s>= 0 && eax_1 s< data_7031bc)
            if (*((eax_1 << 2) + &data_70386c) != 0)
                *arg2 = *((eax_1 << 2) + &data_70406c)
                return eax_1
            
            if (data_703864 != 0)
                ecx = data_703868
    case 4
        if (data_703850:0xc != 0)
            *arg2 = data_703860
            return eax_1

*arg2 = ecx
return eax_1

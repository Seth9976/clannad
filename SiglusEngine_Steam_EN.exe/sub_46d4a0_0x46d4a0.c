// 函数: sub_46d4a0
// 地址: 0x46d4a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t edi = 0
int32_t var_8 = 0
int32_t var_c = 0

if (arg3 s>= 0 && arg3 s< data_7031bc)
    int32_t eax = arg2 + (arg3 << 1)
    
    switch (*(eax * 0x650 + &data_72d6bc) - 1)
        case 0, 4, 5, 7, 8
            int32_t edx = arg4
            
            if (edx == 0xffffffff)
                edx = *(eax * 0x650 + &data_72d7fc)
            
            sub_426760(&var_8, edx, *(eax * 0x7a0 + &data_98bf04), &var_8, &var_c)
            esi = var_8
            edi = var_c

*arg5 = esi
*arg6 = edi
return arg6

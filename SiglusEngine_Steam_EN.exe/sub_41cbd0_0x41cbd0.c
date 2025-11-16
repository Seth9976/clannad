// 函数: sub_41cbd0
// 地址: 0x41cbd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = data_134ce60
int32_t* esi = data_134ce68
int32_t edi = 0
int32_t var_8 = arg1

if (result s> 0)
    do
        if (esi[3] == arg1)
            sub_4d6c40(&esi[5], &esi[6])
            int32_t ecx_1 = esi[1]
            void var_c
            
            if (ecx_1 s> 0 && *((ecx_1 << 2) + &data_610fb0) != 3)
                sub_4e76e0(&var_c, esi[2], ecx_1, &var_c, &data_704898)
            arg1 = var_8
            *esi = 1
            result = data_134ce60
        
        edi += 1
        esi = &esi[8]
    while (edi s< result)

return result

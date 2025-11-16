// 函数: sub_57ae80
// 地址: 0x57ae80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s>= 0x40 || (*(arg4 + 0x2c68) != 0 && data_12a2988 s< 2))
    return 

void* edi_2 = arg4 + 0x2ca0
arg1 = arg2 + 0xa0
int32_t edx = arg5
int32_t i_1 = 8
int32_t* var_8_1 = arg1
int32_t i_2 = 8
void* esi_1 = edi_2 + 4
int32_t i

do
    if (*arg1 == edx)
        if (data_20f20d4 != 0)
            sub_425da0(*edi_2, esi_1)
        label_57af2b:
            arg1 = var_8_1
            i_1 = i_2
            edx = arg5
        else
            int32_t* ebx_1 = *edi_2
            
            if (*(esi_1 + 0x4c) != 0 && *(esi_1 + 0x48) != 0 && ebx_1 u<= 0x1ff)
                void* eax = sub_425430(ebx_1, 1)
                
                if (*(ebx_1 * 0x74 + 0x13747b0) != 0)
                    sub_424660(eax, esi_1, ebx_1 * 0x74 + 0x13747b0, 0, 0xffffffff, 0, 0)
                
                goto label_57af2b
    
    arg1 = &arg1[0x10]
    edi_2 += 0x128
    esi_1 += 0x128
    var_8_1 = arg1
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)

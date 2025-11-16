// 函数: sub_4258e0
// 地址: 0x4258e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t var_8_1 = arg1
void* ebx = &data_1374760
int32_t i = 0
void* esi = &data_1374790

do
    if (*(esi + 0x1c) != 0)
        int32_t eax_1 = *(esi - 4)
        
        if (eax_1 == arg1 && eax_1 u<= 0x100)
            int32_t edx_1
            
            if (*((eax_1 << 2) + &data_2073cb8) != 0)
                edx_1 = eax_1 * 0x7e8 + 0x1ff4cd8
            label_425934:
                
                if (sub_4d1be0(eax_1, edx_1, esi, 0x10) == 0)
                    *(ebx + 0x4c) += 1
                    return i
            else
                eax_1 = sub_495490(eax_1)
                
                if (eax_1 != 0)
                    edx_1 = eax_1 + 8
                    goto label_425934
            arg1 = var_8_1
    
    i += 1
    ebx += 0x74
    esi += 0x74
while (i s< 0x200)

return 0xffffffff

// 函数: sub_57f0f0
// 地址: 0x57f0f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 u> 0x3f)
    return 

int32_t i_1 = 8
void* ebx_2 = arg1 * 0x2d0 + &data_8fcb48
int32_t* esi_2 = arg1 * 0x3920 + 0xf8c79c
int32_t i

do
    int32_t edi_1 = *esi_2
    int32_t eax
    
    if (edi_1 s>= 0 && edi_1 u<= 0x1ff)
        eax = edi_1 * 0x74 + &data_1374760
        *(eax + 0x4c) -= 1
        
        if (*(eax + 0x4c) s<= 0)
            sub_4d6c40(eax + 0x50, eax + 0x54)
            eax = sub_425320(edi_1)
    
    *esi_2 = 0xffffffff
    eax = sub_4d1ba0(eax, 0x24, ebx_2, 0)
    *(ebx_2 + 0x24) = 0xffffffff
    ebx_2 += 0x40
    esi_2 = &esi_2[0x4a]
    i = i_1
    i_1 -= 1
while (i != 1)

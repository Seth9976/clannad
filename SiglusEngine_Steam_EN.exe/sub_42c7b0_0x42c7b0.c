// 函数: sub_42c7b0
// 地址: 0x42c7b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1
int32_t i_1 = 2
int32_t var_c = edi
void* ebx = &data_ef0be8
void* esi = &data_ef0d1c
int32_t result
int32_t i

do
    *ebx = 0
    sub_4d1ba0(result, 0x24, ebx + 4, 0)
    
    if (edi != 0)
        int32_t edi_1 = *(esi - 0x20)
        
        if (edi_1 != 0xffffffff && edi_1 u<= 0x1ff)
            *(edi_1 * 0x74 + &data_13747ac) -= 1
            
            if (*(edi_1 * 0x74 + &data_13747ac) s<= 0)
                sub_4d6c40(edi_1 * 0x74 + 0x13747b0, edi_1 * 0x74 + 0x13747b4)
                sub_425320(edi_1)
        
        sub_42e670(esi - 0x14)
    
    *(esi - 0x20) = 0xffffffff
    sub_42da30(esi - 0x14)
    ebx += 0x88
    edi = var_c
    *(esi + 0x30) = data_13926fc
    result = data_13926f8
    *(esi - 4) = 0xffffffff
    *esi = 0xffffffff
    *(esi + 4) = 0xffffffff
    *(esi - 0x14) = 0
    *(esi - 0x10) = 0
    *(esi - 8) = 0
    *(esi + 0xc) = 0
    *(esi + 0x24) = 1
    *(esi + 0x28) = 0
    *(esi + 0x2c) = 0
    *(esi + 0x34) = result
    *(esi + 0x38) = 0
    *(esi + 0x3c) = 0
    *(esi + 0x40) = 0
    esi += 0x180
    i = i_1
    i_1 -= 1
while (i != 1)
return result

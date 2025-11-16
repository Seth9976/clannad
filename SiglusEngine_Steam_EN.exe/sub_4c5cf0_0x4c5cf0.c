// 函数: sub_4c5cf0
// 地址: 0x4c5cf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = &data_20ae990
char* edx = arg1
int32_t result = 0xffffffff
char* var_8 = edx

for (int32_t i = 0; i s< 0x20; )
    if (*(esi + 0x2c) != 0)
        if (*esi == arg2 && *(esi + 4) == 0 && *(esi + 8) == 0x190)
            if (sub_4d0f10(esi + 0xc, edx) == 0)
                *(esi + 0x34) += 1
                result = i
                *(esi + 0x38) = 0
                break
            
            edx = var_8
        
        if (sub_4d0f10(esi + 0xc, edx) != 0)
            DeleteObject(*(esi + 0x2c))
            HGDIOBJ ho = *(esi + 0x30)
            
            if (ho != 0)
                DeleteObject(ho)
            
            *(esi + 0x2c) = 0
            *(esi + 0x30) = 0
            *(esi + 0x34) = 0
            *(esi + 0x38) = 0
            *(esi + 0xc) = 0
        
        edx = var_8
    
    i += 1
    esi += 0x3c

int32_t esi_1 = 2
void* ecx_2 = &data_20ae9c8

do
    if (esi_1 - 2 != result && *(ecx_2 - 0xc) != 0)
        *ecx_2 += 1
    
    if (esi_1 - 1 != result && *(ecx_2 + 0x30) != 0)
        *(ecx_2 + 0x3c) += 1
    
    if (esi_1 != result && *(ecx_2 + 0x6c) != 0)
        *(ecx_2 + 0x78) += 1
    
    if (esi_1 + 1 != result && *(ecx_2 + 0xa8) != 0)
        *(ecx_2 + 0xb4) += 1
    
    esi_1 += 4
    ecx_2 += 0xf0
while (esi_1 - 2 s< 0x20)

return result

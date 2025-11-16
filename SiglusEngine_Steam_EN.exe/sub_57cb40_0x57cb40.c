// 函数: sub_57cb40
// 地址: 0x57cb40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx
edx.b = data_1b8a6d0 != 0
void* esi = &data_f89afc
int32_t var_c = edx
int32_t var_8 = 0
int32_t i_3 = 0x40
int32_t i

do
    if (*(esi + 0x2b6c) != 0xffffffff)
        int32_t var_18_1 = edx
        int32_t eax
        int32_t ecx
        eax, ecx = sub_57c8a0(eax, esi, ecx)
        edx = var_c
        var_8 |= eax
    
    esi += 0x3920
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t eax_1 = 0

if (data_131d2d0 != 0xffffffff && data_131d2f4 != 0xffffffff)
    eax_1 = sub_416c90(edx)

int32_t eax_8 = eax_1 | var_8

if (eax_8 == 0)
    if (data_7192a4 == eax_8 || data_1372c24.b == eax_8.b)
    label_57cbea:
        
        if (data_1b8ad80.d != 0)
            int32_t eax_3 = data_1b8ad80:0xc
            
            if (eax_3 u<= 0x3f && *(eax_3 * 0x3920 + &data_f89ba4) != 0)
                *(eax_3 * 0x3920 + &data_f89bcc) += 1
            
            sub_499600(&data_1b8ad80)
        
        void* eax_6 = &data_f89bcc
        void* ecx_2 = &data_1090b6c
        int32_t i_2 = 0x40
        int32_t i_1
        
        do
            if (*(eax_6 - 0x28) != 0 && *ecx_2 == 0xffffffff)
                *eax_6 += 1
            
            eax_6 += 0x3920
            ecx_2 += 0x1d4
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        data_13701d8 = i_2
        data_137010c = 1
        
        if (data_1af1768 != i_2)
            data_1af177c = 1
            data_1af1768 = i_2
        
        int32_t edx_2 = data_7192e8
        int32_t ecx_3
        
        if (edx_2 s<= 0)
            ecx_3 = 4
            data_7192a0 = 0
            data_71929c = 4
        else
            data_7192e8 = edx_2 - 1
            int32_t eax_7 = *(((edx_2 - 1) << 2) + &data_7192ec)
            data_71929c = eax_7
            sub_4d1c30(eax_7, ((edx_2 - 1) << 6) + 0x71936c, &data_7192a0, 0x40)
            ecx_3 = data_71929c
        
        eax_8 = data_1af1788
        data_7192e0 = 0
        
        if (ecx_3 == 0x11)
            eax_8 = 1
        
        data_1af1788 = eax_8
    else
        if (data_1374088 == 1)
            int32_t eax_2 = data_1374094
            
            if (eax_2 u< data_137408c)
                return eax_2
            
            goto label_57cbea
        
        if (data_1374094 u<= 0)
            goto label_57cbea

return eax_8

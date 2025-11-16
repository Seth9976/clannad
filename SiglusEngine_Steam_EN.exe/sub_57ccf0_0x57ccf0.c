// 函数: sub_57ccf0
// 地址: 0x57ccf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
int32_t i = 0
int32_t var_c = 0
void* edi = &data_f8d2e0
void* esi = &data_8fcaf4

do
    void* edx_1 = *edi
    
    if (*(edi - 4) != edx_1)
        int32_t ecx_1 = 0
        void* eax_1 = 0xffffffff
        
        if ((data_13132c8 == 0 || data_703734 == 0) && data_70383c == 0 && data_13130b8 == 0
                && *(esi - 4) != 0)
            if (edx_1 == 0)
                eax_1 = *(esi + 8)
                ecx_1 = *(esi + 0xc)
            else
                eax_1 = *esi
                ecx_1 = *(esi + 4)
        
        sub_57b500(eax_1, edx_1, i, eax_1, ecx_1)
        int32_t eax_2 = *edi
        int32_t ecx_3 = var_8
        *(edi - 4) = eax_2
        
        if (eax_2 != 0)
            ecx_3 = 1
        
        var_c = 1
        var_8 = ecx_3
    
    i += 1
    esi += 0x2d0
    edi += 0x3920
while (i s< 0x40)

if ((sub_417610() | var_c) == 0)
    int32_t ecx_5 = 0
    void* eax_7 = &data_f8d300
    
    while (*eax_7 == 0)
        ecx_5 += 1
        eax_7 += 0x3920
        
        if (ecx_5 s>= 0x40)
            data_13130b8 = 0
            return 0
else
    sub_48d040(data_71929c, &data_7192a0)
    int32_t var_4c = var_8
    int32_t var_48_1 = 0
    data_71929c = 0x25
    sub_4d1c30(var_8, &var_4c, &data_7192a0, 0x40)
    data_7192e0 = 0

return 1

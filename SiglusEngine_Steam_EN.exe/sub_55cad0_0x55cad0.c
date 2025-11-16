// 函数: sub_55cad0
// 地址: 0x55cad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1332b34
void* ebx = data_1332b60
void* edi = data_1332b64
void* result
void var_48

if (eax s< 0)
    result = neg.d(eax)
    
    if (result s< 0xff)
        int32_t esi_3 = data_1332b30
        int32_t esi_5 = esi_3 - divs.dp.d(sx.q(esi_3 * 0xff), 0xff - result) - data_1332b3c
        int32_t esi_6 = data_1321ecc
        int32_t esi_8 = esi_6 - divs.dp.d(sx.q(esi_6 * 0xff), 0xff - result) - data_1332b38
        int32_t eax_32 = divs.dp.d(sx.q((ebx - 1 - data_1332b30) * 0xff), 0xff - result)
            - data_1332b3c + data_1332b30
        result = divs.dp.d(sx.q((edi - 1 - data_1321ecc) * 0xff), 0xff - result)
        void* edx_23 = result - data_1332b38 + data_1321ecc
        
        if (eax_32 - esi_5 + 1 s> 0)
            result = edx_23 - esi_8 + 1
            
            if (result s> 0)
                int32_t var_24_2 = 0
                int32_t var_28_2 = 0xff
                int32_t var_2c_2 = 0
                int32_t var_30_2 = 0
                int32_t var_34_2 = 0
                int32_t var_38_2 = 0
                int32_t var_4c_2 = 0
                int32_t var_54_2 = 0xffffffff
                int32_t var_58_2 = 0xffffffff
                int32_t var_5c_2 = 0xffffffff
                int32_t var_60_2 = 0xffffffff
                int32_t var_6c_2 = 0
                int32_t var_70_2 = 0
                return sub_5856e0(ebx - 1, ebx, arg1, edi, 0, 0, ebx - 1, edi - 1, data_1332b54, 
                    ebx, edi, 0, esi_5, esi_8, eax_32, edx_23, 0, 0, ebx, edi, 0xff, 0xffffffff, 
                    0xffffffff, 0xffffffff, eax_32 - esi_5 + 1, 0, var_48)
else
    if (eax s>= 0xff)
        eax = 0xff
    
    int32_t ecx_4 = data_1332b30 - (0xff - eax) * data_1332b30 s/ 0xff - data_1332b3c
    int32_t ecx_9 = data_1321ecc - (0xff - eax) * data_1321ecc s/ 0xff - data_1332b38
    int32_t eax_14 = (ebx - 1 - data_1332b30) * (0xff - eax) s/ 0xff - data_1332b3c + data_1332b30
    result = eax_14 - ecx_4 + 1
    void* ecx_17 = (edi - 1 - data_1321ecc) * (0xff - eax) s/ 0xff - data_1332b38 + data_1321ecc
    
    if (result s> 0)
        result = ecx_17 - ecx_9 + 1
        
        if (result s> 0)
            int32_t var_24_1 = 0
            int32_t var_28_1 = 0xff
            int32_t var_2c_1 = 0
            int32_t var_30_1 = 0
            int32_t var_34_1 = 0
            int32_t var_38_1 = 0
            int32_t var_4c_1 = 0
            int32_t var_54_1 = 0xffffffff
            int32_t var_58_1 = 0xffffffff
            int32_t var_5c_1 = 0xffffffff
            int32_t var_60_1 = 0xffffffff
            int32_t var_6c_1 = 0
            int32_t var_70_1 = 0
            return sub_5856e0(ebx - 1, ebx, arg1, edi, 0, 0, ebx - 1, edi - 1, data_1332b54, ebx, 
                edi, 0, ecx_4, ecx_9, eax_14, ecx_17, 0, 0, ebx, edi, 0xff, 0xffffffff, 0xffffffff, 
                0xffffffff, ecx_17, 0, var_48)
return result

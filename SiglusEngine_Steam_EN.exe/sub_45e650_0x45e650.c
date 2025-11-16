// 函数: sub_45e650
// 地址: 0x45e650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_20f3394
int32_t edx = data_20f3380
int32_t eax_1 = data_20f3390
int32_t eax_2 = data_20f338c
int32_t eax_3 = data_20f3388
int32_t eax_4 = data_20f337c
int32_t eax_5 = data_20f3378
int32_t ecx = data_20f3384
void* result = *(arg1 + 0x10)
int32_t var_28 = ecx
int32_t var_2c = edx

if (result s> 0)
    void* esi_1 = *(arg1 + 0xc)
    
    if (esi_1 != 0)
        int32_t i = 0
        
        if (result s> 0)
            int32_t eax_8 = ecx - eax_4 + 1
            int32_t eax_11 = edx - eax_5 + 1
            
            do
                int32_t var_3c_1 = 0
                uint32_t var_40_1 = zx.d(*(esi_1 + 0x30))
                int32_t var_44_1 = neg.d(*(esi_1 + 0x2c))
                int32_t var_48_1 = 0
                int32_t var_4c_1 = 0
                int32_t var_50_1 = 0
                void var_60
                result = sub_5856e0(esi_1 + 0x64, data_702fec, data_702fe8, data_702ff0, eax_3, 
                    eax_2, eax_1, eax, esi_1 + 0x64, eax_11, eax_8, 1, eax_5, eax_4, edx, ecx, 
                    *(esi_1 + 0x24), *(esi_1 + 0x28), *(esi_1 + 4), *(esi_1 + 8), (data_702ff4).b, 
                    data_702ff8, data_702ffc, data_703000, ecx, 0, var_60)
                esi_1 += *esi_1
                i += 1
                ecx = var_28
                edx = var_2c
            while (i s< *(arg1 + 0x10))

return result

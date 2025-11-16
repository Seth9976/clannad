// 函数: sub_4c5b60
// 地址: 0x4c5b60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t edx = data_1c04200
int32_t esi = arg3
int32_t ecx = data_1c041fc

if (edx - 0x10 u<= 0x20)
    if (esi - 0x8140 u<= 0x296)
        esi -= 0x80c0
        
        if (esi u< 0x336)
            goto label_4c5ba5
    else if (esi u< 0x80)
    label_4c5ba5:
        int32_t esi_1 = esi << 6
        void* esi_2
        
        if (ecx s> 0)
            esi_2 = esi_1 + &data_20a1bc0
        else
            esi_2 = esi_1 + &data_20a1ba0
            ecx = 0
        
        if (*esi_2 != 0 && *(esi_2 + 0x18) == edx && zx.d(*(esi_2 + 0x1c)) == ecx
                && zx.d(*(esi_2 + 0x1d)) == data_1c041f8)
            int32_t edx_1 = *(esi_2 + 0xc)
            *arg4 = *(esi_2 + 8)
            int32_t result = *(esi_2 + 4)
            *arg5 = edx_1
            *arg6 = *(esi_2 + 0x10)
            *arg7 = *(esi_2 + 0x14)
            return result

return 0

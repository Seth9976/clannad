// 函数: sub_5d2980
// 地址: 0x5d2980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = data_bac484

if (arg2[4] != 0)
    sub_5d26f0(esi)
    int32_t* ecx_3 = *(esi + 0x124) * 0x2e60 + *(esi + 0x10c) + 0x1c
    
    if (ecx_3 != arg1)
        sub_52e3c0(ecx_3, arg1, 0, 0xffffffff)
    
    int32_t* ecx_6 = *(esi + 0x124) * 0x2e60 + 0x34 + *(esi + 0x10c)
    
    if (ecx_6 != arg2)
        sub_52e3c0(ecx_6, arg2, 0, 0xffffffff)
    
    *(*(esi + 0x124) * 0x2e60 + *(esi + 0x10c) + 0x2e48) = arg3
    *(*(esi + 0x124) * 0x2e60 + *(esi + 0x10c) + 0x2e4c) = arg4
    *(esi + 0x120) = *(esi + 0x124)

int32_t result
result.b = 1
return result
